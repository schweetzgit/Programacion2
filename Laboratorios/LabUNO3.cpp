/*Escribe un programa para calcular el numero de días 
que hay entre dos fechas; declara fecha como un estructura..*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
struct fecha{
	int day; 
	int month;
	int year;
};
void leer(struct fecha*);
int diference(struct fecha, struct fecha);

int main(){
	struct fecha date1, date2;
	int result;
	char answer;
	do{
		system("cls");
		leer(&date1);
		leer(&date2);
		result = diference(date1, date2); 	
		printf("\n Hay %d dias entre ambas fechas.\n",result);
		printf("\n %cRepetir programa? s/n: ",168);
		fflush(stdin);
		scanf("%c",&answer);
	} while (tolower(answer) == 's');
	system("pause");
	return 0;
}
void leer(struct fecha *dt){
	printf("\n Introduce una fecha\n");
	do{
		printf(" Dia: "); 	
		scanf("%d",&dt->day);	
	}while(dt->day <= 0 || dt->day > 31);
	do{
		printf(" Mes: "); 
		scanf("%d",&dt->month);
	}while(dt->month <= 0 || dt->month > 12);
	printf(" A%co: ",164); 	
	scanf("%d",&dt->year);
}
int diference(struct fecha d1, struct fecha d2){
	int dday, dmonth, dyear, dif;
	dday = (d1.day - d2.day);
	dmonth = (d1.month - d2.month)*30;
	dyear = (d1.year - d2.year)*365;
	dif = (dday + dmonth + dyear);
	if (dif >= 0){
		return (dif);
	} else{
		return (dif)*-1;
	}
}
// negativos, años bisiesntos, 

/*if(año == 1998 || 2005 || 4639 ||){
	if (mes == 2){
		mes*29;
	}
	if (mes == 1 || 5 ||8 ){
		mes*31;
	}
	else{
		mes*30;
	}
}*/

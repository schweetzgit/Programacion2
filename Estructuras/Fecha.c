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
struct fecha leer();
int diference(struct fecha, struct fecha);
int main(){
	struct fecha date1, date2;
	int result;
	char answer;
	do{
		system("cls");
		date1 = leer();
		date2 = leer();
		result = diference(date1, date2); 	
		printf("\n Hay %d dias entre ambas fechas.\n",result);
		printf("\n %cRepetir programa? s/n: ",168);
		fflush(stdin);
		scanf("%c",&answer);
	} while (tolower(answer) == 's');
	system("pause");
	return 0;
}
struct fecha leer(int date){
	struct fecha dt;
	printf(" Introduce una fecha (dia, mes, a%co): ",164);
	scanf("%d %d %d",&dt.day,&dt.month,&dt.year);	
	return (dt);
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

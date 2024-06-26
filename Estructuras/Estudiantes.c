#include <stdio.h>
#include <stdlib.h>

struct info{
	char num_est[9], nom_est[40];
	int sem_est, cod_carr;
	float cal1, cal2, cal3, cal4, prom_est;
};
typedef struct info tipo_estu;
tipo_estu leer();


int main(){
	tipo_estu estudiante[50];
	int i, n, est_menor, min = 0;
	float prom = 0;
	printf(" \n Numero de estudiantes (max.50): ");
	scanf("%d",&n);
	for (i = 0; i < n; i++){
		estudiante[i] = leer();
		estudiante[i].prom_est = ((estudiante[i].cal1 + estudiante[i].cal2 + estudiante[i].cal3 + estudiante[i].cal4)/4);
		printf("Promedio: %.2f",estudiante[i].prom_est);
		if(estudiante[i].prom_est < estudiante[min].prom_est){
			est_menor = i;
			prom = estudiante[i].prom_est;
		}
	}
	printf(" El estudianate con menor promedio es el %d y su promedio fue %.2f\n",est_menor+1, prom);
	//printf("\n El promedio del estudiante es: %.2f\n",estudiante.prom_est);
	system("pause");
	return 0;
}
tipo_estu leer(){
	tipo_estu e;
	/*printf("\n Dame los datos.");
	printf("\n Codigo del estudiante: ");
	fflush(stdin);
	gets(e.cod_est);
	printf(" Nombre de estudiante: ");
	fflush(stdin);
	gets(e.nom_est);
	printf(" Semestre que cursa: ");
	scanf("%d",&e.sem_est);
	printf(" Codigo de carrera: ");
	scanf("%d",&e.cod_carr);*/
	printf(" Calificaiones: ");
	scanf("%f %f %f %f",&e.cal1,&e.cal2,&e.cal3,&e.cal4);
	return e;
}


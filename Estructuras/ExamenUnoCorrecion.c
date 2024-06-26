#include <stdio.h>
#include <stdlib.h>

typedef struct estudiante{
	char nom_est[40];
	int num_cta, grupo;
	float cal1, cal2, cal3, prom_est;
}alumno;
enum opciones{leer = 1, imprimir = 2, promindv = 3, promGrupal = 4, menorCal = 5, salir = 6};

void capturar(struct estudiante [50], int);
void mostrar(struct estudiante [50], int, int);
float promedioGrupal(struct estudiante [50], int);
void menor(struct estudiante [50], int);
float promIndividual(struct estudiante [50], int);

int main(){
	alumno alumnos[50];
	enum opciones opc;
	int i, est_menor, min = 0, x, tmos;
	float prom = 0, promGru;
	printf("\n\t Bitacora de calificaiones.\n");
	do{
		printf("\n 1.Capturar datos\t 2.Impresion de datos\n 3.Promedio individual\t 4.Promedio grupal\n 5.Estudiante con menor promedio\n 6.Salir\n Escoge una opcion: ");
		scanf("%d",&opc);
		switch(opc){
			case leer:
				do{
					printf("\n Dame el total de alumnos a capturar (50 max.): ");
					scanf("%d",&x);
				} while(x < 0 || x > 50);
				capturar(alumnos,x);
			break;
			case imprimir:
				printf("\n Dame el total de alumnos a mostrar: ");
				scanf("%d",&tmos);
				mostrar(alumnos,x,tmos);
			break;
			case promindv:
				promIndividual(alumnos, x);
			break;
			case promGrupal:
				promGru = promedioGrupal(alumnos,x);
				printf("\n El promedio grupal es de: %.2f\n",promGru);
			break;
			case menorCal:
				menor(alumnos,x);
			break;
			case salir:
				exit(0);
			break;
			default:
				printf("\n Opcion no valida,");
			break;
		}
	} while(opc != 6);
	system("pause");
	return 0;
}
void capturar(struct estudiante e[50], int x){
	for (int i = 0; i < x; i++){
		printf("\n Dame los datos.");
		printf("\n Nombre de estudiante: ");
		fflush(stdin);
		gets(e[i].nom_est);
		printf(" Numero de cuenta (numeros): ");
		scanf("%d",&e[i].num_cta);
		printf(" Grupo (numeros): ");
		scanf("%d",&e[i].grupo);
		printf(" Tres calificaiones: ");
		do{
			scanf("%f %f %f",&e[i].cal1,&e[i].cal2,&e[i].cal3);	
		}while(e[i].cal1 < 0 || e[i].cal1 > 10 && e[i].cal2 < 0 || e[i].cal2 > 10 && e[i].cal3 < 0 || e[i].cal3 > 10);
	}
}
void mostrar(struct estudiante e[50], int x, int y){
	if (x == 0){
		printf("\n No has capturado datos.\n");
	} else{
		if (x < y){
			y = x; 
			printf(" El total de datos capturados es: %d\n",x);
		}
		for (int i = 0; i < x; i++){
			printf("\n Nombre: %s\n",e[i].nom_est);
			printf(" Numero de cuenta: %d\n",e[i].num_cta);
			printf(" Grupo: %d\n",e[i].grupo);
			printf(" Calificaiones: %.2f, %.2f, %.2f\n",e[i].cal1,e[i].cal2,e[i].cal3);
		}
	}
}
float promedioGrupal(struct estudiante e[50], int x){
	float prome;
	if (x == 0){
		printf("\n No has capturado datos.\n");
	} else{
		for(int i = 0; i < x; i++){
			prome += e[i].prom_est;
		}
		return(prome/x);
	}
}
void menor(struct estudiante e[50], int x){
	float prom = 0;
	int i, est_menor, min = 0;
	if (x == 0){
		printf("\n No has capturado datos.\n");
	} else{
		for (i = 0; i < x; i++){
			e[i].prom_est = ((e[i].cal1 + e[i].cal2 + e[i].cal3)/3);
			printf("\n Promedio: %.2f",e[i].prom_est);
			if(e[i].prom_est < e[min].prom_est){
				est_menor = i;
				prom = e[i].prom_est;
			}
		}
		printf("\n El estudiante con menor promedio es el numero %d\n",est_menor+1);
	}
}
float promIndividual(struct estudiante e[50], int x){
	if (x == 0){
		printf("\n No has capturado datos.\n");
	} else{
		for (int i = 0; i < x ; i++){
		e[i].prom_est = ((e[i].cal1 + e[i].cal2 + e[i].cal3)/3);
		printf("\n");
		printf(" Promedio alumno %d: %.2f",i+1,e[i].prom_est);
		}
		printf("\n");
	}
}

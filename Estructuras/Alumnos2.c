#include <stdio.h>
#include <stdlib.h>

typedef struct estudiante{
	char nom[35], direc[35];
	int edad;
}alumnos;

void capturar(struct estudiante [50], int);
void mostrar(struct estudiante [50], int, int);
int main(){
	alumnos alumno[50];
	int opc,n = 0,tmos;
	do{
		printf("\n 1.- Capturar \n 2.- Mostrar\n 3.- Salir\n"); 
		scanf("%d",&opc);
		if (opc == 1){
			printf("\n Dame el total de alumnos a capturar: ");
			scanf("%d",&n);
			capturar(alumno, n);
		}
		else if(opc == 2){
		printf("\n Dame el total de alumnos a mostrar: ");
		scanf("%d",&tmos);
		mostrar(alumno, n,tmos);
		}
	}while (opc!=3);
	system("pause"); 
	return 0;
}
void capturar(struct estudiante a[50], int x){
	for (int i = 0; i < x; i++){
		printf ("\nNombre: "); fflush(stdin); gets(a[i].nom);
		printf ("\nDomicilio: "); fflush(stdin); gets(a[i].direc);
		printf ("\nEdad: "); scanf("%d",&a[i].edad);
	}
}
void mostrar(struct estudiante a[50], int x, int y){
	if (x == 0){
		printf("\n No has capturado datos.");
	} else{
		if (x < y){
			y = x; 
			printf(" El total de datos capturados es: %d\n",x);
		}
		for (int i= 0; i < x; i++){
			printf("\n Nombre: %s\n",a[i].nom);
			printf(" Domicilio: %s\n",a[i].direc);
			printf(" Edad: %d\n",a[i].edad);
		}
	}
}

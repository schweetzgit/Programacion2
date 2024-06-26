#include <stdlib.h>
#include <stdio.h>

typedef struct datos{
	char nom[30];
	int edad;
	float sueldo;
}trabajador;
void leer(struct datos [30], int);
void mayor(struct datos[30], int);
void menor(struct datos[30], int);
int main(){
	trabajador emp[30];
	int i, n, min = 0, max = 0;
	float media, acum = 0;
	printf("Dame el total de trabajadores: ");
	scanf("%d",&n);
	leer(emp, n);
	mayor(emp, n);
	menor(emp, n);
	for(i = 1; i < n; i++){
		acum += emp[i].sueldo;
	}
	media = acum/n;
	printf("\n Media de los sueldos: %.2f\n",media);
	system("pause");
	return 0;
}
void leer(struct datos e[30], int n){
	for(int i = 0; i < n;i++){
		printf("\n Nombre: ");
		fflush(stdin);
		gets(e[i].nom);
		printf(" Edad: ");
		scanf("%d",&e[i].edad);
		printf(" Sueldo: $");
		scanf("%f",&e[i].sueldo);
	}
}
void mayor(struct datos e[30], int n){
	int max = 0;
	for(int i = 1; i < n; i++){
		if(e[i].sueldo > e[max].sueldo){
			max = i;
		}
	}
	printf("\n Datos del trabajador con el mayor salario\n");
	printf(" Nombre: ");
	puts(e[max].nom);
	printf(" Edad: %d\n",e[max].edad);
	printf(" Sueldo: $%.2f\n",e[max].sueldo);
}
void menor(struct datos e[30], int n){
	int min = 0;
	for(int i = 1; i < n; i++){
		if(e[i].sueldo < e[min].sueldo){
			min = i;
		}
	}
	printf("\n Datos del trabajador con el menor salario\n");
	printf(" Nombre: ");
	puts(e[min].nom);
	printf(" Edad: %d\n",e[min].edad);
	printf(" Sueldo: $%.2f\n",e[min].sueldo);
}

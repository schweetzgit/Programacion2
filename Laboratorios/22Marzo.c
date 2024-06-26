#include <stdio.h>        //1. Librerias
#include <stdlib.h>

typedef struct pieza{     // 2. Variables globales, prototipos, 
	int numPieza;	      //tipos de datos derivados
	char nombre[20];
	float precio;
}piece; 
								       // prototipos:  se llaman y hacen su tarea
struct pieza leerPieza();  // 2da opcion: paso por referencia * o & o como esta
void imprimirPieza(struct pieza [20], int);  //el arreglo garantiza que se van todos
float promedio(struct pieza [20]);
// 3 funciones por lo menos

int main(){
	piece piezas[20];  //'pieza' es el tipo de dato
	int n;
	
	printf(" \n Programa ferreteria \n Ingresa datos.");
	printf(" \n Cuantos quieres introducir: ");
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		piezas[i] = leerPieza(); //puede estar aqui o en la función
	}							 // metiendo estructuras al arreglo
	imprimirPieza(piezas, n);
	
	system("pause");
	return 0;
}
struct pieza leerPieza(){
	struct pieza pieza1;
	printf("\n Numero: ");
	scanf("%d",&pieza1.numPieza);
	printf(" Nombre: ");
	fflush(stdin);
	gets(&pieza1.nombre);
	printf(" Precio: ");
	scanf("%f",&pieza1.precio);
	return (pieza1);
}
void imprimirPieza(struct pieza pieza1[20], int n){
	printf("\n Los datos introducidos son: ");
	for(int i = 0; i < n; i++){
		printf("\n Numero: %d",pieza1[i].numPieza);
		printf(" Nombre: %s",pieza1[i].nombre);
		printf(" Precio: %f",pieza1[i].precio);	
	}
}

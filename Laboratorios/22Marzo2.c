#include <stdio.h>        //1. Librerias
#include <stdlib.h>
#include <ctype.h>

typedef struct pieza{     // 2. Variables globales, prototipos, 
	int numPieza;	      //tipos de datos derivados
	char nombre[20];
	float precio;
}piece;
enum opciones{leer = 1, imprimir = 2, prome = 3, may = 4, men = 5, salir = 6}; 
								       // prototipos:  se llaman y hacen su tarea
struct pieza leerPieza();  // 2da opcion: paso por referencia * o & o como esta
void imprimirPieza(struct pieza [20], int);  //el arreglo garantiza que se van todos
float promedio(struct pieza [20], int);
float mayor(struct pieza [20], int);
float menor(struct pieza [20], int);
// 3 funciones por lo menos

int main(){
	piece piezas[20];  //'pieza' es el tipo de datos
	enum opciones opcion;
	int n;
	float P, M;
	char answer;
	printf(" \n Programa ferreteria \n Ingresa datos.");
	
	/*printf("\n [1].Leer\n [2].Imprimir datos\n [3].Promedio\n [4].Precio mayor\n [5].Precio menor\n [6].Salir\n Elege una opcion: ");
	scanf("%d",&opcion);*/
	printf(" \n Cuantos quieres introducir: ");
	scanf("%d",&n);

	for(int i = 0; i < n; i++){
		piezas[i] = leerPieza(); //puede estar aqui o en la función
	}		
	imprimirPieza(piezas, n);			
	printf("\n El promedio del precio es: %.2f\n",promedio(piezas, n));	
	P = mayor(piezas, n);
	M = menor(piezas, n);
			
			
		/*	default: printf("\n Opcion no valida");
		}
		printf("\n %cRegresar al menu? s/n: ",168);
		fflush(stdin);
		scanf("%c",&answer);
	} while (tolower(answer) == 's');*/
	system("pause");
	return 0;
}
struct pieza leerPieza(){
	struct pieza pieza1;
	printf("\n Numero: ");
	scanf("%d",&pieza1.numPieza);
	printf(" Nombre: ");
	fflush(stdin);
	gets(pieza1.nombre);
	printf(" Precio: ");
	scanf("%f",&pieza1.precio);
	return (pieza1);
}
void imprimirPieza(struct pieza pieza1[20], int n){
	printf("\n Los datos introducidos son: ");
	for(int i = 0; i < n; i++){
		printf("\n Numero: %d\n",pieza1[i].numPieza);
		printf(" Nombre: %s\n",pieza1[i].nombre);
		printf(" Precio: %.2f\n",pieza1[i].precio);	
	}
}
float promedio(struct pieza pieza1[20], int n){
	float prom;
	for(int i = 0; i < n; i++){
		prom += pieza1[i].precio;
	}
	return(prom/n);
}
float mayor(struct pieza pieza1[20], int n){
	float mayor = 0;
	for(int i = 0; i < n; i++){
		if (pieza1[i].precio > mayor){
			mayor = pieza1[i].precio;
		}
	}
	printf("\n El precio mayor es: %.2f\n",mayor);
}
float menor(struct pieza pieza1[20], int n){
	int min = 0;
	float menor = 0;
	for(int i = 0; i < n; i++){
		if (pieza1[min].precio > pieza1[i].precio){
			menor = pieza1[i].precio;
		}
	}
	printf(" El precio menor es: %.2f\n",menor);
}

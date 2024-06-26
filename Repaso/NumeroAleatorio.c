#include <stdio.h>
#include <stdlib.h>
int numero(int [10], int);
int main(){
	int numeros[10], intentos, numIngresado, i, resultado;
	printf("Escribe 10 numeros enteros para guardar: ");
	for(i = 0; i < 10; i++){
		scanf("%d",&numeros[i]);
	}
	system("cls");
	printf("Ingresa un numero entero, si esta entre los 10 numeros ganas: ");
	scanf("%d",&numIngresado);
	resultado = numero (numeros, numIngresado);
	return 0;
}
int numero(int numeros[10], int numIngresado){
	int intentos = 1;
	for(int i = 0; i < 10; i++){
		if (numeros[i] == numIngresado){
			printf("Has adivinado el numero");
			printf("En %d intentos", intentos);	
		}
		else{
			printf("Intenta de nuevo");
			intentos++;
		}
	}
}

#include <stdio.h>
#include <stdlib.h>

int leerCantidad();
void leer(int cantidad, int *numeros);
void imprimir(int cantidad, int *numeros);

int main(){
	int cantidad = leerCantidad();
	int *numeros;
	numeros = (int*)malloc(cantidad * sizeof(int));
	leer(cantidad, numeros);
	imprimir(cantidad, numeros);
	free(numeros);
	return 0;
}
int leerCantidad(){
	int cantidad;
	printf("\n Cuantos numeros va a ingresar: ");
	scanf("%i", &cantidad);
	printf("\n");
	return cantidad;
}
void leer(int cantidad, int *numeros){
	int i = 0;
	for (;i < cantidad; i++) {
		printf(" Numero %d: ",i+1);
		scanf("%i", &numeros[i]);
	} 
}
void imprimir(int cantidad, int *numeros){
	int i = 0;
	printf("\n Numeros: ");
	for (;i < cantidad; i++) {
		printf("%i ", numeros[i] + 1);
	} 
}

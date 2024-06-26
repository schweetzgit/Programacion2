#include<stdio.h>
#include<stdlib.h>

int leerCantidad();
void leer(int , int * );
void imprimir(int , int * );

int main ()

	int cantidad = leerCantidad();

	// ó tambien
	// int cantidad;
	// leerCantidad();

int *numeros;
  numeros = (int *) malloc(cantidad * sizeof(int));
 
  leer(cantidad, numeros);
  imprimir(cantidad, numeros);
  free(numeros);
}
 
int leerCantidad()
{
int cantidad;
printf("Cuantos numeros va a ingresas ?: ");
scanf("%i", &cantidad);
return cantidad;
}

void leer (int cantidad, int *numeros) {                                               
	printf(" la cantidad es %d \n", cantidad);
	for (int i = 0; i < cantidad; i++){
		scanf(" %i ", &numeros[i]);  
	} 
}

void imprimir (int cantidad, int *numeros){
	printf("\n");		   	
	for(int i = 0; i < cantidad; i++){
		printf("% d\t",numeros[i]);	
	}
}


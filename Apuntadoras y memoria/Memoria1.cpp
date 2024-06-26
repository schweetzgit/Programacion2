#include <stdio.h>
#include <stdlib.h>

int leerCantidad(); 
void leer(int, int*);
void imprimir (int, int*);
    
main(){
  int cantidad= leerCantidad();
  int *numeros;
 
  numeros = (int *) malloc(cantidad * sizeof(int));
 
  leer(cantidad, numeros);
  imprimir(cantidad, numeros);
  free(numeros);
}
 
int leerCantidad(){
	int cantidad;
	printf("Cuantos numeros va a ingresas ?: ");
	scanf("%i", &cantidad);
	return cantidad;
}
void leer (int cantidad, int *numeros) {
	int i;
	printf("la cantidad es %i \n", cantidad);
	for (i=0; i<cantidad;i++){
		scanf("%i", &numeros[i]);	
	}
}
void imprimir (int cantidad, int *numeros){
	int i;
	printf("\n");		   	
	for( i=0;i<cantidad;i++){
		printf("%i \t",numeros[i]);	
	}
}

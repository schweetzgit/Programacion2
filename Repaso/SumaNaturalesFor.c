/*Calcular la suma de los números naturales desde 1 hasta n con FOR*/
#include <stdio.h>
int main(){
	int i, n, suma = 0;
	printf("\n Calcula la suma de los numeros naturales desde 1 hasta n");
	printf("\n Escribe el numero n: ");
	scanf("%d",&n);
	for (i = 1; i <= n; i++){
		suma += i;
	}
	printf("\n La suma de los numeros naturales hasta %d es %d",n ,suma);
	return 0;
}

/*Escribe un programa en lenguaje C que llame a la función suma_naturales*/
#include <stdio.h>
int suma_naturales(int);
int main(){
	int n, resultado;
	printf("\n Escribe el numero hasta el cual sumar los naturales: ");
	scanf("%d",&n);
	resultado = suma_naturales(n);
	printf("\n La suma de los numeros naturales hasta %d es %d",n ,resultado);
	return 0;
}
int suma_naturales(int n){
	int i, suma = 0;
	for (i = 1; i <= n; i++){
		suma += i;
	}
	return(suma);
}

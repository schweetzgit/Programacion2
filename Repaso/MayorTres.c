#include <stdio.h>
int mayorTres(int, int, int);
int main(){
	int numA, numB, numC, resultado;
	printf("\n Este programa lee tres numeros e imprime el valor mas grande. ");
	printf("\n Ingrese el valor del numero A: ");
	scanf("%d",&numA);
	printf(" Ingrese el valor del numero B: ");
	scanf("%d",&numB);
	printf(" Ingrese el valor del numero C: ");
	scanf("%d",&numC);
	resultado = mayorTres(numA, numB, numC);
	printf("\n El mayor de los tres numeros es %d\n", resultado);
	system("pause");
}

int mayorTres(int numa, int numb, int numc){
	if (numa > numc){
		printf("\n A es el mayor");
		return (numa);
	}
	else if (numb > numc){
		printf("\n B es el mayor");
		return (numb);
	}
	else{
		printf("\n C es el mayor");
		return (numc);
	}
}


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void leer(int *, int);
void imprimir(int *, int);
void suma(int v1[20], int v2[20], int);
int main(){
	char r;
	int a[20], b[20], i, j, n;
	int *v1, *v2;
	do{
		v1 = a;
		v2 = b;
		do{
			printf("\n Ingrese el tama%co de ambos vectores: ",164);
			scanf("%d",&n);
		}while(n < 0 || n > 20);
		printf("\n Ingrese valores del vector A: \n");
		leer(a,n);
		printf("\n Ingrese valores del vector B: \n");
		leer(b,n);
		
		system("cls");
		printf("\n Vector A: \n");
		imprimir(a,n);
		printf("\n Vector B: \n");
		imprimir(b,n);
		
		printf("\n Suma: \n");
		suma(v1,v2,n);
		
		printf("\n %cDesea repetir el proceso? s/n: ",168);
		fflush(stdin);
		scanf("%c",&r);	
		system("cls");
	} while (r =='s'||r =='S');
	system("pause");
	return 0;
}
void leer(int *vec, int n){
	int i;
	for (i = 0; i < n; i++){
		printf(" Ingrese los datos de [%d]: ",i+1);
		scanf("%d",(vec+i));
	}
}
void imprimir (int *vec, int n){
	int i;
	for (i = 0; i < n; i++){
		printf("  %d\t",vec[i]);//*(vec+i));		
		printf("\n");
	}
}
void suma(int v1[20], int v2[20], int n){
	int v3[20], i;	
	for (i = 0; i < n; i++){
		v3[i] = *(v1+i) + *(v2+i);
	}
	for (i = 0; i < n; i++){
		printf("  %d",*(v3+i));
		printf("\n");
	}	
}

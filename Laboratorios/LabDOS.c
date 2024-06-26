/*Escribir un programa qeu 
 * Lea una matriz de nxn
 * Muestre la matrix
 * Saque la transpuesta
 * multiplicar la primera columna por cualquier otra columna y mostrar la suma*/
 
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
int ren, col;
void leerMat(int **);
void imprimirMat(int **);
void transpuestaMat(int **);
void mulColumnas(int **);

int main(){
	int **mat, i;
	char r;
	do{
		printf("\n Matriz de nxn");
		do{
			printf("\n Numero de renglones: ");
			scanf("%d",&ren);
			printf(" Numero de columnas: ");
			scanf("%d",&col);
		}while(ren != col);
	
		mat = (int**)calloc(ren, sizeof(int**));            
		for(i = 0; i < ren; ++i){
			mat[i] = (int *)calloc(col,sizeof(int));
		}
		leerMat(mat);
		imprimirMat(mat);
		mulColumnas(mat);
		transpuestaMat(mat);
		
		/*printf("\n Primera columna\n");
		for (int i = 0; i < ren; ++i){
			for (int j = 0; j < 1; ++j){ //i = 1; j < 2
				printf(" %d\n",mat[i][j]);	
			}	
		}
		printf("\n\n Multiplicacion primera columna por la siguiente: \n");
		for (int i = 0; i < ren; i++){
			for (int j = 0; j < 1; j++){
				printf(" %d\n",mat[i][1]*mat[i][j]);
			}
		}
		printf(" \n");*/
		
		for (i = 0; i < ren; ++i){
			free(mat[i]);
		}
		free(mat);
		
		printf("\n %cDesea repetir el proceso? s/n: ",168);
		fflush(stdin);
		scanf("%c",&r);	
		system("cls");
	} while (r =='s'||r =='S');
	system("pause");
	return 0;
}
void leerMat(int **mat){ 
	printf("\n");    
	for (int i = 0; i < ren; ++i){
		for (int j = 0; j < col; ++j){
			printf(" Elemento [%d,%d] : ", i,j);
			scanf("%d", &mat[i][j]);
	 	}
	}
}
void imprimirMat(int **mat){
	printf("\n Matriz \n");    
	for (int i = 0; i < ren; ++i){
		for (int j = 0; j < col; ++j){
			printf(" %d\t",mat[i][j]);
		}
		printf("\n");
	}
}
void mulColumnas(int **mat){
	int a, suma;
	printf("\n\n Multiplicacion primera columna por la siguiente: \n");
	for (int i = 0; i < ren; i++){
		for (int j = 0; j < 1; j++){
			a = mat[i][1]*mat[i][j];
			printf(" %d\n",a);
		}
		suma += a;
	}
	printf(" Suma de los productos: %d",suma-2);
	printf(" \n");
}
void transpuestaMat(int **mat){
	printf("\n Matriz transpuesta \n");    
	for (int i = 0; i < ren; ++i)	{
		for (int j = 0; j < col; ++j){
			printf(" %d\t",mat[j][i]);
		}
		printf("\n");
	}
}


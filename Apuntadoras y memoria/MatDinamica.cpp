#include <stdlib.h>
#include<stdio.h>
#include<conio.h>
                                    
int ren, col;
void LeeMatrizDinamica(int **);
void ImprimeMatrizDinamica(int **);

main (){
	int **mat;                                    //  int mat [100][100];
	int i;
	printf("\nNumero de renglones deseado: ");
	scanf("%d",&ren);
	printf("\nNumero de columnas deseadas: ");
	scanf("%d",&col);
	
	//En seguida se crea
	mat=(int**)calloc(ren, sizeof(int**));            
	for (i=0; i<ren; ++i)                          
	{
	 mat[i]=(int *)calloc(col, sizeof(int));
	}
	
	LeeMatrizDinamica(mat);
	ImprimeMatrizDinamica(mat);
	for (i=0; i<ren; ++i)
	{
	 free(mat[i]);
	}
	free(mat);
}//Cierra al main.

void LeeMatrizDinamica(int **mat){      // INT MAT[20][20]
	for (int i=0; i<ren; ++i){
		for (int j=0; j<col; ++j){
			printf("Elemento[%d,%d]", i,j);
			scanf("%d", &mat[i][j]);
	 	}
	}
}

void ImprimeMatrizDinamica(int **mat){    //INT MAT[20][20]
	for (int i=0; i<ren; ++i)	{
		for (int j=0; j<col; ++j){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}


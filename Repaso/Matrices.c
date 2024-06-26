#include <stdio.h>
void sumaMatriz (float [10][10], float [10][10], float [10][10]);
int main(){
	float matA[10][10], matB[10][10], matRes[10][10]{0}//llenar matriz con 0;
	int i, j;
	printf("Dar dos matrices y dar la suma");
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			scanf("%f",&matA[i][j]);
		}
	}
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			scanf("%f",&matB[i][j]);
		}
	}
	
	sumaMatriz(matA, matB, matRes);
	printf("La suma de A + B es Res");
	return 0;
}
void sumaMatriz (float matA[10][10], float matB[10][10], float matC[10][10]){
	
}

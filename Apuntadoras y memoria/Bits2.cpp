#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
void mostrarBits(unsigned int);
main(){
    unsigned valorentrada;
    printf("\tEscribe un entero sin signo: ");
    scanf("%i", &valorentrada);
    mostrarBits(valorentrada); 
    int x; int  y; x=-8; y=8; //Evaluar: x<<y;    
	x= -8<<8;
    printf("%d\n\n",x);
    system("PAUSE");
}

void mostrarBits(unsigned valor){
    int i, MASCARA, tam;
    tam = 8*sizeof(unsigned)-1;
    printf("tamaño de la variable %d \n",tam);
    MASCARA = (1 << tam);
	printf("El desplazamiento %d \n",MASCARA);
    printf("El numero  %d  en binario es ",valor);
    for(int i = 1; i <= tam + 1; i++){
	    cout<<(valor & MASCARA ? '1' : '0');
	    valor<<=1; 
	}
	if(i % 8 == 0){
        printf(" ");
    }
    printf("\n");
}


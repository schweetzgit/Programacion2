#include<stdio.h>
#include<stdlib.h>

void referencia_direccion (int a){
	a=7;
}
void referencia (int *a){
	*a=10;
}
void valor (int a){
	a=5;
	printf("el valor dentro de la funcion %d\n",a);
}
int main(){
	int x=0; 
	valor(x);
	printf("El valor de a despues de la funcion por valor es: %d\n\n",x);
	
	referencia(&x);
	printf("El valor de a despues de la funcion por referencia es: %d\n\n",x);
	
	referencia_direccion(x);
	printf("El valor de a despues de la funcion por direccion es: %d\n\n",x);
	
	system("pause");
	return 0;
}




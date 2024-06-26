#include <stdlib.h>
#include <stdio.h>
int suma(int, int, int&);
float division(float, float, float*);
int main(){
	int res;
	float res1, n1, n2;
	printf("\n Introduce los dos numeros para operar");
	printf("\n Numero 1: ");
	scanf("%f",&n1);
	printf(" Numero 2: ");
	scanf("%f",&n2);
	suma(n1, n2, res);
	division(n1, n2, &res1);
	printf (" %.0f + %.0f = %d\n",n1, n2, res);
	printf (" %.2f / %.2f = %.2f\n",n1, n2, res1);
	return 0;
}
int suma(int a, int b, int &c){ // Primera forma &c
	c = a + b; // c
}
float division(float a, float b, float *c){ // Segunda forma *c
	*c = a / b; // *c
}

int main(){
	int res, n1 = 10, n2 = 4;
	float res1;
	suma(n1, n2, res);
	division(n1, n2, &res1);
	printf (" 10 + 4 = %d\n",res);
	printf (" 10 / 4 = %f",res1);
	return 0;
}
int suma(int a, int b, int &c){ // Primera forma &c
	c = a + b; // c
}
float division(float a, float b, float *c){ // Segunda forma *c
	*c = a / b; // *c
}

/*int main(){
	int a = 37, b;
	int *p;
	p = &a; // la direcion de a
	printf(" El valor de a es: %d",*p); //valor de a
	b = *p *2;
	printf(" El valor de b es: %d",b);
	return 0;
}

struct empleado{
	char nombre[35];
	int edad;
};
int main(){
	struct empleado dato;
	struct empleado *pdato = &dato;
	(*pdato).edad = 19; //Asignación del campo ‘edad’ utilizando el operador .
	pdato -> edad =  19; //Asignación del campo ‘edad’ utilizando el operador ‘->’
	printf("%d",pdato -> edad);
}

int main (){ 
	char c;
	char *pc;
	pc = &c;
	for(c = 'A'; c <= 'z'; c++)
		printf("%c ",*pc); // c 
	printf("\n");
	system("pause");
	return 0;
}

int main (){
	int j, k;
	int *ptr;
	j = 1;
	k = 2;
	ptr = &k;
	printf("\n");
	printf(" j tiene el valor: %d y esta alojado en: %p\n", j,(void*)&j); //&-direccion
	printf(" k tiene el valor: %d y esta alojado en: %p\n", k, (void*)&k); 
	printf(" ptr tiene el valor: %p y esta alojado en: %p\n", ptr, (void*)&ptr);
	printf(" El valor del entero al que apunta ptr es: %d\n", *ptr); // por &k, k=2
	system("pause");
	return 0;
}

//modifica este programa para que imprima todos los resultados y que lea valores
int main(){
	int j;
	int k;
	int *pt1; // Declara un apuntador entero
	int *pt2; // Declara un apuntador entero 
	float values[100];
	float results[100];
	float *pt3; // Declara un apuntador flotante 
	float *pt4; // Declara un apuntador flotante 
	j = 1;
	k = 2;
	pt1 = &j; // pt1 contiene la dirección de la variable j  
	pt2 = &k; // pt2 contiene la dirección de la variable k 
	pt3 = values; // pt3 contiene la dirección del primer elemento de values
	pt3 = &values[0]; // Esto es equivalente a la afirmación de arriba 
	printf("%d",k);
	return 0;
}*/

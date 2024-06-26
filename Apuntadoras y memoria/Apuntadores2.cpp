#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void contador(char *entrada, int *cont);
int main(){
	// cadena a evaluar
	char *ptr_cadena, cadena[] = "Esta es una frase a contar \n para mas cosa\n fin de letra ";
	ptr_cadena = cadena;
	int cont = 0, *ptr_cont;
	ptr_cont = &cont;

	for (int i = 0 ; i< sizeof(cadena); i++)
		contador(ptr_cadena+i, ptr_cont);
	
	// Imprime resultado 
	printf(" %p \n\n Con %d letras de escapcios ",ptr_cadena, *ptr_cont);
	/*cout<< ptr_cadena << "\n\n Con " << *ptr_cont<< "Letras con espacios" ;
	cin>>cont;*/
	return 0;
}
// dertermina si es letra o espacio y acumula la suma en *cont
void contador(char *entrada, int *cont){
	if (((*entrada >= 97)&&(*entrada <= 122)) || ' ' || ((*entrada >= 97)&&(*entrada <= 122)));
	*cont += 1 ;
}
/*intercambio(int *a, int *b){ // con * significa que pueden cambiar su valor en la funcion
	int aux = *a;
	*a = *b; 
	*b = aux;
}
int main(){
	int i = 3, j = 50;
	printf("i = %d y j = %d\n",i,j); 
	intercambio(&i, &j);
	printf("i = %d y j = %d\n",i,j);
	return 0; 
}

int main () {
	int var = 26780;
	int *ptr;
	ptr = &var;
	printf(" La direccion de la variable var es: %x\n",&var); // & para obtener dirección
	printf(" La direccion guardada en la variable ptr es: %x\n",ptr);
	printf(" Valor de la variable *ptr: %d\n",*ptr);
	printf(" Valor de la variable var: %d\n",var);
	return 0;
}

int main () {
	int var1, i;
	char var2[5];
	printf("\n Todas las variables tienne una direccion \n esa dirección es un numero en hexadecimal \n\n La direccion de la variable var1: %x\n",&var1);
	printf(" La direccion de la variable arreglo var2 es %x\n",&var2); // %x direccion hexadecimal
	for(i = 0; i < 5; i++){
		printf("\t La direccion var2[%i]: %x\n",i,&var2[i]);
	}
	return 0;
}

int main(){
	int var1 = 120, var2 = 240;
	int *ptrVar1, *ptrVar2;
	char cadena[5] = "hola";
	char *ptrCadena;
	ptrVar1 = &var1; // asigna al puntero ptrVar1 la direccion de var1
	ptrVar2 = &var2;
	ptrCadena = &cadena[10];
	printf(" Un apuntador guarda la direccion de una variable\n\n La direccion %p de la variable %d\n",ptrVar1,var1);
	printf(" La direccion %p de la variable %d\n", ptrVar2, var2); // %p para apuntador
	printf(" La direccion %p de la variable %s\n", ptrCadena, cadena);
	return 0;
}*/

#include <stdio.h>

struct papeleria{
	char nombreCliente[10];
	char nombre[10];
	int cantidad;
	float precio;
};
struct papeleria datos();

int main(){
	struct papeleria cliente1, cliente2, cliente3;
	cliente1 = datos();
	cliente2 = datos();
	cliente3 = datos();
	printf("%s, %s, %d, %f\n",cliente1.nombreCliente,cliente1.nombre,cliente1.cantidad,cliente1.precio);
	printf("%s, %s, %d, %f\n",cliente2.nombreCliente,cliente2.nombre,cliente2.cantidad,cliente2.precio);
	printf("%s, %s, %d, %f\n",cliente3.nombreCliente,cliente3.nombre,cliente3.cantidad,cliente3.precio);
	system("pause");
	return 0;
}
struct papeleria datos(){
	struct papeleria p;
	printf("Escribe el nombre del cliente, producto, la cantidad y el precio: \n");
	scanf("%s",&p.nombreCliente);
	scanf("%s",&p.nombre);
	scanf("%d",&p.cantidad);
	scanf("%f",&p.precio);
	return(p);
}

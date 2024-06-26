#include <stdio.h>
#include <stdlib.h>
struct papeleria{
	char nombreCliente[10];
	char nombre[10];
	int cantidad;
	float precio;
};
void leerDatos(struct papeleria *); // void_nombre (struct nombre *)
int main(){
	struct papeleria cliente1, cliente2, cliente3;
	leerDatos(&cliente1); // nombre (&parametro)
	leerDatos(&cliente2);
	leerDatos(&cliente3);
	printf("%s, %s, %d, %f\n",cliente1.nombreCliente,cliente1.nombre,cliente1.cantidad,cliente1.precio);
	printf("%s, %s, %d, %f\n",cliente2.nombreCliente,cliente2.nombre,cliente2.cantidad,cliente2.precio);
	printf("%s, %s, %d, %f\n",cliente3.nombreCliente,cliente3.nombre,cliente3.cantidad,cliente3.precio);
	system("pause");
	return 0;
}
void leerDatos(struct papeleria *datos){  // con void_nombre (struct nombre *parametro)
	printf("Escribe el nombre del cliente, producto, la cantidad y el precio: \n");
	scanf("%s",&datos->nombreCliente); // con flecha
	scanf("%s",&datos->nombre);
	scanf("%d",&datos->cantidad);
	scanf("%f",&datos->precio);
	// sin return
}


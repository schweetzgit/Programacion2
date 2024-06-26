/*Escribe un programa de facturación de clientes. Los clientes tienen un nombre, 
el numero de unidades solicitadas, el precio de cada unidad, y el estado en que 
se encuentra: moroso, atrasado, pagado. El programa debe generar a los diversos 
clientes, obtener clientes en estado moroso, clientes en estado pagado con factura 
mayor a una cantidad determinada.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct factura{
	char nombre[20];
	int unidad;
	float precio;
	char estado[10];
}ftr;
enum opciones{
	leerDatos = 1, imprimirFactura = 2
};
void leer(ftr [200]);
void imprimir(ftr [200]);
int main(){
	char answer;
	enum opciones opc;
	ftr clientes[200];
	do{
		printf("\n Facturas de clientes");
		printf("\n 1. Leer datos\n 2. Fractura de clientes");
		printf("\n Elija opcion: ");
		scanf("%d",&opc);
		switch(opc){
			case leerDatos:
				leer(clientes);
				break;
			case imprimirFactura:
				imprimir(clientes);
				break;
		}
		printf("\n %cRegresar al menu? s/n: ",168);
		fflush(stdin);
		scanf("%c",&answer);
	} while (tolower(answer) == 's');
	system("pause");
	return 0;
}
void leer(ftr c[50]){
	int i = 1, tipo, n;
	char ans;
	printf("\n 1. Leer datos seguidos \n 2. Leer datos de un numero de cliente especifico: ");
	scanf("%d",&tipo);
	switch (tipo){
		case 1: 
			do{	
				printf("\n Nombre de cliente: ");
				fflush(stdin);
				gets(c[i].nombre);
				do{
					printf(" Numero de unidad: ");
					scanf("%d",&c[i].unidad);
				} while (c[i].unidad < 0);
				do{
					printf(" Precio de cada unidad: ");
					scanf("%f",&c[i].precio);
				} while (c[i].precio < 0.0);	
				printf(" Estado (moroso/ atrasado/ pagado): ");
				fflush(stdin);
				gets(c[i].estado);
				printf("\n %cAgregar mas datos? s/n: ",168);
				fflush(stdin);
				scanf("%c",&ans);
				i++;
			} while (tolower(ans) == 's');
		break;
		case 2:
			do{
				printf("\n Numero cliente a leer datos: ");
				scanf("%d",&n);
				printf("\n Nombre de cliente: ");
				fflush(stdin);
				gets(c[n].nombre);
				do{
					printf(" Numero de unidad: ");
					scanf("%d",&c[n].unidad);
				} while (c[n].unidad < 0);
				do{
					printf(" Precio de cada unidad: ");
					scanf("%f",&c[n].precio);
				} while (c[n].precio < 0.0);	
				printf(" Estado (moroso/ atrasado/ pagado): ");
				fflush(stdin);
				gets(c[n].estado);
				printf("\n %cAgregar mas datos? s/n: ",168);
				fflush(stdin);
				scanf("%c",&ans);
				n++;
			} while (tolower(ans) == 's');
		break;
		default: 
			printf("\n Opcion incorrecta. Vuelva a intentar. \n");		
		break;	
	}
}
void imprimir(ftr c[50]){
	int n;
	char answer;
	do{
		printf("\n Numero de cliente a imprimnir datos: ");
		scanf("%d",&n);
		printf(" Nombre del cliente: ");
		puts(c[n].nombre);  
		printf(" Numero de unidades compradas: %d\n",c[n].unidad);
		printf(" Precio total: %.2f\n",c[n].precio);
		printf(" Estado del pago: ");
		puts(c[n].estado);
		fflush(stdout);
		printf("\n %cImprimir factura de otro cliente? (s/n): ",168);
		fflush(stdin);
		scanf("%c",&answer);
	} while (tolower(answer) == 's');	
}

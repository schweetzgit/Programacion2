#include <stdio.h>
#include <stdlib.h>
struct articulo{
	int cod, cant;
	char desc[20] ;
	float prec_com, prec_ven;
} tlap[500];

float utilidad (int);
int cantidad_total (int );
struct articulo leer();

int main(){
	int a, i, t_art, b;
	float util;
	printf("\n Total de articulos: ");
	scanf("%d",&a);
	for (i = 0; i < a; i++){
		tlap[i] = leer();
		tlap[i].prec_ven = tlap[i].prec_com*1.35; //precio de venta
	}
	
	printf("\n 1) Calcula la utilidad de la empresa\n 2) Calcula la cantidad de articulos en el inventario: ");
	scanf("%d",&b);
	if(b == 1){
		util = utilidad(a);
		printf("La utilidad de la empresa sería: %f\n",util);
	}else{
		t_art = cantidad_total(a);
		printf("La cantidad total en el inventario es: %d\n",t_art);
	}
	system("pause"); 
	return 0;
}
struct articulo leer(){
	struct articulo t;
	printf("\n Dame los datos.\n");
	printf(" Codigo: ");
	scanf("%d",&t.cod);
	printf(" Descripcion: ");
	fflush(stdin);
	gets(t.desc);
	printf(" Precio de compra: ");
	scanf("%f",&t.prec_com);
	printf(" Cantidad en el inventario: ");
	scanf("%d",&t.cant);
	return (t);
}
float utilidad (int a){
	float util = 0;
	for (int i = 0; i < a; i++){
		util += (tlap[i].prec_ven - tlap[i].prec_com)*tlap[i].cant;
	}
	return util;
}
int cantidad_total (int a){
	int t_art = 0;
	for (int i = 0; i < a; i++){
		t_art += tlap[i].cant;
	}
	return t_art;
}


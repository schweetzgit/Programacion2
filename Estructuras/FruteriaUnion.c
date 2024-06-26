#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
union producto {
    int codigo;
    char descripcion[41];
    float precio;
};
union producto leer();
void imprimir(union producto);
int main()
{
    union producto produ;
    char answer;
    do{
    	produ = leer();
    	imprimir(produ);
		printf(" Ingresar otro producto (s/n): ");
		fflush(stdin);
		scanf("%c",&answer);
	} while (tolower(answer) == 's');	
    system("pause");
    return 0;
}
union producto leer(){
	union producto pro;
	printf("\n Escribe el codigo: ");
	scanf(" %d",&pro.codigo);
	printf(" Escribe la descripcion: ");
	scanf(" %s",&pro.descripcion);
	printf(" Escribe el precio: ");
    scanf(" %f",&pro.precio);
    return (pro);
}
void imprimir(union producto p)
{
    printf("\n Codigo del producto: %d\n",p.codigo);
    printf(" Descripcion: %s\n",p.descripcion);
    printf(" Precio:%0.2f\n",p.precio);
}

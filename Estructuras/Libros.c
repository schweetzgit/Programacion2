#include <stdio.h>
#include <stdlib.h>

typedef struct datos_libro{
	int cod, cant_inv, cant_prest;
	char titulo[20], autor[40];
}libros;

libros leer();
int total_libros_prestados(struct datos_libro [100], int);

int main(){
	int i, t_libros, t_librosprest;
	libros biblioteca[100];
	printf("\n Total de libros: ");
	scanf("%d",&t_libros);
	for(i = 0; i < t_libros; i++){
		printf("\n Datos del titulo %d", i+1);
		biblioteca[i] = leer(); 
	}
	/*t_librosprest = total_libros_prestados(biblioteca,t_libros);
	printf("\n El total de libros prestados es: %d\n",t_librosprest);*/
	system("pause");
	return 0;
}
libros leer(){
	libros l;
	printf("\n Titulo: "); fflush(stdin);
	gets(l.titulo);
	printf(" Autor del libro: "); fflush(stdin);
	gets(l.autor);
	printf(" Codigo del libro: ");
	scanf("%d",&l.cod);
	printf(" Cantidad de ejemplares: ");
	scanf("%d",&l.cant_inv);
	printf(" Cantidad de ejemplares prestados: ");
	scanf("%d",&l.cant_prest);
	return (l);
}
/*int total_libros_prestados(struct datos_libro l[100],int t_libros){
	int cant = 0;
	for (int i = 0; i < t_libros; i++){
		cant += l[i].cant_prest;
	}
	return (cant);
}*/

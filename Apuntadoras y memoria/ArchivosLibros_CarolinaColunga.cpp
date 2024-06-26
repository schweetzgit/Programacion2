/* COLUNGA AGUILAR ALMA CAROLINA 
	Programa que lee datos de libros en una biblioteca, los alacena, 
	y el ususario puede buscar si n libro existe.
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct DatosLibro{
	int cod, cant_inv, cant_prest;
	char titulo[70], autor[50];
}libros;
void LeeLibros(int, libros *lib);
void GuardaEnArchivo(int, libros *lib);
void LeeLibrosArchivo(int, libros *lib);
void BuscarLibro(int, libros *lib);

int main(){
	int n, buscar;
	libros *lib;
	printf("\n Numero de libros a ingresar: "); 
	scanf("%d",&n);
	lib = (DatosLibro*)malloc(n*sizeof(DatosLibro)); 
	LeeLibros(n, lib);
	GuardaEnArchivo(n, lib);
	LeeLibrosArchivo(n, lib);
	system("pause");
	printf("\n Buscar libro del inventario? 1/0: ");
	scanf("%d",&buscar);
	if (buscar == 1){
		BuscarLibro(n, lib);
	}else{
		printf("\n Gracias por usar el programa.\n");	
	}
	system("pause");
	free(lib);
	return 0;
}
void LeeLibros(int n, libros *lib){
	for(int i = 0; i < n; i++){
		printf("\n Titulo: "); 
		fflush(stdin);
		gets(lib[i].titulo);    
		printf(" Autor del libro: "); 
		fflush(stdin);
		gets(lib[i].autor);
		printf(" Codigo del libro: ");
		scanf("%d", &lib[i].cod);
		printf(" Cantidad de ejemplares: ");
		scanf("%d", &lib[i].cant_inv);
		printf(" Cantidad de ejemplares prestados: ");
		scanf("%d", &lib[i].cant_prest);
	}
}
void GuardaEnArchivo(int n, libros *lib){
	FILE *A;
	libros vectInv[5];
	A = fopen("archivoLibrosA.txt", "w+");
	if(A == NULL){
		printf("\n Error en apertura de archivo \n");
		system("pause");
		return;
	}
	for(int i = 0; i < n; i++){
		fprintf(A, "\n Titulo: %s",lib[i].titulo);
		fprintf(A, "\n Autor: %s",lib[i].autor);
		fprintf(A, "\n Codigo del libro: %d",lib[i].cod);
		fprintf(A, "\n Cantidad de ejemplares: %d",lib[i].cant_inv);
		fprintf(A, "\n Cantidad de ejemplares prestados: %d",lib[i].cant_prest);
	}
	fclose(A);
	printf("\n Los datos fueron almacenados exitosamente\n");
	system("pause");
}
// Funcion leer productos en un archivo y los imprime en pantalla
void LeeLibrosArchivo(int n, libros *lib){
	FILE *B;
	libros aux[n];
	B = fopen("archivoLibrosA.txt", "r");
	printf("\n Los datos guardados son los siguinetes");
	if(B == NULL){
		printf("\n Error en apertura de archivo \n");
		system("pause");
		return;
	}
	while(!feof(B)){
		for(int i = 0; i < n; i++){
			fflush(stdin);
			fgets(aux[i].titulo, 70, B);      
			fgets(aux[i].autor, 50, B);
			fscanf(B,"%d", &aux[i].cod);
			fscanf(B,"%d", &aux[i].cant_inv);
			fscanf(B,"%d", &aux[i].cant_prest);
			printf(" %s%s",aux[i].titulo, aux[i].autor);
		}	
	}
	printf("\n");
	fclose(B);
}
void BuscarLibro(int n, libros *aux){
	int IDborrar, opcion;
	FILE *b;
	b = fopen("archivoLibrosA.txt", "r");
	if(b == NULL){
		printf("\n Error en apertura de archivo \n");
		system("pause");
		return;
	}
	while(!feof(b)){
		printf("\n Codigo del libro a buscar: ");
		scanf("%d",&IDborrar);
		fflush(stdin);
		fgets(aux->autor, 50, b);
		fscanf(b,"%d", &aux->cod);
		fscanf(b,"%d", &aux->cant_inv);
		fscanf(b,"%d", &aux->cant_prest);
		if(IDborrar == aux->cod){
			printf("\n El libro con codigo '%d' existe\n",IDborrar);
			fgets(aux->titulo, 70, b);  
			printf(" %s ",aux->titulo);
			printf("\n Guardar otros datos? 1/0: ");
			scanf("%d",&opcion);
			if (opcion == 1){
				system("cls");
				main();
			}else{
				printf("\n Gracias por usar el programa.\n");	
			}
			break;
		}else{
			printf("\n El libro con codigo '%d' no existe\n",IDborrar);
			printf("\n Guardar otros datos? 1/0: ");
			scanf("%d",&opcion);
			if (opcion == 1){
				system("cls");
				main();
			}else{
				printf("\n Gracias por usar el programa.\n");	
			}
			break;
		}
	}
	fclose(b);
}

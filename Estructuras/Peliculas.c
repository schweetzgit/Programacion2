#include <stdio.h>
#include <stdlib.h>

typedef struct pelicula{
	int cod, cant_prest, genero;
	char titulo[30];
}movie;

struct pelicula leer();
void genero(struct pelicula [50], int);
int main(){
	movie peliculas[50];
	int n, e, i;
	printf("\n Ingresa el numero de peliculas (50 max.): ");
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		peliculas[i] = leer();
		
	}
	printf("\n 1.Titulos de genero en especifico\n 2.Más demandadas\n 3.Menos demandadas\n Elige una opcion: ");
	scanf("%d",&e);
	switch (e){
		case 1:
			genero(peliculas, n);
			break;
				
	}
	system("pause");
	return 0;
}
struct pelicula leer(){
	struct pelicula p;
	printf("\n Codigo de la pelicula: ");
	scanf("%d",&p.cod);
	printf(" Titulo: ");
	fflush(stdin);
	gets(p.titulo);
	printf(" 1.Drama\t2.Fantasia\t3.Comedia\t4.Romance\n Genero: ");
	do{
		scanf("%d",&p.genero);
	}while(p.genero < 0 || p.genero > 8);
	printf(" Cantidad de prestamos (10 max.): ");
	do{
		scanf("%d",&p.cant_prest);
	}while(p.cant_prest < 0 || p.cant_prest > 10);
	return (p);
}
void genero(struct pelicula p[50], int n){
	int i, g;
	int drama, fantasia, comedia, romance;
	printf(" 1.Drama\t2.Fantasia\t3.Comedia\t4.Romance\n Escoge genero: ");
	scanf("%d",&g);
	for(i = 0; i < n; i++){
		if(g == 1){
			drama = p[i].titulo;
			printf("\n Las peliculas de drama son: %s",drama);
			printf("\n");
		}
		else if(g == 2){
			if (p[i].titulo == 2){
				fantasia = p[i].titulo;
				printf("\n Las peliculas de fantasia son: %s",fantasia);
				printf("\n");
			}
			
		}
		else if(g == 3){
			comedia = p[i].titulo;
			printf("\n Las peliculas de comedia son: %s",comedia);
			printf("\n");
		}
		else if(g == 4){
			romance = p[i].titulo;
			printf("\n Las peliculas de romance son: %s",romance);
			printf("\n");
		}else{
			printf("\n No existe ese genero.");
		}
	}
}

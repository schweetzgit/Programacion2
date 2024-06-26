/*Se requiere un programa para introducir la información y llevar los resultados  de los equipos de básquetbol 
y de futbol de una comunidad.
La información de cada equipo:
	nombre del equipo:
	numero de victorias,
	numero de derrotas.
Para los equipos de basketbal: numero de perdidas de balon, numero de rebotes recuperados, 
numero del mejor anotador de triples y numero de triples del mejor anotador.
Para los equipos de futbol: numero de empates, numero de goles a favor, numero de goles en contra, 
nombre del goleador del equipo, numero de goles del goleador*/

#include <stdio.h>
#include <stdlib.h>
typedef struct info{
	char nombre[20];
	int victorias, derrotas;
}infoEquipos;
typedef struct basketbol{
	int perd_balon, reb_recup, mejor_anotadorTri, num_triplesMejor; 
}bask;
typedef struct futbol{
	int empates, goles_favor, goles_contra;
	char nombreGol[20];
	int golesGol;
}fut;

void leerE(infoEquipos [20]);
void leerB(bask [20]);
void verB(bask [20]);
void leerF(fut [20]);
void verF(fut [20]);

int main(){
	infoEquipos B[20], F[20];
	bask b[20];
	fut f[20];
	int elegir, m;
	char ans;
	printf("\t Informacion y resultados de los equipos.\n");
	do{
		printf("\n 1. Basketbol\n 2. Fulbol\n 3. Salir\n Elegir una opcion: ");
		scanf("%d",&elegir);
		switch(elegir){
			case 1:
				system("cls");
				do{
					printf("\n Informacion de equipos de basketbol");
					printf("\n 1. Leer\n 2. Ver datos\n Elegir opcion: ");
					scanf("%d",&m);
					switch(m){
						case 1:
							leerE(B);
							leerB(b);
						break;
						case 2:
							verB(b);
						break;
					}
					printf("\n Volver al menu (s/n): ");
					fflush(stdin);
					scanf("%c",&ans);
					system("cls");
				}while (ans == 's');
			break;
			case 2:
				system("cls");
				do{
					printf("\n Informacion de equipos de futbol");
					printf("\n 1. Leer\n 2. Ver datos\n Elegir opcion: ");
					scanf("%d",&m);
					switch(m){
						case 1:
							leerE(F);
							leerF(f);
						break;
						case 2:
							verF(f);
						break;
					}
					printf("\n Volver al menu (s/n): ");
					fflush(stdin);
					scanf("%c",&ans);
					system("cls");
				}while (ans == 's');
			break;
			case 3:
				exit(0);
			break;
			default:
				printf("Opcion no valida");
			break;
		}
		printf("\n Salir del programa (s/n): ");
		fflush(stdin);
		scanf("%c",&ans);
	}while (ans == 'n');
	system("pause");
	return 0;
}
void leerE(infoEquipos datos[20]){
	int n;
	char ans;
	do{
		printf(" \n Numero de equipo a escribir datos (20max.): ");
		scanf("%d",&n);
		printf(" Ingresa nombre del equipo: ");
		fflush(stdin);
		gets(datos[n].nombre);
		printf(" Ingresa numero de victorias: ");
		scanf("%d",&datos[n].victorias);
		printf(" Ingresa numero de derrotas: ");
		scanf("%d",&datos[n].derrotas);
		printf("\n %cAgregar otro equipo? s/n: ",168);
		fflush(stdin);
		scanf("%c",&ans);
		n++;
	} while (tolower(ans) == 's');
}
void leerB(bask datosB[20]){
	int n;
	char ans;
	do{
		printf("\n Numero de equipo a escribir información: ");
		scanf("%d",&n);
		printf("\n Ingresa numero de perdidas del balon: ");
		scanf("%d",&datosB[n].perd_balon);
		printf(" Ingresa numero de rebotes recuperados: ");
		scanf("%d",&datosB[n].reb_recup);
		printf(" Ingresa numero del mejor anotador de triples: ");
		scanf("%d",&datosB[n].mejor_anotadorTri);
		printf(" Ingresa numero de triples del mejor jugador: ");
		scanf("%d",&datosB[n].num_triplesMejor);
		printf("\n %cAgregar otro equipo? s/n: ",168);
		fflush(stdin);
		scanf("%c",&ans);
		n++;
	} while (tolower(ans) == 's');
}
void verB(bask b[20]){
	int n;
	char ans;
	do{
		printf("\n Numero de equipo para ver informacion: ");
		scanf("%d",&n);
		printf("\n Perdidas del balon: %d\n",b[n].perd_balon);
		printf(" Rebotes recuperados: %d\n",b[n].reb_recup);
		printf(" Numero del mejor anotador de triples: %d\n",b[n].mejor_anotadorTri);
		printf(" Triples del mejor anotador: %d\n",b[n].num_triplesMejor);
		printf("\n %cVer informacion de otro quipo? s/n: ",168);
		fflush(stdin);
		scanf("%c",&ans);
	} while (tolower(ans) == 's');
}
void leerF(fut datosF[20]){
	int n;
	char ans;
	do{
		printf("\n Numero de equipo a escribir información: ");
		scanf("%d",&n);
		printf("\n Ingresa numero de empates: ");
		scanf("%d",&datosF[n].empates);
		printf(" Ingresa numero de goles a favor: ");
		scanf("%d",&datosF[n].goles_favor);
		printf(" Ingresa numero de goles en contra: ");
		scanf("%d",&datosF[n].goles_contra);
		printf(" Ingresa nombre del goleador del equipo: ");
		fflush(stdin);
		gets(datosF[n].nombreGol);
		printf(" Ingresa numero de goles del goleador: ");
		scanf("%d",&datosF[n].golesGol);
		printf("\n %cAgregar otro equipo? s/n: ",168);
		fflush(stdin);
		scanf("%c",&ans);
		n++;
	} while (tolower(ans) == 's');
}
void verF(fut f[20]){
	int n;
	char ans;
	do{
		printf("\n Numero de equipo para ver informacion: ");
		scanf("%d",&n);
		printf("\n Empates: %d\n",f[n].empates);
		printf(" Goles a favor: %d\n",f[n].goles_favor);
		printf(" Goles en contra: %d\n",f[n].goles_contra);
		printf(" Nombre del goleador del equipo: ");
		puts(f[n].nombreGol);
		printf(" Goles del goleador: %d\n",f[n].golesGol);
		printf("\n %cVer informacion de otro quipo? s/n: ",168);
		fflush(stdin);
		scanf("%c",&ans);
	} while (tolower(ans) == 's');
}

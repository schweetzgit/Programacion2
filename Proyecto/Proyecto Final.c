#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
	char nomb_player[20]; 
	int num_shirt;       
	char position[20];
	int age;
}pa;
typedef struct{
	char nomb_team[20]; 
	pa player[20];      
	char dt[15];
	int formation;
	int num_player;	
}data;

void menu(int); //Funcion principal
void LeerDatos(int, data *da);
void GuardaEnArchivo(int, data *da); // Guardar datos de leerDatos
void LeeDatosArchivo(int, data *da);
void calendario(int, data *da);
void marcador(int, data *da);

int main(){
	int n;
	char respuesta;
	printf("\n Ingrese el numero de equipos: "); 
	scanf("%d",&n);
	do{
		menu(n);
		printf("\n Regersar al menu? s/n: ");
		fflush(stdin);
		scanf("%c",&respuesta);
		system("cls");
	}while(respuesta == 'S' || respuesta == 's');
	system("pause");
	return 0;
}
void menu(int n){
	data *da;
	int op1;
	da = (data*)malloc(n*sizeof(data)); //Memoria Dinamica
	printf("\n [1] Datos de equipos\n [2] Calendario de juegos\n [3] Marcador de juegos");
	//printf("\n [4] Mejores equipos del torneo\n [5] Generacion de partidos \n [6] Ganador);
	printf("\n [7] Salir"); 
	printf("\n Selecciona una opcion: ");
	scanf("%d",&op1);
    if(op1 == 1){
    	system("cls");
    	printf("\n ----Datos de los equipos-----\n");
		LeerDatos(n,da);
	    GuardaEnArchivo(n,da);
	    LeeDatosArchivo(n,da);
	}
	else if (op1 == 2){
		system("cls");
        printf("\n---Calendario de juegos---\n");
		calendario(n,da);
		
	} else if (op1 == 3){
		system("cls");
		printf("\n---Marcador de juegos---\n");
		GuardaEnArchivo(n,da);
		marcador(n,da);
	} else{
		exit(0);
	}
	free(da);
}
void LeerDatos(int num,data *da){
	for(int i = 0; i < num; i++){
		printf("\n Nombre del equipo %d: ",i+1);
		fflush(stdin);
		gets(da[i].nomb_team);
		printf(" Nombre del director tecnico: ");
		fflush(stdin);
		gets(da[i].dt);
		printf(" Formacion (numero): ");
		scanf("%d",&da[i].formation);	
		printf(" Numero de jugadores: ");
		scanf("%d",&da[i].num_player);
		for(int j = 0; j < da[i].num_player; j++){
			printf("\n Nombre del jugador %d: ",j+1);
			fflush(stdin);
			gets(da[i].player[j].nomb_player);
			printf(" Edad: ");
			scanf("%d",&da[i].player[j].age);
			printf(" Numero de camiseta: ");
			scanf("%d",&da[i].player[j].num_shirt);
			printf(" Posicion de juego: ");
			fflush(stdin);
			gets(da[i].player[j].position);	
		}
	}
}
void GuardaEnArchivo(int num, data *da){
	FILE * A;
	A = fopen("archivoA.txt","w+");
	for(int i = 0; i < num; i++){
		fprintf(A,"\n Nombre del equipo: '%s'",da[i].nomb_team);
		fprintf(A,"\n Nombre del director tecnico: %s",da[i].dt);	
		fprintf(A,"\n Formacion: %d",da[i].formation);	
    	fprintf(A,"\n Numero de jugadores: %d",da[i].num_player);
		for(int j = 0; j < da[i].num_player; j++){
			fprintf(A,"\n Jugador '%s'",da[i].player[j].nomb_player);
			fprintf(A,"\n Edad: %d",da[i].player[j].age);
			fprintf(A,"\n Numero de camiseta: %d",da[i].player[j].num_shirt);	
			fprintf(A,"\n Posicion de juego: %s",da[i].player[j].position);
		}
	}
	fclose(A);
	printf("\n Datos guardados correctamente\n");
	system("pause");
}
void LeeDatosArchivo(int num, data *da){
	FILE *B;
	data aux[num];
	B = fopen("archivoA.txt", "r");
	printf("\n Los datos guardados son los siguinetes");
	if(B == NULL){
		printf("\n Error en apertura de archivo \n");
		system("pause");
		return;
	}
	while(!feof(B)){
		for(int i = 0; i < num; i++){
			fflush(stdin);
			fgets(aux[i].nomb_team, 20, B);
			fgets(aux[i].dt, 15, B);
			fscanf(B, "%d", &aux[i].formation);
			fscanf(B, "%d", &aux[i].num_player);
			printf(" %s %s",aux[i].nomb_team, aux[i].dt);
			//printf("%s %s %d %d",aux[i].nomb_team, aux[i].dt, aux[i].formation, aux[i].num_player);
			/*for(int j = 0; j < da[i].num_player; j++){
				fflush(stdin);
				fgets(da[i].player[j].nomb_player, 20, B);
				fscanf(B,"%d", &da[i].player[j].age);
				fscanf(B,"%d", &da[i].player[j].num_shirt);
				fflush(stdin);
				fgets(da[i].player[j].position, 20, B);}*/
		}
	}
	fclose(B);
}
void calendario(int num, data *da){
	FILE *C;
	data aux[num];
	C = fopen("archivoC.txt","w+");
	if(C == NULL){
		printf("\n Error en apertura de archivo \n");
		system("pause");
		return;
	}
	for(int t = 0; t < num; t++){
		printf("\n Nombre del equipo %d: ",t+1);
		fflush(stdin);
		gets(da[t].nomb_team);
	}
	int i = 0, j = 0, k = 0;
	k = num - 1;
	int dia, mes, dia2, mes2;
	mes = (rand()%12)+1;
	dia = (rand()%30)+1;
	dia2 = (rand()%30)+1;
	mes2 = (rand()%12)+1;
	for(i = 0; i < num; i++){
		for(j = 0; j < num; j++){
			if((i+j == k) && (i > j)){
				fflush(stdin);
				printf(" %s vs %s",da[i].nomb_team, da[j].nomb_team);
				printf("\n Fecha. Dia: %d Mes: %d\n",dia,mes);
				fprintf(C, "%s vs %s",da[i].nomb_team,da[j].nomb_team);
				printf("\n");
			}
		}
	}
	
	for(i = 0; i < num; i++){
		for(j = 0; j < num; j++){
			if((i+j == k) && (j > i)){
				fflush(stdin);
				printf(" %s vs %s",da[i].nomb_team,da[j].nomb_team);
				printf("\n Fecha. Dia: %d Mes: %d\n",dia2,mes2);
				fprintf(C, "%s vs %s",da[i].nomb_team,da[j].nomb_team);
				printf("\n");
			} 
		}
	}
	printf("\n Datos guardados correctamente\n");
	fclose(C);
}
void marcador(int num,data *da){
	system("cls");
	FILE *C;
	C = fopen("archivoC.txt","w");
	int i = 0, j = 0, k = 0, v[25], p[25], h=0, puntuacion[num], puntuacionp[num], puntuacionv[num];
	k = num - 1;
	h =(k+1)*(k)/2;
	for(i = 0; i < h+1; i++){
		v[i] = rand()%10;
	}
	for(i = 0; i < h+1; i++){
		p[i] = rand()%10;
	}
	for(i = 0; i < num; i++){
		for(j = 0; j < num; j++){
			if((i+j == k) && (i > j)){
				fflush(stdin);
				printf(" %s %d vs %d %s",da[i].nomb_team,v[i],p[j],da[j].nomb_team);
				if(v[i] > p[j]){
					puntuacionv[i] += 3;
				}
				else if(v[i] == p[j]){
					puntuacionv[i] += 1;
					puntuacionp[i] += 1;
				}
				else{
					puntuacionp[i] += 3;
				}
				fprintf(C," %s %d vs %d %s",da[i].nomb_team,v[i],p[j],da[j].nomb_team);
				fprintf(C,"\n");
				printf("\n");
			}
		}
	}
	/*for(i = 0; i < num; i++){
		for(j = 0; j < num; j++){
			if((i+j == k) && (j > i)){
				fflush(stdin);
				printf(" %s  vs %s",da[i].nomb_team,da[j].nomb_team);
				fprintf(B, "%s vs %s",da[i].nomb_team,da[j].nomb_team);
				fprintf(B,"\n");
				printf("\n");
			} 
	}*/
}

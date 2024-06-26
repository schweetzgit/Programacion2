#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
	char nomb_player[50]; 
	int num_shirt;       
	char position[20];
	int age;
}pa;
typedef struct{
	char nomb_team[50]; 
	pa player[50];      
	char dt[50];
	int formation;
	int num_player;	
}data;

void Menu(int); 
void LeerDatos(int, data *da);
void GuardaEnArchivo(int, data *da); 
void Calendario(int, data *da);
void MarcadorGanador(int, data *da);

int main(){
	int n;
	char r;
	printf("\n ------ LIGA DE FUTBOL ERUL ------\n");
	printf("\n Ingrese el numero de equipos: "); 
	scanf("%d",&n);
	do{
		Menu(n);
		printf("\n %cRegresar al menu principal? s/n: ",168);
		fflush(stdin);
		scanf("%c",&r);
		system("cls");
	}while (tolower(r) == 's');
	system("pause");
	return 0;
}

void Menu(int n){
	data *da;
	int op1, op2;
	char r2;
	da = (data*)malloc(n*sizeof(data)); 
	printf("\n [1] Datos de equipos\n [2] Salir\n Selecciona una opcion: ");
	scanf("%d",&op1);
    switch(op1){
    	case 1: 
    		system("cls");
	    	printf("\n ----- Datos de los equipos ------\n");
			LeerDatos(n,da);
		    GuardaEnArchivo(n,da);
		    system("cls");
			do{
				printf("\n ----- Equipos ------\n");
				printf("\n [1] Calendario de juegos\n [2] Marcadores y ganador\n [3] Salir\n Selecciona una opcion: ");
		    	scanf("%d",&op2);
				if (op2 == 1){
					system("cls");
			        printf("\n ------ Calendario de juegos -----\n");
					Calendario(n,da);
				}if(op2 == 2){
					system("cls");
					printf("\n\n ------ Marcadores de juegos ------\n");
					MarcadorGanador(n,da);
				}else if(op2 == 3){
					exit(0);
				}else{
					system("cls");
					printf("\n Opcion invalida\n");
				}
				printf("\n %cRegresar al menu de equipos? s/n: ",168);
				fflush(stdin);
				scanf("%c",&r2);
				system("cls");
			}while (tolower(r2) == 's');
    	break;
		case 2:
			exit(0);
		break;
		default:
			system("cls");
			printf("\n Opcion invalida\n");
			printf("\n ------LIGA DE FUTBOL ERUL------\n");
			Menu(n);
		break;
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
	FILE *A;
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
	printf("\n Datos guardados correctamente en el archivoA\n");
	system("pause");
}
void Calendario(int num,data *da){
	FILE *B;
	B = fopen("archivoB.txt","w+");
	if(B == NULL){
		printf("\n Error en apertura de archivo \n");
		system("pause");
		return;
	}
	int i = 0, j = 0, k = 0, u = 1, dia, mes;
	mes = (rand()%12)+1;
	dia = (rand()%30)+1;
	k = num - 1;
	fprintf(B,"\n ---- Calendario ----\n");
	for(u = 1; u < num; u++){	
		printf("\n Jornada %d",u);
		printf("\n             Dia   Mes\n");
		fprintf(B, "\n Jornada %d",u);
		fprintf(B, "\n             Dia   Mes\n");
		for(i = 0; i < num; i++){
			for(j = 0; j < num; j++){
				if(((i + j == u)||(i - j == u)) && (i > j)){
					fflush(stdin);
					printf(" %s vs %s",da[i].nomb_team,da[j].nomb_team);
					fprintf(B," %s vs %s",da[i].nomb_team,da[j].nomb_team);
					printf("      %d    %d\n",dia,mes);
					fprintf(B,"      %d    %d\n",dia,mes);
				}
			}
			dia += 1;
		}
	}
	fclose(B);
	printf("\n Datos guardados correctamente en el archivoB\n");
	system("pause");
}
void MarcadorGanador(int num, data *da){
	FILE *b, *C;
	b = fopen("archivoB.txt","a");
	C = fopen("archivoC.txt","w+");
	if(b == NULL){
		printf("\n Error en apertura de archivo \n");
		system("pause");
		return;
	}
	float temporal;
	int MarA[num], MarB[num], puntosA[num], puntos[num], goles[num], i = 0, j = 0, k = 0, u = 0, s = 0, r = 0;
	for(i = 0; i < num; i++){
		goles[i] = 0;
		puntos[i] = 0;
	}
	for(i = 0; i < num*(num+1)/2+1; i++){
		MarA[i] = (rand()%10)+1;
		MarB[i] = (rand()%10)+1;
	}
	fprintf(b,"\n ---- Marcadores ----\n");
	for(u = 1; u < num; u++){
		printf("\n Jornada %d",u);
		fprintf(b,"\n Jornada %d",u);
		printf("\n Nombre  Goles  vs   Goles  Nombre");
		fprintf(b,"\n Nombre  Goles  vs   Goles  Nombre");
		for(i = 0; i < num; i++){
			for(j = 0; j < num; j++){
				if(((i + j == u)||(i - j == u)) && (i > j)){
					s += 1;
					r += 1;
					fflush(stdin);
					if(MarA[s] > MarB[r]){
						puntos[i] += 3;	
					}
					else if(MarA[s] == MarB[r]){
						puntos[i] += 1;
						puntos[j] += 1;
					}
					else if(MarA[s]<MarB[r]){
						puntos[j] += 3;
					}
					printf("\n   %s       %d           %d       %s",da[i].nomb_team,	MarA[s],MarB[r],da[j].nomb_team);
					fprintf(b,"\n   %s       %d            %d       %s",da[i].nomb_team,	MarA[s],MarB[r],da[j].nomb_team);
					printf("\n");
					fprintf(b,"\n");	
					goles[i] += MarA[s];
					goles[j] += MarB[r];	
				}
			}
		}
	}
	for(i = 0; i < num; i++){
		printf("\n Puntos del equipo %s: %d",da[i].nomb_team,puntos[i]);
		fprintf(b,"\n Puntos del equipo %s: %d",da[i].nomb_team,puntos[i]);
	}
	for(i = 0; i < num;i++){
		puntosA[i] = puntos[i];
	}
	printf("\n\n Datos guardados correctamente en el ArchivoB\n");
	fclose(b);
	system("pause");
	system("cls");
	printf("\n ---- Ganador y marcadores finales ----\n");
	fprintf(C,"\n ---- Ganador y marcadores finales ----\n");
	for(i = 0; i < num; i++){
		printf("\n Goles del equipo %s: %d",da[i].nomb_team,goles[i]);
		fprintf(C,"\n Goles del equipo %s: %d",da[i].nomb_team,goles[i]);
	}
	printf("\n");
	fprintf(C,"\n");
	for (int i = 0;i < num; i++){
		for (int j = 0; j < num-1; j++){
			if (puntos[j] < puntos[j+1]){ 
				temporal = puntos[j]; 
				puntos[j] = puntos[j+1]; 
				puntos[j+1] = temporal;
			}
		}
	}
	for(i = 0; i < num; i++){
		for(j = 0; j < num; j++){
			if(puntos[i] == puntosA[j]){
				printf("\n Los puntos del equipo %s son: %d",da[j].nomb_team,puntos[i]);
				fprintf(C,"\n Los puntos del equipo %s son: %d",da[j].nomb_team,puntos[i]);
			}
		}
	}
	for(j = 0; j < num; j++){
		if(puntos[0] == puntosA[j]){
			printf("\n\n El ganador es el EQUIPO %s",da[j].nomb_team);
			fprintf(C,"\n\n El ganador es el EQUIPO %s",da[j].nomb_team);
		}
	}
	printf("\n\n ------ %cFELICIDADES! -------\n",33);
	fprintf(C,"\n ------ %cFELICIDADES! -------",33);
	fclose(C);
	printf("\n\n Datos guardados correctamente en el ArchivoC\n");
	system("pause");
}

/* Escribe un programa que utilice funciones para simular el juego de 
piedra, papel o tijera donde se pueda seleccionar uno o dos jugadores */
#include <stdio.h>
int unJugador(int);
int dosJugadores(int, int);
int main(){
	int jugadores, opcionJugador1, opcionJugador2, resultado;
	char respuesta;
	printf(" Piedra papel o tijeras\n");
	do{
		printf("\n 1. Un jugador \n 2. Dos jugadores");
		printf("\n Selecciona el numero de jugadores: ");
		scanf("%d",&jugadores);
		switch(jugadores){
			case 1:
				system("cls");
				printf(" **Un jugador**\n 1. Papel \n 2. Tijeras \n 3. Piedra");
				printf("\n Elige una opcion: ");
				do{
					scanf("%d",&opcionJugador1);
					if (opcionJugador1 > 3 || opcionJugador1 < 1){
						printf(" Elige de nuevo: ");
					}
				} while (opcionJugador1 > 3 || opcionJugador1 < 1);
				resultado = unJugador(opcionJugador1);
			break;
			case 2:
				system("cls");
				printf(" **Jugador 1**\n 1. Papel \n 2. Tijeras \n 3. Piedra");
				printf("\n Elige una opcion: ");
				do{
					scanf("%d",&opcionJugador1);
					if (opcionJugador1 > 3 || opcionJugador1 < 1){
						printf(" Elige de nuevo: ");
					}
				} while (opcionJugador1 > 3 || opcionJugador1  < 1);
				system("cls");
				printf(" **Jugador 2**\n 1. Papel \n 2. Tijeras \n 3. Piedra");
				printf("\n Elige una opcion: ");
				do{
					scanf("%d",&opcionJugador2);
					if (opcionJugador2 > 3 || opcionJugador2 < 1){
						printf(" Elige de nuevo: ");
					}
				} while (opcionJugador2 > 3 || opcionJugador2 < 1);
				resultado = dosJugadores(opcionJugador1, opcionJugador2);
			break;
			default:
				printf("\n No existe esta opcion\n");
			break;
		}
		printf("\n %cQuieres jugar de nuevo? s/n: ",168);
		fflush(stdin);
		scanf("%c",&respuesta);
	} while (tolower(respuesta) == 's');
	system("pause");
	return 0;
}
int unJugador(int opcion){
	int computadora = 1+rand()%3;
	switch (opcion){
		case 1: 
			printf("\n Haz elejido Papel\n");
			if (computadora == 1){
				printf(" La computadora ha elegido Papel\n %cEmpate!\n",173);
			}
			else if (computadora == 2){
				printf(" La computadora ha elegido Tijeras\n %cGana la computadora!\n",173);
			}
			else{
				printf(" La computadora ha elegido Piedra\n %cHas ganado!\n",173);
			}
		break;
		case 2:
			printf("\n Haz elejido Tijeras\n");
			if (computadora == 1){
				printf(" La computadora ha elegido Papel\n %cHas ganado!\n",173);
			}
			else if (computadora == 2){
				printf(" La computadora ha elegido Tijeras\n %cEmpate!\n",173);
			} 
			else{
				printf(" La computadora ha elegido Piedra\n %cGana la computadora!\n",173);
			} 
		break;
		case 3:
			printf("\n Haz elejido Piedra\n");
			if (computadora == 1){
				printf(" La computadora ha elegido Papel\n %cGana la computadora!\n",173);
			}
			else if (computadora == 2){
				printf(" La computadora ha elegido Tijeras\n %cHas ganado!\n",173);
			}
			else{
				printf(" La computadora ha elegido Piedra\n %cEmpate!\n",173);
			}
		break;
	}		
}
int dosJugadores(int jugador1, int jugador2){
	switch(jugador1){
		case 1:
			printf("\n Jugador 1 ha elegido Papel\n");
			if (jugador2 == 1){
				printf(" Jugador 2 ha elegido Papel\n %cEmpate!\n",173);
			}
			else if (jugador2 == 2){
				printf(" Jugador 2 ha elegido Tijeras\n %cGana jugador 2!\n",173);
			}
			else{
				printf(" Jugador 2 ha elegido Piedra\n %cGana jugador 1!\n",173);
			}
		break;
		case 2:
			printf("\n Jugador 1 ha elegido Tijeras\n");
			if (jugador2 == 1){
				printf(" Jugador 2 ha elegido Papel\n %cGana jugador 1!\n",173);
			}
			else if (jugador2 == 2){
				printf(" Jugador 2 ha elegido Tijeras\n %cEmpate!\n",173);
			}
			else{
				printf(" Jugador 2 ha elegido Piedra\n %cGana jugador 2!\n",173);
			}
		break;
		case 3:
			printf("\n Jugador 1 ha elegido Piedra\n");
			if (jugador2 == 1){
				printf(" Jugador 2 ha elegido Papel\n %cGana jugador 2!\n",173);
			}
			else if (jugador2 == 2){
				printf(" Jugador 2 ha elegido Tijeras\n %cGana jugador 1!\n",173);
			}
			else{
				printf(" Jugador 2 ha elegido Piedra\n %cEmpate!\n",173);
			}
		break;
	}	
}

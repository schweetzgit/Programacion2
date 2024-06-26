/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tamaño del arreglo determina la longitud
   máxima que puede tener la cadena que guarda (tamaño-1, por el caracter de terminación).
   La constante MAX_STRLEN define el tamaño máximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se leyó
   otra variable con scanf. */

// Declaraciones adelantadas de las funciones
SIN_TIPO unjugador(float opcionjugador1);
SIN_TIPO dosjugadores(float opcionjugador1, float opcionjugador2);

SIN_TIPO unjugador(float opcionjugador1) {
	float computadora;
	computadora = (rand()%3)+1;
	if (opcionjugador1==1) {
		printf("Haz elejido papel\n");
		if (computadora==1) {
			printf("La computadora ha elegido papel\n");
			printf("¡Empate!\n");
		}
		if (computadora==2) {
			printf("La computadora ha elegido tijeras\n");
			printf("¡Gana la computadora!\n");
		} else {
			printf("La computadora ha elegido piedra\n");
			printf("¡Has ganado!\n");
		}
	}
	if (opcionjugador1==2) {
		printf("Haz elejido tijeras\n");
		if (computadora==1) {
			printf("La computadora ha elegido papel\n");
			printf("¡Has ganado!\n");
		}
		if (computadora==2) {
			printf("La computadora ha elegido tijeras\n");
			printf("¡Empate!\n");
		} else {
			printf("La computadora ha elegido piedra\n");
			printf("¡Gana la computadora!\n");
		}
	}
	if (opcionjugador1==3) {
		printf("Haz elejido piedra\n");
		if (computadora==1) {
			printf("La computadora ha elegido papel\n");
			printf("¡Gana la computadora!\n");
		}
		if (computadora==2) {
			printf("La computadora ha elegido tijeras\n");
			printf("¡Has ganado!\n");
		} else {
			printf("La computadora ha elegido piedra\n");
			printf("¡Empate!\n");
		}
	}
	return entero;
}

SIN_TIPO dosjugadores(float opcionjugador1, float opcionjugador2) {
	if (opcionjugador1==1) {
		printf("Jugador 1 ha elejido papel\n");
		if (opcionjugador2==1) {
			printf("Jugador 2 ha elejido papel\n");
			printf("¡Empate!\n");
		}
		if (opcionjugador2==2) {
			printf("Jugador 2 ha elejido tijeras\n");
			printf("¡Gana jugador 2!\n");
		}
		if (opcionjugador2==3) {
			printf("Jugador 2 ha elejido piedra\n");
			printf("¡Gana jugador 1!\n");
		}
	}
	if (opcionjugador1==2) {
		printf("Jugador 1 ha elejido tijeras\n");
		if (opcionjugador2==1) {
			printf("Jugador 2 ha elejido papel\n");
			printf("¡Gana jugador 1!\n");
		}
		if (opcionjugador2==2) {
			printf("Jugador 2 ha elejido tijeras\n");
			printf("¡Empate!\n");
		}
		if (opcionjugador2==3) {
			printf("Jugador 2 ha elejido piedra\n");
			printf("¡Gana jugador 2!\n");
		}
	}
	if (opcionjugador1==3) {
		printf("Jugador 1 ha elejido piedra\n");
		if (opcionjugador2==1) {
			printf("Jugador 2 ha elejido papel\n");
			printf("¡Gana jugador 2!\n");
		}
		if (opcionjugador2==2) {
			printf("Jugador 2 ha elejido tijeras\n");
			printf("¡Gana jugador 1!\n");
		}
		if (opcionjugador2==3) {
			printf("Jugador 2 ha elejido piedra\n");
			printf("¡Empate!\n");
		}
	}
	return entero;
}

int main() {
	int jugadores;
	int opcionjugador1;
	int opcionjugador2;
	char respuesta[MAX_STRLEN];
	int resulado;
	SIN_TIPO resultado;
	printf("Piedra, papel y tijeras\n");
	do {
		printf("\n"); /* no hay forma directa de borrar la pantalla con C estandar */
		printf("1. Un juagdor\n");
		printf("2. Dos jugadores\n");
		scanf("%i",&jugadores);
		switch (jugadores) {
		case 1:
			printf("1. Papel\n");
			printf("2. Tijeras\n");
			printf("3. Piedra\n");
			printf("Elejir opcion: \n");
			scanf("%i",&opcionjugador1);
			resultado = unjugador(opcionjugador1);
			break;
		case 2:
			printf("Jugador 1\n");
			printf("1. Papel\n");
			printf("2. Tijeras\n");
			printf("3. Piedra\n");
			printf("Elejir opcion: \n");
			scanf("%i",&opcionjugador1);
			printf("Jugador 2\n");
			printf("1. Papel\n");
			printf("2. Tijeras\n");
			printf("3. Piedra\n");
			printf("Elejir opcion: \n");
			scanf("%i",&opcionjugador2);
			resultado = dosjugadores(opcionjugador1,opcionjugador2);
			break;
		default:
			printf("Opcion inexistente\n");
		}
		printf("¿Jugar de nuevo? s/n: \n");
		scanf("%s",respuesta);
	} while (strcmp(respuesta,"s")==0);
	return 0;
}


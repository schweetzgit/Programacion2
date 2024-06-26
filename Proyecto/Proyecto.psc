Algoritmo Proyecto_Cancha
	// Datos del jugador
	Definir nomb_player[50] Como Caracter
	Definir num_shirt Como Entero
	Definir position Como Caracter
	Definir age Como Entero
	// Datos del equipo
	Definir nomb_team Como Caracter
	Definir pa_player Como Caracter
	Definir dt Como Caracter
	Definir informacion Como Entero
	Definir num_player Como Entero
FinAlgoritmo

Funcion Main
		Definir n Como Entero
		Definir r Como Caracter
		Escribir '------LIGA DE FUTBOL ERUL------'
		Escribir 'Ingrese el numero de equipos'
		Leer n
		Repetir
		Menu
		Escribir 'Rgresar al menu principal'
		Leer r
	Hasta Que r == 's'
FinFuncion

Funcion Menu
	definir op1, op2 Como Entero
	definir r2 Como Caracter
	Escribir ' [1] Datos de equipos'
	Escribir '[2] Salir'
	Escribir 'Selecciona una opcion: '
	Leer op1
	Segun op1 Hacer
		caso 1:
			Escribir '----- Datos de los equipos ------'
			LeerDatos
			GuardarEnArchivo
			Repetir
				Escribir '----- Equipos ------'
				Escribir '1 Calendario de juegos'
				Escribir '2 Marcadores y ganador'
				Escribir '3 salir'
				Escribir 'seleccione una opcion'
				Leer op2
				Si op2 == 1 Entonces
					Escribir '------Claendario de juegos------'
					Calendario
				Fin Si
				Si op2 == 2 Entonces
					Escribir '------ Marcadores de juegos ------'
					MarcadorGanador
				Fin Si
				Si op2 == 3 Entonces
					Escribir 'Rgresar al menu principal'
				SiNo
					Escribir 'Opcion invalida'
				Fin Si
			Hasta Que r2 == 's'
		caso 2:
			escribir 'Haz escogido salir'
		De Otro Modo:
			Escribir 'Opcion invalida'
			Escribir '------LIGA DE FUTBOL ERUL------'
			Menu
	Fin Segun
FinFuncion

Funcion LeerDatos
	Para i=0 Hasta i < num Con Paso 1 Hacer
		Escribir 'Nombre del equipo'
		Leer nomb_team
		Escribir " Nombre del director tecnico: "
		Leer dt
		Escribir " Formation (numero): "
		Leer formation
		Escribir " Numero de jugadores: "
		leer num_player
		Para j = 0 Hasta j < num_player Con Paso 1 Hacer
			Escribir 'Nombre del jugador:'
			Leer num_player
			Escribir 'Edad'
			leer age
			Escribir 'Numero de camiseta'
			Leer num_shirt
			Escribir 'Posicion de juego'
			leer position
		Fin Para
	Fin Para
FinFuncion

Funcion GuardarEnArchivo
	Para i = 0 Hasta i < num Con Paso 1 Hacer
		Escribir 'Nombre del equipo' nomb_team
		Escribir 'Nombre del director tecnico' dt
		Escribir 'Formacion' formation
		Escribir 'Numero de jugadores' num_player
		Para j=0 Hasta j < num_player Con Paso 1 Hacer
			Escribir "Jugador" nomb_player
			Escribir "Edad" age
			Escribir "Numero de camiseta" num_shirt
			Escribir "Posicion de juego" position
		Fin Para
	Fin Para
	Escribir "Datos guardados correctamente en el archivoA"
FinFuncion

Funcion Calendario
	Si B == NULL Entonces
		Escribir "Error en apertura de archivo"
	Fin Si
	Definir i,j,k, dia, mes Como Entero
	u <- 1
	mes = Azar()%12 +1
	dia = Azar ()%30 +1
	k <- num - 1
	Escribir "---- Calendario ----"
	Para u = 1 Hasta u < num Con Paso 1 Hacer
		Escribir "Jornada" u
		Escribir "Dia Mes"
		Para i = 0 Hasta i < num Con Paso 1 Hacer
			Para j = 0 Hasta j < num Con Paso 1 Hacer
				Si i+j == u o i - j == u & (i > j)Entonces
					Escribir nomb_team "vs" nomb_team
					Escribir dia mes
				Fin Si
			Fin Para
			dia = +1
		Fin Para
	Fin Para
	Escribir "Datos guardados correctamente en el archivoB"
FinFuncion

Funcion MarcadorGanador
	Si b == NULL Entonces
		Escribir "Error en apertura de archivo"
	Fin Si
	Definir temporal como real
	definir MarA, MarB, puntosA, puntos, goles, i, j, k, u, s, r Como Entero
	Para i = 0 Hasta i < num Con Paso 1 Hacer
		goles = 0
		puntos = 0
	Fin Para
	Para i = 0 Hasta i < num*(num+1)/2+1 Con Paso 1 Hacer
		MarA = (Azar()%10)+1;
		MarB = (Azar()%10)+1;
	FinPara
	Escribir "---- Marcadores ----"
	Para u = 1 Hasta u < num Con Paso 1 Hacer
		Escribir "Jornada" u
		Escribir "Nombre  Goles  vs   Goles  Nombre"
	Fin Para
	Para i<-0 Hasta i < num Con Paso 1 Hacer
		Para j<-0 Hasta j < num Con Paso 1 Hacer
			Si ((i + j == u)|(i - j == u)) & (i > j) Entonces
				Si MarA > MarB Entonces
					puntos = +3
				SiNo MarA = MarB
					puntos = +1
					puntos = +1
				Fin Si
				si MarA < MarB Entonces
					puntos = +3
				FinSi
				Escribir nomb_team, MarA[s],MarB[r], nomb_team	
				Escribir ""
				goles = +MarA
				goles = +MarB
			Fin Si
		Fin Para
	Fin Para
	Para i <- 0 Hasta i < num Con Paso 1 Hacer
		Escribir "Puntos del equipo" nomb_team puntos[i]
	Fin Para
	Para i <- 0 Hasta i < num Con Paso 1 Hacer
		puntosA = puntos
	Fin Para
	Escribir "Datos guardados correctamente en el ArchivoB"
	Escribir "---- Ganador y marcadores finales ----"
	Para i <- 0 Hasta i < num Con Paso 1 Hacer
		Escribir "Goles del equipo" nomb_team,goles[i]
	Fin Para
	Para i <- 0 Hasta i < num Con Paso 1 Hacer
		Para j <- 0 Hasta j < num Con Paso 1 Hacer
			Si puntos[j] < puntos[j+1] Entonces
				temporal = puntos[j]
				puntos = puntos
				puntos = temporal
			Fin Si
		Fin Para
	Fin Para
	Para i <- 0 Hasta i < num Con Paso 1 Hacer
		Para j <- 0 Hasta j < num Con Paso 1 Hacer
			Si puntos[i] == puntosA[j] Entonces
				Escribir "Los puntos del equipo %s son:" nomb_team,puntos[i]
			Fin Si
		Fin Para
	Fin Para
	Para j<- 0 Hasta j < num Con Paso 1 Hacer
		Si puntos[0] == puntosA[j] Entonces
			Escribir "El ganador es el EQUIPO" nomb_team
		Fin Si
	Fin Para
	Escribir "FELICIDADES!"
	Escribir "Datos guardados correctamente en el ArchivoC"
FinFuncion
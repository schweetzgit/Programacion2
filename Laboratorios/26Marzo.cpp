//UNO
#include <stdio.h>

//DOS
typedef struct alumnos{
	char nombre[20], numcta[20];
	int numGrupo;
	float cal[3];
}alumno;

//void leerDatos(*alumno *grupo);
//void leerDatos(&alumno);
alumno leerDatos();
alumno escribirDatos();
float proIndividual(*alumnos);
float proGrupal(*alumno);
float caliMaxima(*alumno);

// TRES
int main(){
	//var locales
	alumno grupo2202[3];
	float promedioInd, primedioGrupal;
	printf("\n Bitacora grupo \n Dame datos de tres alumnos y doy promedios");
	// presentar opciones o hacer que todas se ejecuten
	
	leerDatos();
	escribirDatos();
	promedioInd = proIndividual(&grupo2202);
	printf("\n El promedio individual es %.2f",promedioInd);
	promedioGrupal = proGrupal(&grupo2202);
	printf("\n El promedio grupal es %.2f",promedioGrupal);
}

// CUATRO
void leerDatos(*alumno[3] grupo[3]){
	// var locales
	printf(" \n Dame nombre, grupo, y tres calificaiones");
	for(int i = 0; i<3){
		gets(grupo[i].nombre); fflush(stdin);
		gets(grupo[i].numcta); fflush(stdin);
		for(int j = 0; j < 3; i++){
			scanf("%d",&grupo[i].cal[j]);
		}
	}
}

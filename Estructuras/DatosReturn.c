#include <stdio.h>
#include <stdlib.h>
/* Variables globales que no usamos
   Funciones prototipo
   Tipos de datos derivados*/
struct alumnos{
	int numCuenta;
	char nombre[10];
	int edad;
} alumno1 = {123, "Juan", 67};

int promedioEdad(struct alumnos, struct alumnos, struct alumnos);
struct alumnos leerDatos();  
void imprimirLista(struct alumnos);

int main(){
	struct alumnos alumno2, alumno3;
	int resultado;
	alumno2 = leerDatos();
	alumno3 = leerDatos();
	imprimirLista(alumno1);
	imprimirLista(alumno2);
	imprimirLista(alumno3);
	resultado = promedioEdad(alumno1, alumno2, alumno3);
	printf("El promedio de edades es: %d\n",resultado);
	system("pause");
	return 0;
}
int promedioEdad(struct alumnos a1, struct alumnos a2, struct alumnos a3){
	return ((a1.edad + a2.edad + a3.edad)/3);
}
struct alumnos leerDatos(alumn){
	struct alumnos al;
	printf("Dame un numero de cuenta, nombre y edad: \n");
	scanf("%d",&al.numCuenta);
	scanf("%s",&al.nombre);
	scanf("%d",&al.edad);
	return (al);
}
void imprimirLista(struct alumnos alu){
	printf("%d, %s, %d\n",alu.numCuenta,alu.nombre,alu.edad);
}



/*
Programa que permita tener la bitacora de calificaciones del grupo
int opcion;
printf("1. Leer datos de alumnos\n 2. Imprimir lista de alumnos\n 3. Calcular promedio de calificaciones");
scanf("%d",&opcion);
switch(opcion){
	case 1:
		printf("Leer datos de alumnos\n");
	break;
	case 2:
		printf("Imprimir lista de alumnos\n");
	break;
	case 3:
		printf("Calcular promedio de calificaciones\n");
	break;
}/*


/*
Estructura anónima
struct{
	inr numCuenta;
	char nombre[10];
	int edad;
} alumno1;

Con nombre
struct alumnos{
	int numcuenta;
	cahr nombre[10];
	int edad;
};
alumno1 = {2114, "Juan", 23};
struct alumnos anlumno1;*/

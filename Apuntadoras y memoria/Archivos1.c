#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct alumno{
	char nombre [20];
	int edad;
	float calificacion;
};
FILE *archivo;
int main(){
	struct alumno alumno1;
    archivo = fopen("archivoAlumosExtra.txt","a");

    printf ("\nVamos a probar archivos: "); 
    printf ("\nNombre: ");  fflush (stdin);
	gets(alumno1.nombre);
	printf("\nEdad: ");
	scanf ("%d",&alumno1.edad);
	printf("\ncalificacion: ");
	scanf ("%f",&alumno1.calificacion); 
	if (archivo == NULL){
		printf("\n Error en apertura de archivo");
	}
	fprintf (archivo,"\n\nNombre: %s",alumno1.nombre);
	fprintf(archivo,"\nEdad: %d",alumno1.edad);
	fprintf(archivo,"\ncalificacion: %4.2f",alumno1.calificacion);
	return 0;
}
 fclose(archivo);


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//var globales y prototipos

struct alumno {
	char nombre [20];
	int edad;
	float calificacion; 	} ;
	/*Referencia: & en .cpp * en .c
			  dirección &
Ambas pasan el original del parametro*/

//leer
void  leerV( struct alumno &a); //paso por direccion
//escribir
void escribirV(struct alumno &a);// paso por direccion

 main()
{
	//var locales 
	int opc;
	struct alumno alum1;
	
	printf("programa para ALUMNOS Y  calificaciones \n elige opcion:");
	 
	do
	{   
		printf("\n 1. Leer  alumno");
		printf("\n 2. Imprime alumno");
		printf("\n 3. Salir");
		printf("\n Elija opcion: ");
		scanf("%d", &opc);
		switch(opc)
		{
			case 1: leerV(alum1);
					break;
			case 2: escribirV(alum1);
					break;
			 
			default: printf("\n Opcion incorrecta vuelva a intentar. \n");
					system("pause");
		}
	}while(opc !=3);
	
}

void leerV(struct alumno &a1 )
{	
	
	printf ("\nNombre: ");  fflush (stdin);
	gets(a1.nombre);
		
	printf("\nEdad: ");
	scanf ("%d",&a1.edad); 
	
	printf("\nCalificacion: ");
	scanf ("%f",&a1.calificacion); 

}

void escribirV(struct alumno &a1) 
{
    printf ("\nNombre: %s",a1.nombre);
 	printf("\nEdad: %d",a1.edad);
	printf("\nPeso: %4.2f",a1.calificacion);
}

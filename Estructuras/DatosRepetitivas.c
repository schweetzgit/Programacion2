#include<stdio.h>
#include<stdlib.h>

struct alumnos{ 
    int  numCuenta;                                        
    char nombre[10];
    int  edad;
}; 

void leerAlumnos(int, struct alumnos [50]);  //VALOR
void imprimirAlumnos(int, struct alumnos [50]);  //REFERENCIA
int promedioEdad(int, struct alumnos [50]);   //DIRECCION
 
int main(){   
	struct alumnos alumnos2202[50]; 
    int n, pE;
   
	printf("?cuantos alumnos hay?");
	scanf("%d",&n);
	leerAlumnos(n, alumnos2202); 
  
	printf("Los alumnos son :\n");
	imprimirAlumnos(n, alumnos2202);
   
	pE = promedioEdad(n, alumnos2202);
    printf("el promedio de edades es %d",pE);
   
	system("pause");
    return 0;
}

//construir la funcion leer alumnos que es llanmada en main

void leerAlumnos (int num, struct alumnos alu2202[50]){
	for (int i = 0; i < num ;i++){
	    printf("Dame el numero de cuenta:\n");
	    scanf("%d",&alu2202[i].numCuenta);
	    printf("Dame el nombre del alumno:\n");
	    scanf("%s",&alu2202[i].nombre);          
	    printf("Dame la edad:\n");
	    scanf("%d",&alu2202[i].edad);
   }  
}
void imprimirAlumnos(int n, struct alumnos alum2202[50]){
	for(int i = 0; i < n; i++){
		printf("%d %s %d\n", alum2202[i].numCuenta, alum2202[i].nombre, alum2202[i].edad);
	}
}
int promedioEdad(int a, struct alumnos al[50]){
    int pro = 0;
	for(int i = 0; i < a; i++){
		pro += al[i].edad;
	}
	return (pro/a);
}



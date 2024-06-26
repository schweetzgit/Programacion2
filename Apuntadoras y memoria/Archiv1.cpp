#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct agenda       { 

char nombre[20];    

char apellido[20];    

char telefono[15];    

 }registro ;        



void main()    

 {

               FILE *fichero;

                struct agenda registro;



                fichero = fopen( "nombres.txt", "a" );              

                clrscr();

               do {

                    printf( "Nombre: " );           fflush(stdout);

                   gets(registro.nombre);

                   if (strcmp(registro.nombre,""))

                      {

                       printf( "Apellido: " );           fflush(stdout);

                      gets(registro.apellido);

                      printf( "Teléfono: " ); fflush(stdout);

                      gets(registro.telefono);

                        fwrite( &amp;registro,     sizeof(registro), 1, fichero );

          }

         } while (strcmp(registro.nombre,"")!=0);

           fclose( fichero );

      }

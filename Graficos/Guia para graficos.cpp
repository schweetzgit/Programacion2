#include<stdlib.h>
#include<graphics.h>

/*Habilitar el modo grafico*/
int pantalla = DETECT, modo; //modo de operacion grafico
initgraph(&pantalla, &modo, "\\TC\\BGI"); //ruta donde estan los controladoes de los monitores


/*Funciones para detectar los pixeles de la pantalla*/
getmaxx(); //pixeles por renglon
getmaxy(); //renglores por pixeles 


//poner texto en la pantalla
outtextxy(int x, int y, "texto");

//funciones estandar
cleardevice(); //limpia la pantalla
setbkcolor(int color);  //color en el fondo
getbkcolor(); //obtiene el color del fondo
setcolor(); // obtiene el color activo de la pantalla
setfillstyle(tipo_de_trama, color_de_relleno); // establece el tipo de trama y el color de relleno
setlinestyle(int tipo_de_lines, int patrn, int ancho); //formato de linea
floodfill(int x, int y, int color); //rellena la figura geometrica dando las coordenadas de la figura

//Funciones para pintar pixeles, lines y figuras geometricas
putpixel(int x, int y, int color); //pinta un pixel
line(int x1, int y1, int x2, int y2); //pinta una linea
rectangle(int x_izq_super, int y_izq_super, int x_der_infer, int y_der_infer);
circle(int x, int y, int rdaio);
ellipse(int x, int y, int angulo_inicial, int angulo final, radioX, radioY);
arc(int x, int y, int angulo_inicial, int angulo final); //arco
filleellipse(int x, int y, int radioX, int radioY);
fillpoly(total_vertices, vector de coordenadas de vertices); //pintar poligonos


/*Cerrar el modo grafico*/
closegraph();

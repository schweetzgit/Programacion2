#include<graphics.h>
#include<conio.h>

int main(){
	int pantalla = DETECT, modo;
	initgraph(&pantalla, &modo, "C:\\TC\\BGI");
	
	settextstyle(6, 0, 6);
	outtextxy(160, 380, "Familia");
	
	// Persona A
	circle(140, 100, 50);
	circle(120, 90, 10);
	floodfill(120, 90, 15);
	circle(160, 90, 10);
	floodfill(160, 90, 15);
	arc(140, 111, 200, -20, 25);
	line(140, 150, 140, 300);
	line(140, 300, 99, 360); // pie izquierdo
	line(99, 360, 125, 360);
	line(140, 300, 181, 360); // pie derecho
	line(181, 360, 200, 360);
	line(140, 230, 200, 170); 
	line(140, 230, 200, 190);
	// Niño
	circle(270, 210, 40);
	circle(250, 200, 10);
	circle(290, 200, 10);
	arc(270, 215, 200, -20, 25);
	line(270, 250, 270, 320);
	line(270, 290, 240, 280);
	line(270, 290, 310, 280);
	line(270, 320, 229, 350);
	line(270, 320, 311, 350);
	// Persona B
	circle(400, 100, 50);
	circle(380, 90, 10);
	floodfill(380, 90, 15);
	circle(420, 90, 10);
	floodfill(420, 90, 15);
	arc(400, 111, 200, -20, 25);
	line(400, 150, 400, 300);
	line(400, 300, 441, 360); // pie derecho
	line(441, 360, 415, 360);
	line(400, 300, 359, 360); // pie inzquierdo
	line(359, 360, 333, 360);
	line(400, 230, 340, 170); 
	line(400, 230, 340, 190);
	getch();
	closegraph();
	return 0;
}

#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
	int pantalla = DETECT, modo;
	initgraph(&pantalla, &modo, "C:\\TC\\BGI");
	
	// Circulos blancos
	ellipse(300, 240, 0, 20, 220, 220);
	fillellipse(300, 240, 220, 220);
	setcolor(BLACK);
	circle(300, 240, 220);
	setfillstyle(1, 15);
	ellipse(300, 240, 0, 20, 200, 200);
	fillellipse(300, 240, 200, 200);
	
	// Circulos negros
	setfillstyle(1, 0);
	ellipse(300, 240, 0, 20, 180, 180);
	fillellipse(300, 240, 180, 180);
	setfillstyle(1, 0);
	ellipse(300, 240, 0, 20, 160, 160);
	fillellipse(300, 240, 160, 160);
	
	// Circulos azules
	setfillstyle(1, 3);
	ellipse(300, 240, 0, 20, 140, 140);
	fillellipse(300, 240, 140, 140);
	setfillstyle(1, 3);
	ellipse(300, 240, 0, 20, 120, 120);
	fillellipse(300, 240, 120, 120);
	
	// Circulos rojos
	setfillstyle(1, 4);
	ellipse(300, 240, 0, 20, 100, 100);
	fillellipse(300, 240, 100, 100);
	setfillstyle(1, 4);
	ellipse(300, 240, 0, 20, 80, 80);
	fillellipse(300, 240, 80, 80);
	
	// Circulos amarillos
	setfillstyle(1, 14);
	ellipse(300, 240, 0, 20, 60, 60);
	fillellipse(300, 240, 60, 60);
	setfillstyle(1, 14);
	ellipse(300, 240, 0, 20, 40, 40);
	fillellipse(300, 240, 40, 40);
	setfillstyle(1, 14);
	ellipse(300, 240, 0, 20, 20, 20);
	fillellipse(300, 240, 20, 20);
	setfillstyle(1, 0);
	ellipse(300, 240, 0, 20, 5, 5); //centro
	fillellipse(300, 240, 5, 5);
	
	//Flecha
	setlinestyle(0, 0, 12);
	setcolor(LIGHTMAGENTA);
	line(300, 240, 600, 240);
	line(300, 240, 320, 230);
	line(300, 240, 320, 250);
	setlinestyle(0, 0, 9);
	int vect[10] = {590, 240, 560, 240, 575, 220, 600, 220, 590, 240};
	setfillstyle(3, 5);
	fillpoly(4,vect);
	int vect2[10] = {590, 240, 560, 240, 575, 260, 600, 260, 590, 240};
	setfillstyle(3, 5);
	fillpoly(4,vect2);
	
	getch();
	closegraph();
	return 0;
}

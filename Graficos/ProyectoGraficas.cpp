#include<graphics.h>
#include<conio.h>

int main(){
	int pantalla = DETECT, modo;
	initgraph(&pantalla, &modo, "C:\\TC\\BGI");
	
	setfillstyle(4, 3);
	bar3d(450, 50, 550, 400, 10, 20);
	setfillstyle(4, 1);
	bar3d(350, 120, 450, 400, 10, 20);
	setfillstyle(4, 2);
	bar3d(250, 200, 350, 400, 10, 20);
	setfillstyle(4, 14);
	bar3d(150, 100, 250, 400, 10, 20);
	setfillstyle(4, 5);
	bar3d(50, 150, 150, 400, 10, 20);
	
	setfillstyle(11,5);
	setcolor(CYAN);
	sector(800, 200, 1, 72, 150, 150);
	setcolor(BLUE);
	sector(800, 200, 72, 150, 150, 150);
	setcolor(GREEN);
	sector(800, 200, 150, 190, 150, 150);
	setcolor(YELLOW);
	sector(800, 200, 190, 250, 150, 150);
	setcolor(MAGENTA);
	sector(800, 200, 250, 1, 150, 150);
	
	getch();
	closegraph();
	return 0;
}

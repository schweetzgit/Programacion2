#include<graphics.h>
#include<conio.h>

int main(){
	int pantalla = DETECT, modo;
	initgraph(&pantalla, &modo, "C:\\TC\\BGI");
	
	rectangle(200, 150, 500, 400);
	rectangle(280, 300, 420, 400);
	line(350, 300, 350, 400);
	rectangle(230, 170, 330, 250);
	line(280, 170, 280, 250);
	line(230, 210, 330, 210);
	rectangle(370, 170, 470, 250);
	line(420, 170, 420, 250);
	line(370, 210, 470, 210);
	/*line(500, 400, 600, 300);
	line(500, 150, 600, 50);
	line(600, 50, 600, 300);*/
	int vect2[10] = {500, 400, 600, 300, 600, 50, 500, 150, 500, 400};
	setfillstyle(3, 13);
	fillpoly(4, vect2);
	//line(600, 50, 380, 50);
	int vect3[10] = {200, 150, 500, 150, 600, 50, 380, 50, 200, 150};
	setfillstyle(1, 13);
	fillpoly(4,vect3);
	int vect[8] = {170, 150, 350, 20, 530, 150, 170, 150};
	setfillstyle(1, 13);
	fillpoly(3, vect);
	
	getch();
	closegraph();
	return 0;
}

#include <stdio.h>
float promedio (float[10]);

int main(){
	float prom = 0, calif[10];
	int i;
	printf("Dame 10 calificaciones para sacar el promedido: ");
	
	for(i = 0; i < 10; i++){
		scanf("%f",&calif[i]);
	}
	prom = promedio(calif);
	printf("El promedio es %f",prom);
	return 0;
}

float promedio (float calificaciones[10]){
	float pro = 0;
	for(int i = 0; i < 10; i++){
		pro += calificaciones[i];
	}
	return (pro / 10);
}


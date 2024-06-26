#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
typedef struct factura{
	char nombre[20];
	int unidad;
	float precio;
	char estado[10];
}ftr;
typedef struct complejo{
	int real, imaginario;
}complex;
enum opciones1{factura = 1, complejo = 2, salir = 3};
enum opciones2{leerDatos = 1, imprimirFactura = 2};

void leer(ftr [200]);
void imprimir(ftr [200]);
complex leerNum();
complex sum(complex n1, complex n2);
complex res(complex n1, complex n2);
complex mul(complex n1, complex n2);
complex divi(complex n1, complex n2);
void imprimirNum(complex n1);

int main(){
	enum opciones1 opc1;
	enum opciones2 opc2;
	char ans, answer;
	int elegir;
	ftr clientes[200];
	complex first, second, result;
	do{
		system("cls");
		printf("\n\t LABORATORIO 19 MARZO\n");
		printf("\n 1. Ejercicio Factura \n 2. Ejercicio Complejo\n 3. Salir\n Elegir una opcion: ");
		scanf("%d",&opc1);
		switch(opc1){
			case factura:
				do{
					system("cls");
					printf("\n\t FACTURA DE CLIENTES\n");
					printf("\n 1. Leer datos\n 2. Factura de clientes");
					printf("\n Elija opcion: ");
					scanf("%d",&opc2);
					switch(opc2){
						case leerDatos:
							leer(clientes);
							break;
						case imprimirFactura:
							imprimir(clientes);
							break;
						default: printf("\n Opcion no valida");
					}
					printf("\n %cRegresar al menu? s/n: ",168);
					fflush(stdin);
					scanf("%c",&answer);
				}while (tolower(answer) == 's');
				break;
			case complejo:
				do{
					system("cls");
					printf("\n\t CALCULADORA DE COMPLEJOS\n");
					printf("\n 1. Suma\n 2. Resta\n 3. Multiplicacion\n 4. Division\n 5. Salir\n Elegir opcion: ");
					scanf("%d",&elegir);
					switch(elegir){
						case 1:
							printf("\n Escribe 1er numero complejo: ");
							first = leerNum();
							printf(" Escribe 2do numero complejo: ");
							second = leerNum();
							result = sum(first,second);
							printf("\n La suma es: ");
							imprimirNum(result);
						break;
						case 2:
							printf("\n Escribe 1er numero complejo: ");
							first = leerNum();
							printf(" Escribe 2do numero complejo: ");
							second = leerNum();
							result = res(first,second);
							printf("\n La resta es: ");
							imprimirNum(result);
						break;
						case 3:
							printf("\n Escribe 1er numero complejo: ");
							first = leerNum();
							printf(" Escribe 2do numero complejo: ");
							second = leerNum();
							result = mul(first,second);
							printf("\n La multiplicacion es: ");
							imprimirNum(result);
						break;
						case 4:
							printf("\n Escribe 1er numero complejo: ");
							first = leerNum();
							printf(" Escribe 2do numero complejo: ");
							second = leerNum();
							if (second.real == 0 && second.imaginario == 0){
								printf(" La division no esta definida");
							}else{
								result = divi(first,second);
								printf("\n La division es: ");
								imprimirNum(result);
							}
						break;
						case 5: exit(0);
						default: printf(" Opcion no valida");
					}
					printf("\n %cRegresar al menu? s/n: ",168);
					fflush(stdin);
					scanf("%c",&answer);
				}while (tolower(answer) == 's');
				break;
			case salir: exit(0);
			default: printf("\n Opcion no valida");
		} 
		printf("\n %cRegresar al menu principal? s/n: ",168);
		fflush(stdin);
		scanf("%c",&ans);
	}while (tolower(ans) == 's');
	system("pause");
	return 0;
}
void leer(ftr c[50]){
	int n;
	char ans;
	do{
		printf("\n Numero cliente a leer datos: ");
		scanf("%d",&n);
		printf("\n Nombre de cliente: ");
		fflush(stdin);
		gets(c[n].nombre);
		do{
			printf(" Numero de unidad: ");
			scanf("%d",&c[n].unidad);
		} while (c[n].unidad < 0);
		do{
			printf(" Precio de cada unidad: ");
			scanf("%f",&c[n].precio);
		} while (c[n].precio < 0.0);	
		printf(" Estado (moroso/ atrasado/ pagado): ");
		fflush(stdin);
		gets(c[n].estado);
		printf("\n %cAgregar mas datos? s/n: ",168);
		fflush(stdin);
		scanf("%c",&ans);
		n++;
	} while (tolower(ans) == 's');
}
void imprimir(ftr c[50]){
	int n;
	char ans;
	do{
		printf("\n Numero de cliente a imprimnir datos: ");
		scanf("%d",&n);
		printf(" Nombre del cliente: ");
		puts(c[n].nombre);  
		printf(" Numero de unidades compradas: %d\n",c[n].unidad);
		printf(" Precio total: %.2f\n",c[n].precio);
		printf(" Estado del pago: ");
		puts(c[n].estado);
		fflush(stdout);
		printf("\n %cImprimir factura de otro cliente? (s/n): ",168);
		fflush(stdin);
		scanf("%c",&ans);
	} while (tolower(ans) == 's');	
}
complex leerNum(){
	complex n1;
	scanf("%d %d",&n1.real, &n1.imaginario);
	return (n1);
}
complex sum(complex n1, complex n2){
	complex r;
	r.real = n1.real + n2.real;
	r.imaginario = n1.imaginario + n2.imaginario;
	return (r);
}
complex res(complex n1, complex n2){
	complex r;
	r.real = n1.real - n2.real;
	r.imaginario = n1.imaginario - n2.imaginario;
	return (r);
}
complex mul(complex n1, complex n2){
	complex r;
	r.real = n1.real*n2.real - n1.imaginario*n2.imaginario;
	r.imaginario = n1.real*n2.imaginario + n1.imaginario*n2.real;
	return (r);
}
complex divi(complex n1, complex n2){
	complex r;
	r.real = (n1.real*n2.real + n1.imaginario*n2.imaginario) / (n1.real*n2.real + n1.imaginario*n2.imaginario);
	r.imaginario = (n1.imaginario*n2.real - n1.real*n2.imaginario) / (n1.real*n2.real + n1.imaginario*n2.imaginario);
	return (r);
}
void imprimirNum(complex n1){
	if(n1.real == 0){
		if(n1.imaginario == 0){
			printf("0\n");
		}else{
			if(n1.imaginario == 1){
				printf("i\n");
			}else{
				if(n1.imaginario < 0){
					if(n1.imaginario = -1){
						printf("-i\n");
					}else{
						printf("-i%d\n",-n1.imaginario);
					} 
				}else{
					printf("%di\n",n1.imaginario);	
				}
	    	}
		}
	}else{
		if(n1.imaginario == 0){
			printf("%s\n",n1.real);
		}else{
			if(n1.imaginario == 1){
				printf("%d + i\n",n1.real);
			}else{
				if(n1.imaginario < 0){
					if(n1.imaginario == -1){
						printf("%d - i\n",n1.real);
					}else{
						printf("%d - %di\n",n1.real,-n1.imaginario);
					}
			    }else{
			    	printf("%d + %di\n",n1.real,n1.imaginario);
				}
	    	}
		}
	}  	
}

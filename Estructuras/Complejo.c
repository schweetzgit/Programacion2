/*Escribe un programa que permita hacer las operaciones de suma, resta, 
multiplicación y división de números complejos. 
El tipo complejo ha de definirse como una estructura.*/

#include <stdio.h>
#include <stdlib.h>
typedef struct complejo{
	int real, imaginario;
}complex;

complex leerNum();
complex sum(complex n1, complex n2);
complex res(complex n1, complex n2);
complex mul(complex n1, complex n2);
complex divi(complex n1, complex n2);
void imprimirNum(complex n1);

int main(){
	int elegir;
	char answer;
	complex first, second, result;
	do{
		system("cls");
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
					printf(" No es posible la division");
				}else{
					result = divi(first,second);
					printf("\n La division es: ");
					imprimirNum(result);
				}
			break;
			case 5:
				exit(0);
			break;
			default:
				printf(" Opcion no valida");
			break;
		}
		printf("\n %cRepetir programa? s/n: ",168);
		fflush(stdin);
		scanf("%c",&answer);
	} while (tolower(answer) == 's');
	system("pause");
	return 0;
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

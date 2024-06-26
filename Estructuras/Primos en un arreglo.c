#include <stdio.h>
#include <stdbool.h>


unsigned long int maxn = 2e6;

int main(){

    bool array[2000999];
    int cont = 1, cota, primos = 2;

    for(int x = 0; x <= maxn; x++) array[x] = 1;

    printf("\n");
    printf(" Hasta que numero se sumaran los numeros primos?  ");
    scanf("%ld", &cota);

    for(int x = 4; x <= maxn; x+=2) array[x] = 0;
    for(int y = 3; y <= maxn; y+=2){
        if(array[y]){
            if(cont == cota) break;
            cont++;
            primos += y;

            for(int x = y*y; x <= maxn; x+=y) array[x] = 0;
        }
    }
    fflush(stdin);
    printf("\n El la suma de todos los primeros %ld numeros es: %ld\n\n", cota, primos);


    system("pause");
    return 0;
}


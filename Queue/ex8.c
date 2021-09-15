#include <stdio.h>
#include <stdlib.h>
#include "fila.c"

int main(){
    tfila f1, f2, f3;
    int n1, n2, i, max;
    dados d1={1., ""}, d2={2., ""}, d3, d4;

    printf("Lenght of queue 1: ");
    scanf("%i",&n1);

    printf("Lenght of queue 2: ");
    scanf("%i",&n2);

    if (n1>=n2){
        max=n1;
    }
    else{
        max=n2;
    }

    cria_fila(&f1);
    cria_fila(&f2);

    for (i=0; i<n1; i++) {
        insere_fila(&f1, d1);
    }

    for (i=0; i<n2; i++) {
        insere_fila(&f2, d2);
    }

    for (i=0; i<max; i++){  
        if (i<n1){
            retirar_fila(&f1, &d3);
            insere_fila(&f3, d3);
            printf("%.0f\n", d3.valor);
        }
        if (i<n2){
            retirar_fila(&f2, &d4);
            insere_fila(&f3, d4);
            printf("%.0f\n", d4.valor);
        }
    }

    return 0;
}
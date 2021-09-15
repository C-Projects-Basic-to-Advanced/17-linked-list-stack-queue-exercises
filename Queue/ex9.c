#include <stdio.h>
#include <stdlib.h>
#include "fila.c"

int main(){
    tfila f1, f2;
    int r=3;

    dados d, d1={1, "Leo"}, d2={1, "Reynolds"}, d3={1, "Laika"}, d4={1, "Biribinha"}, d5={1, "Ni CocaCola"}, d6={1, "Igor"};

    cria_fila(&f1);
    cria_fila(&f2);

    insere_fila(&f1, d1);
    insere_fila(&f1, d2);
    insere_fila(&f1, d3);

    insere_fila(&f2, d4);
    insere_fila(&f2, d5);
    insere_fila(&f2, d6);

    while (r != 0){
        printf("%s", f1.elemento[f1.frente]);
        printf("%s", f2.elemento[f2.frente]);

        printf("1 or 2 won?");
        scanf("%i", &r);

        if (r == 1){
            retirar_fila(&f2, &d);
            insere_fila(&f2, d);
        }
        if (r == 2){
            retirar_fila(&f1, &d);
            insere_fila(&f1, d);
        }
        //system("cls");
    }
    
    return 0;
}
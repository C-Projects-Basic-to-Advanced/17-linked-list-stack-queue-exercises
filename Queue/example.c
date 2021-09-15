#include <stdio.h>
#include <stdlib.h>
#include "fila.c"

int main(void) {
  tfila f;
  dados d1 = {40, "tchau"};
  dados d2, d3;
  cria_fila( &f );
  insere_fila( &f, d1 );
  insere_fila( &f, d1 );
  insere_fila( &f, d1 );
  insere_fila( &f, d1 );
  insere_fila( &f, d1 );
  insere_fila( &f, d1 );
  insere_fila( &f, d1 );
  insere_fila( &f, d1 );
  insere_fila( &f, d1 );
  insere_fila( &f, d1 );
  insere_fila( &f, d1 );
  insere_fila( &f, d1 );
  insere_fila( &f, d1 );
  insere_fila( &f, d1 );
  retirar_fila( &f, &d2 );
  retirar_fila( &f, &d3 );
  insere_fila( &f, d1 );
  insere_fila( &f, d1 );
  insere_fila( &f, d1 );

  return 0;
}
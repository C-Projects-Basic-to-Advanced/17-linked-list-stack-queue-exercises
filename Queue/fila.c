#include "fila.h"

void cria_fila(tfila *fp) {
  (*fp).tras = -1;
  (*fp).frente = 0;
  (*fp).quantidade = 0;
}

int insere_fila(tfila *fp, dados d) {
  if( fila_cheia( *fp ) ) return -1;
  (*fp).tras++;
  if ( (*fp).tras >= MAX_FILA )
    (*fp).tras = 0;
  (*fp).quantidade++;
  (*fp).elemento[(*fp).tras] = d;
  return (*fp).tras;
}

int fila_cheia(tfila f) {
  return f.quantidade == MAX_FILA;
}

int fila_vazia(tfila f) {
  return f.quantidade == 0;
}

int retirar_fila(tfila *fp, dados *d) {
  if( fila_vazia( *fp ) ) return -1;
  *d = (*fp).elemento[(*fp).frente];
  (*fp).frente++;
  if ( (*fp).frente >= MAX_FILA )
    (*fp).frente = 0;
  (*fp).quantidade--;
  return (*fp).frente;
}
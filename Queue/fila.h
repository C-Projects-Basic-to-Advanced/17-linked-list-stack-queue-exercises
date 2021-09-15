#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

#define MAX_STRING 20
#define MAX_FILA 20

typedef struct {
  float valor;
  char nick[MAX_STRING];
} dados;

typedef struct { // comentario
  dados elemento[MAX_FILA];
  int quantidade, frente, tras;
} tfila;

void cria_fila(tfila *f);
int insere_fila(tfila *f, dados d);
int retirar_fila(tfila *f, dados *d);
int fila_vazia(tfila f);
int fila_cheia(tfila f);
int quantidade_fila(tfila f);

#endif
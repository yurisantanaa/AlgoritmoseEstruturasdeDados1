#ifndef PILHA_H
#define PILHA_H
#include <stdbool.h>

struct Elemento {
    char simbolo;
    Elemento * proximo;
};

struct PilhaDescritor {
    Elemento * primeiro;
    int tamanho;
};

int valida(char expressao,PilhaDescritor * pilha);
void criar_pilha(PilhaDescritor * pilha);
int push(PilhaDescritor * pilha, char abertura);
int pop(PilhaDescritor * pilha, char * fechamento);
void mostrar(PilhaDescritor * pilha);
int tamanho(PilhaDescritor * pilha);

#endif
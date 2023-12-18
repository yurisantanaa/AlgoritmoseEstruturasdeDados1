#ifndef PILHA_H
#define PILHA_H

struct Elemento {
    int valor;
    Elemento * proximo;
};


struct PilhaDescritor {
    Elemento * primeiro;
    int tamanho;
};

void criar_pilha(PilhaDescritor * pilha);
int push(PilhaDescritor * pilha, int valor);
int pop(PilhaDescritor * pilha, int * valor);
void mostrar(PilhaDescritor * pilha);
int tamanho(PilhaDescritor * pilha);

#endif
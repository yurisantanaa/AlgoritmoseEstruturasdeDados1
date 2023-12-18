#ifndef PILHA_VETOR_H
#define PILHA_VETOR_H
#define TAM_MAX 100

struct PILHA{
    int vetor[TAM_MAX];
    int tam;
};

void criar_pilha(PILHA * pilha);
int push(PILHA * pilha,int valor);
int pop(PILHA * pilha,int * valor);
void mostrar(PILHA * pilha);

#endif
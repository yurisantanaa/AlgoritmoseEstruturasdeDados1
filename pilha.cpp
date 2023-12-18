#include "pilha.hpp"
#include <iostream>


void criar_pilha(PilhaDescritor * pilha){
    pilha -> primeiro = NULL;
    pilha -> tamanho = 0;
}


int push(PilhaDescritor * pilha, int valor){
    pilha-> primeiro->valor = valor;
    pilha-> tamanho += 1;
    pilha-> primeiro->proximo = pilha->primeiro;
    return 1;

}

int pop(PilhaDescritor * pilha, int * valor);



void mostrar(PilhaDescritor * pilha) {
    if (pilha -> tamanho == 0) return;
    std::cout << "[";
    std::cout << pilha -> primeiro-> valor;
    std::cout << "]";
    pilha->tamanho -=1;
}

int tamanho(PilhaDescritor * pilha);
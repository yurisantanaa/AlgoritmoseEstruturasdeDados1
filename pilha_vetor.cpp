#include "pilha_vetor.hpp"
#include "iostream"

void criar_pilha(PILHA * pilha){
    pilha -> tam = 0;
}


int push(PILHA * pilha,int valor){
    if (pilha -> tam == TAM_MAX) return 0;
    pilha -> vetor[pilha->tam] = valor;
    pilha -> tam += 1;
    return 1;
}



int pop(PILHA * pilha,int * valor) {
    if(pilha -> tam == 0) return 0;
    * valor = pilha -> vetor[pilha->tam - 1];
    pilha -> vetor[pilha->tam - 1] = 0;
    pilha -> tam -= 1;
    return 1;
}

void mostrar(PILHA * pilha){
    std::cout << "[";
    for (int i = 0;i < pilha->tam; i++) {
        std::cout <<  pilha -> vetor[i];
        if (i<pilha->tam -1 ) std::cout << ",";
    }
    std::cout << "]\n";
}



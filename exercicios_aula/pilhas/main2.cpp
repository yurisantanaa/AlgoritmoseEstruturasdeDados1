#include "pilha.hpp"
#include <iostream>
#include <stdlib.h>

int main(){
    PilhaDescritor * pilha = (PilhaDescritor *) malloc(sizeof(PilhaDescritor));
    int removido;
    criar_pilha(pilha);
    push(pilha,3);
    push(pilha,5);
    push(pilha,7);
    mostrar(pilha);
    pop(pilha,&removido);
    std::cout << "elemento removido: " << removido << "\n";
    mostrar(pilha);
    tamanho(pilha);
    push(pilha,9);
    mostrar(pilha);
    pop(pilha,&removido);
     std::cout << "elemento removido: " << removido << "\n";
    pop(pilha,&removido);
     std::cout << "elemento removido: " << removido << "\n";
     mostrar(pilha);
    tamanho(pilha);
    return 1;
}
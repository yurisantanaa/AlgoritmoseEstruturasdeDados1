#include "pilha_vetor.hpp"
#include <iostream>

int main(){
    PILHA pilha;
    int removido;
    criar_pilha(&pilha);
    push(&pilha,5);
    mostrar(&pilha);
    push(&pilha,9);
    mostrar(&pilha);
    push(&pilha,2);
    mostrar(&pilha);
    push(&pilha,3);
    mostrar(&pilha);
    pop(&pilha,&removido);
    std::cout << "valor removido = ";
    std::cout << removido;
    std::cout << "\n";
    mostrar(&pilha);
}
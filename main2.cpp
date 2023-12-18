#include "pilha.hpp"

int main(){
    PilhaDescritor pilha;
    criar_pilha(&pilha);
    push(&pilha,3);
    push(&pilha,5);
    push(&pilha,7);
    mostrar(&pilha);

    return 1;
}
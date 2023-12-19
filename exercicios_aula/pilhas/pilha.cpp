#include "pilha.hpp"
#include <iostream>
  Elemento * aux;


void criar_pilha(PilhaDescritor * pilha){
    pilha -> primeiro = NULL;
    pilha -> tamanho = 0;
}


int push(PilhaDescritor * pilha, int valor){
    Elemento *novo = (Elemento*) malloc(sizeof(Elemento));
    novo -> valor = valor;
    novo -> proximo = pilha->primeiro;
    pilha->primeiro = novo;
    pilha -> tamanho += 1;
    return 1;

}

int pop(PilhaDescritor * pilha, int * valor){
    *valor = pilha->primeiro->valor;
    pilha -> tamanho -= 1;
    aux = pilha ->primeiro;
    pilha -> primeiro = pilha ->primeiro -> proximo;
    free(aux);
    return 1;
}


void mostrar(PilhaDescritor * pilha) {
  if(pilha -> primeiro == NULL){
		printf("\nPilha Vazia!!");
	}else{
		aux = pilha->primeiro;
		do{
            std::cout << "[" << aux->valor << "]\n";
			aux = aux -> proximo;
		} while(aux != NULL);
	}
  
  
}

int tamanho(PilhaDescritor * pilha){
    std::cout << "tamanho da pilha: " << pilha -> tamanho << "\n";
    return pilha -> tamanho;
}
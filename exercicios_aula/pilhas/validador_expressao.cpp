#include "validador_expressao.hpp"
#include <iostream>
  Elemento * aux;


void criar_pilha(PilhaDescritor * pilha){
    pilha -> primeiro = NULL;
    pilha -> tamanho = 0;
}


int push(PilhaDescritor * pilha, char abertura){
    Elemento *novo = (Elemento*) malloc(sizeof(Elemento));
    novo -> simbolo = abertura;
    novo -> proximo = pilha->primeiro;
    pilha->primeiro = novo;
    pilha -> tamanho += 1;
    return 1;

}

int pop(PilhaDescritor * pilha, char * fechamento){
    *fechamento = pilha->primeiro-> simbolo;
    pilha -> tamanho -= 1;
    aux = pilha -> primeiro;
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
            std::cout << " " << aux->simbolo << "\n";
			aux = aux -> proximo;
		} while(aux != NULL);
	}
  
  
}

int tamanho(PilhaDescritor * pilha){
    std::cout << "tamanho da pilha: " << pilha -> tamanho << "\n";
    return pilha -> tamanho;
}
#include <iostream>
#include "ex01.hpp"


int criaConjunto(conjunto * c){;
    if (c) {
        c->head = NULL;
        c->size = 0;
        std::cout << "conjunto criado com sucesso!\n";;
        return 1;
    }
    else {
        std::cout << "erro ao criar conjunto!\n";
        return 0;
    }
}

int conjuntoVazio(conjunto * c){
    if (c -> head == NULL) {
        std ::cout << "conjunto vazio\n";
        return 1;
    } else {
        std::cout << "conjunto nao vazio\n";
        return 0;
    }
}

 int insereElementoConjunto(unsigned int x,conjunto * c){
    node* novo = (node*)malloc(sizeof(node));
        if (novo){
        novo -> Num = x;
        novo -> prox = c ->head;
        c -> head = novo;
        c -> size += 1;
        return 1;
        }
        return 0;
}

void mostraConjunto(conjunto * c, int ordem){
    node *aux = c ->head;
    //ordena(p,ordem);
    std ::cout << '(';
    while(aux ->prox) {
       // std:: cout << "teste";
        std ::cout << aux-> Num;
        aux  = aux  -> prox;
        if(aux -> prox) std ::cout << ',';
    }
    std ::cout << ")\n";
}

int tamanhoConjunto(conjunto * c){
    std::cout << c->size << "\n";
    return c ->size;
}


int excluiDoConjunto(unsigned int x,conjunto * c){
    node* anterior = NULL;
    node* aux = c ->head;

    while (aux->prox != NULL && aux->Num != x) {
        anterior = aux;
        aux= aux->prox;
    } 
    if (aux->prox == NULL) return 0;
     if (anterior) {
        anterior->prox = aux ->prox;
    }
    else {
        c->head = aux->prox;
    }
    return 1; 
}



int pertenceConjunto(unsigned int x,conjunto * c){
    node *aux = c ->head;
    while(aux ->prox){
        if(aux->Num == x){
            std::cout << aux->Num << " pertence ao conjunto\n";
            return 1;
        }
        aux = aux->prox;
    }
    std::cout << x << " nao pertence ao conjunto\n";
    return 0;
}

void destruirConjunto(conjunto * c) {
    while (c->head->prox) {
        node * temp = c->head;
        c->head = c->head->prox;
        delete temp;
    }
}
/*
int maiores(unsigned int x,conjunto * c){
    conjunto *p = c;
    int count = 0;
        while(p) {
            if (x > p->Num) count++;
            p = p->prox;
        }
    free(p);
    return count;
}


int menores(unsigned int x,conjunto * c){
    conjunto *p = c;
    int count = 0;
        while(p) {
            if (x < p->Num) count++;
            p = p->prox;
        }
    free(p);
    return count;
}

//void ordena(conjunto * c,int ordem);








//////////////////////////////////////////
 */
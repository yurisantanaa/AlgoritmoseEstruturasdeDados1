/* #include <iostream>
#include "ex01.hpp"


conjunto* criaConjunto(void){
    conjunto *c = NULL;
    c = (conjunto*) malloc(sizeof(conjunto));
    c ->prox = NULL;
    
    return c;
}

int conjuntoVazio(conjunto * c){
    if (c -> prox == NULL) {
        return 1;
    } else {
        return 0;
    }
}

conjunto* insereElementoConjunto(unsigned int x,conjunto * c){
    conjunto* novo = (conjunto*)malloc(sizeof(conjunto));
        novo -> prox = c;
        novo -> Num = x;
        return novo;
    
}

conjunto* excluiDoConjunto(unsigned int x,conjunto * c){
    conjunto* anterior = NULL;
    conjunto* p = c;

    while (p != NULL && p->Num != x) {
        anterior = p;
        p = p->prox;
    }
    if (p == NULL) return c;
    if (anterior) {
        c = p->prox;
    }
    else {
        anterior->prox = p->prox;
    }
    free(p);
    return c;
}

//void tamanhoConjunto(conjunto * c){}

void mostraConjunto(conjunto * c, int ordem){
    conjunto *p = c;
    //ordena(p,ordem);
    std ::cout << '(';
    while(p -> prox) {
       // std:: cout << "teste";
        std ::cout << p->Num;
        p = p->prox;
        if(p->prox) std ::cout << ',';
    }
    std ::cout << ")\n";
    free(p);
}

int pertenceConjunto(unsigned int x,conjunto * c){
    conjunto *p = c;
    while(p){
        if(p->Num == x){
            free(p);
            return 1;
        }
        p = p->prox;
    }
    free(p);
    return 0;
}

void destruirConjunto(conjunto * c) {
    conjunto *p = c;
    while (p) {
        conjunto* proximo = p->prox;
        free(p);
        p = proximo;
    }
}

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
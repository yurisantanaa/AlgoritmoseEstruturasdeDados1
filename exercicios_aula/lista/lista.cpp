#include <iostream>
#include <stdio.h>
#include <stdlib.h>



struct _node{
    int data;
    struct _node * next;
};
typedef struct _node Node;


void cria_lista(Node * LISTA){
    LISTA -> next= NULL;
}


Node * node_new(int val){
    Node *novo = (Node *) malloc(sizeof(Node));
    novo -> data = val;
    return novo;
}


void node_delete(Node * no){
    free(no->next);
    free(no);
}

void node_show( Node * p) {
    if(p){
        do{
            printf(" %d",p->data);
            p=p->next;
        }while(p);
        printf("\n");
    }
    else printf("lista vazia\n");
}


//bool node_insert( Node ** inicio, Node * no);
//Node * node_remove(Node ** inicio, int val);

int main(void){
    Node * lista = node_new(33);
    cria_lista(lista);
    node_show(lista);
}
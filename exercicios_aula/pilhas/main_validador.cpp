#include "validador_expressao.hpp"
#include <iostream>
#include <stdlib.h>
#include <stdbool.h>

bool valida(char expressao[],PilhaDescritor * pilha){
    int i = 0;
    char removido;
    while(expressao[i] != '\0') {
        if (expressao[i] == '(' || expressao[i] == '{' || expressao[i] == '[') push(pilha,expressao[i]);
        else if(expressao[i] == ')' || expressao[i] == '}' || expressao[i] == ']') {
            pop(pilha,&removido);
            switch(expressao[i]){
                case ')':
                    if(removido != '(') return 0;
                    break;
                case ']':   
                    if(removido != '[') return 0;
                    break;
                case '}':
                    if(removido != '{') return 0;
                    break;
            }
        }
    i++;
    }
        return 1;
}



int main(){
    PilhaDescritor * pilha = (PilhaDescritor *) malloc(sizeof(PilhaDescritor));
    char fechamento;
    char expressao[50];
    while(scanf("%[^\n]",expressao));
    if(valida(expressao,pilha)) std::cout << "expressao valida\n";
    else std::cout << "expressao invalida\n";
    return 1;
}

#include "ex01.hpp"
#include <iostream>


int main() {
    using namespace std;   
    conjunto *c1 = (conjunto *)malloc(sizeof(conjunto));
    criaConjunto(c1);
    conjuntoVazio(c1);

    insereElementoConjunto(7,c1);
    insereElementoConjunto(7,c1);
    insereElementoConjunto(3,c1);
    insereElementoConjunto(9,c1);
    insereElementoConjunto(1,c1);
    insereElementoConjunto(13,c1);
    insereElementoConjunto(53,c1);
    insereElementoConjunto(6,c1);
    insereElementoConjunto(6,c1);
    mostraConjunto(c1,1);
    tamanhoConjunto(c1);
 
    excluiDoConjunto(6,c1);
    mostraConjunto(c1,1);
    excluiDoConjunto(53,c1);
    mostraConjunto(c1,1);
    excluiDoConjunto(9,c1);
    mostraConjunto(c1,1); 
    pertenceConjunto(7,c1);
    pertenceConjunto(1,c1);
    pertenceConjunto(0,c1);
    pertenceConjunto(10,c1);
    destruirConjunto(c1);
    return 0;
}
#include "ex02.hpp"
#include <iostream>

int main(){
        data* d1;
        data* d2;

        d1 = criaData(06,01,2005);
        d2 = copiaData(*d1);
        imprimeData(d1);
        imprimeData(d2);
        liberaData(d2);
        data * d3 = criaData(29,2,2003);
        imprimeData(d3);
        data * d4 = somaDiasData(*d1,54);
        imprimeData(d4);
        d4 = subtrairDiasData(*d4,10);
        imprimeData(d4);
        d1 = subtrairDiasData(*d1,10);
        imprimeData(d1);
        obtemDiaData(*d1);
        obtemMesData(*d1);
        obtemAnoData(*d1);
        int x = comparaData(*d4,*d1);
        std::cout << x;
        
        return 1;
}
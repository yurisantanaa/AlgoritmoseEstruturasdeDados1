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
        return 1;
}
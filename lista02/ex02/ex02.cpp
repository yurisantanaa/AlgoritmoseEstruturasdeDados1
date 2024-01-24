#include "ex02.hpp"
#include <iostream>

data *criaData(unsigned int dia,unsigned int mes,unsigned int ano){
        
        data *d = NULL;
        d = (data*)malloc(sizeof(data));
        if (validadata(dia,mes,ano)) {
                d->dia = dia;
                d->mes = mes;
                d->ano = ano;
                return d;
        }
        else{
                std::cout << "data invalida\n";
                return NULL;
        }
}

int validadata(unsigned int dia,unsigned int mes,unsigned int ano){
        if ((mes > 12 || mes < 1) || (ano < 1900 || ano > 2200 )) return 0;
        if ((mes == 1||mes == 3||mes == 5||mes == 7||mes == 8||mes == 10||mes == 12) && (dia <= 31 && dia > 0)) return 1;
        else if ((mes == 4||mes == 6||mes == 9||mes == 11) && (dia <= 30 && dia > 0)) return 1;
        else if ((mes == 2) && anoBissexto(ano) && (dia <=29 && dia>0))return 1;
        else if ((mes == 2) && !anoBissexto(ano) && (dia <=28 && dia>0))return 1;
        else return 0;
}

int anoBissexto(unsigned int ano) {
        if (ano % 100 != 0 && ano%4 == 0) return 1;
        return 0;
}


data * copiaData(data d){
        data *n = (data*) malloc(sizeof(data));
        *n = d;
        return n;
}


void liberaData(data *d){
      free(d);
}

void imprimeData(data *d){
        if (d) {
                //data *n = &d;
                std::cout << d ->dia << '/' << d->mes << '/' << d->ano << '\n';
       }
        else std::cout << "erro ao imprimir data\n";
}


data * somaDiasData(data d,unsigned int dias);
data * subtrairDiasData(data d,unsigned int dias);
unsigned int obtemDiaData(data d);
unsigned int obtemMesData(data d);
unsigned int obtemAnoData(data d);
unsigned int bissextoData(data d);
int comparaData(data d1,data d2);
unsigned int numeroDiasDatas(data d1,data d2);
unsigned int numeroMesesDatas(data d1,data d2);
unsigned int numeroAnosDatas(data d1,data d2);
unsigned int obtemDiaSemanaData(data d);

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


data * somaDiasData(data d,unsigned int dias){
        data *n = new data(d);
        while(dias > 0){
                n->dia +=1;
                if ((n->mes == 1||n->mes == 3||n->mes == 5||n->mes == 7||n->mes == 8||n->mes == 10||n->mes == 12) && n->dia > 31){
                        n->mes+=1;
                        n->dia=1;        
                }
                else if ((n->mes == 4||n->mes == 6||n->mes == 9||n->mes == 11) && n->dia > 30){
                        n->mes +=1;
                        n->dia =1;
                }
                else if ((n->mes ==2 && anoBissexto(n->ano)) && n->dia > 29){
                        n->mes +=1;
                        n->dia =1;
                }
                else if ((n->mes ==2 && !anoBissexto(n->ano)) && n->dia > 28) {
                        n->mes +=1;
                        n->dia =1;
                }
                if(n->mes > 12) {
                        n->ano++;
                        n->mes=1;
                }
                dias--;
        } 
        if(validadata(n->dia,n->mes,n->ano)) {
                return n;
        }
        std::cout << "Erro\n";
        return NULL;
}



data * subtrairDiasData(data d,unsigned int dias){
        data *n = new data(d);
        while(dias > 0){
                n->dia -=1;
                if ((n->mes == 1||n->mes == 3||n->mes == 5||n->mes == 7||n->mes == 8||n->mes == 10||n->mes == 12) && n->dia < 1) 
                {
                        n->mes-=1;
                        n->dia =31;
                }
                else if ((n->mes == 4||n->mes == 6||n->mes == 9||n->mes == 11) && n->dia < 1)
                {
                        n->mes -=1;
                        n->dia = 30;
                }
                else if ((n->mes ==2 && anoBissexto(n->ano)) && n->dia < 1) {
                        n->mes -=1;
                        n->dia =29;
                }
                else if ((n->mes ==2 && !anoBissexto(n->ano)) && n->dia < 1) {
                        n->mes -=1;
                        n->dia =28;
                }
                if(n->mes < 1){
                        n->mes = 12;
                        n->ano--;
                }
                dias--;
        } 
        if(validadata(n->dia,n->mes,n->ano)) {
                return n;
        }
        std::cout << "Erro\n";
        imprimeData(n);
        return NULL;
}



unsigned int obtemDiaData(data d){
        data *n = new data(d);
        std::cout <<  " dia" << n->dia << "\n";
        return n->dia;
}



unsigned int obtemMesData(data d){
        data *n = new data(d);
        std::cout <<  " mes" << n->mes << "\n";
        return n->mes;
}

unsigned int obtemAnoData(data d){
        data *n = new data(d);
        std::cout <<  " ano" << n->ano << "\n";
        return n->ano;
}

int comparaData(data d1,data d2){
        data *n1 = new data(d1);
        data *n2 = new data(d2);
        if (n1->ano != n2->ano) {
                if (n1->ano>n2->ano) return 1;
                else return -1;
        }

        if (n1->mes != n2->mes) {
                if (n1->mes>n2->mes) return 1;
                else return -1;
        }

        if(n1->dia != n2->dia) {
                if (n1->dia>n2->dia) return 1;
                else return -1;
        }
        return 0;
}

unsigned int numeroDiasDatas(data d1,data d2);
unsigned int numeroMesesDatas(data d1,data d2);
unsigned int numeroAnosDatas(data d1,data d2);
unsigned int obtemDiaSemanaData(data d);
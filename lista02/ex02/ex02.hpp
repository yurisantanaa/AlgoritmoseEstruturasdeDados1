#ifndef __EX02_HPP__
#define __EX02_HPP__

typedef struct _data{
        int dia;
        int mes;
        int ano;
}data;

data * criaData(unsigned int dia,unsigned int mes,unsigned int ano);
data * copiaData(data d);
void liberaData(data *d);
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
void imprimeData(data *d);


int anoBissexto(unsigned int ano);
int validadata(unsigned int dia,unsigned int mes,unsigned int ano);


#endif
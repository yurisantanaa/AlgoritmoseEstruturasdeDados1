#include <iostream>
#include <cstdlib>
#include <ctime>
#define tam_max 100000

void gerarvetor(int vetor[],int tamanho);
int buscasequencial(int vetor[],int n);
int buscabinaria(int vetor[],int n);
void bubblesort(int vetor[]);


int main() {
    int vetor1[tam_max],vetor2[tam_max],vetor3[tam_max],vetor4[tam_max],vetor5[tam_max],vetor6[tam_max],vetor7[tam_max],vetor8[tam_max],vetor9[tam_max],vetor10[tam_max];
    int buscados[10000],i;
    gerarvetor(buscados,10000);gerarvetor(vetor1,tam_max);gerarvetor(vetor2,tam_max);gerarvetor(vetor3,tam_max);gerarvetor(vetor4,tam_max);gerarvetor(vetor5,tam_max);gerarvetor(vetor6,tam_max);gerarvetor(vetor7,tam_max);gerarvetor(vetor8,tam_max);gerarvetor(vetor9,tam_max);gerarvetor(vetor10,tam_max);


    for(i = 0;i<tam_max;i++) {
        if(buscados[i] >= 0 && buscados[i] < 1000) {
            if(buscasequencial(vetor1,buscados[i])) std::cout << "encontrado vetor 1\n";
            }

         else if(buscados[i] >= 1000 && buscados[i] < 2000) {
            if(buscasequencial(vetor2,buscados[i])) std::cout << "encontrado vetor 2\n";
            }

        else if(buscados[i] >= 2000 && buscados[i] < 3000) {
            if(buscasequencial(vetor3,buscados[i])) std::cout << "encontrado vetor 3\n";
            }

        else if(buscados[i] >= 3000 && buscados[i] < 4000) {
            if(buscasequencial(vetor4,buscados[i])) std::cout << "encontrado vetor 4\n";      
            }

        else if(buscados[i] >= 4000 && buscados[i] < 5000) {
            if(buscasequencial(vetor5,buscados[i])) std::cout << "encontrado vetor 5\n";
            }

        else if(buscados[i] >= 5000 && buscados[i] < 6000) {
            if(buscasequencial(vetor6,buscados[i])) std::cout << "encontrado vetor 6\n";
            }

        else if(buscados[i] >= 6000 && buscados[i] < 7000) {
            if(buscasequencial(vetor7,buscados[i])) std::cout << "encontrado vetor 7\n";
            }

        else if(buscados[i] >= 7000 && buscados[i] < 8000) {
            if(buscasequencial(vetor8,buscados[i])) std::cout << "encontrado vetor 8\n";
            }

        else if(buscados[i] >= 8000 && buscados[i] < 9000) {
            if(buscasequencial(vetor9,buscados[i])) std::cout << "encontrado vetor 9\n";
            }

        else if(buscados[i] >= 9000 && buscados[i] < 10000) {
            if(buscasequencial(vetor10,buscados[i])) std::cout << "encontrado vetor 10\n";
            }
    }

    return 1;
}

void gerarvetor(int vetor[],int tamanho){
    srand(time(NULL));
    for(int i = 0;i < tamanho;i++){
        vetor[i] =  rand();
    }
}

int buscasequencial(int vetor[],int n) {
    for (int i = 0;i < tam_max;i++) {
        if (vetor[i] == n) return 1;
    }
    return 0;
}

int buscabinaria(int vetor[],int n);
void bubblesort(int vetor[]);
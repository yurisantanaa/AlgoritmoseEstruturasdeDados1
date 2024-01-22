#include <iostream>

void quicksort(int vetor[], int inicio,int fim);
void gerarvetor(int vetor[],int tamanho);
void mostrarvetor(int vetor[],int tamanho);

int main() {
    srand(time(NULL));
    int tamanho = 100;
    int inicio = 0;
    int fim = tamanho -1;
    int vetor[tamanho];
    gerarvetor(vetor,tamanho);
    mostrarvetor(vetor,tamanho);
    quicksort(vetor,inicio,fim);
    mostrarvetor(vetor,tamanho);
    return 1;
}


void quicksort(int vetor[],int inicio,int fim){
int pivotindex = (inicio + fim)/2;
    for (int i = 0;i <= fim;i++){
        if (vetor[i] <= vetor[pivotindex]) {

        }
        else{


        }
    }


quicksort();
}


void gerarvetor(int vetor[],int tamanho) {
    for(int i = 0; i < tamanho; i++){
        vetor[i] = rand() % 100 + 1;
    }
}

void mostrarvetor(int vetor[],int tamanho) {
    std :: cout << '[';
    for(int i = 0;i < tamanho;i++) {
        std::cout << vetor[i];
        if (i<tamanho-1) std::cout << ',';
    }
    std :: cout << "]\n\n\n";
}

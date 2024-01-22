#include <iostream>

int particao(int vetor[],int inicio,int fim);
void quicksort(int vetor[], int inicio,int fim);
void gerarvetor(int vetor[],int tamanho);
void mostrarvetor(int vetor[],int tamanho);
void swap(int &x,int &y);

int main() {
    srand(time(NULL));
    int tamanho = 10;
    int inicio = 0;
    int fim = tamanho -1 ;
    int vetor[tamanho];
    gerarvetor(vetor,tamanho);
    mostrarvetor(vetor,tamanho);
    quicksort(vetor,inicio,fim);
    mostrarvetor(vetor,tamanho);
    return 1;
}


void quicksort(int vetor[],int inicio,int fim){
    int p;
    if (inicio < fim) {
        p = particao(vetor,inicio,fim);
        quicksort(vetor,p+1,fim);
        quicksort(vetor,inicio,p-1);
    }
}

int particao(int vetor[],int inicio,int fim){
    int pivotindex = fim;
    int pos = inicio;
    for (int i = inicio;i < fim;i++) {
        if(vetor[pivotindex] >= vetor[i]) {
            swap(vetor[i],vetor[pos]);
            pos++;
        }
    }
    swap(vetor[pos],vetor[pivotindex]);
    return pos;
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

void swap(int &x,int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}
#include <iostream>

void insertionsort(int vetor[], int tamanho);
void swap(int &x,int &y);
void gerarvetor(int vetor[],int tamanho);
void mostrarvetor(int vetor[],int tamanho);

int main() {
    srand(time(NULL));
    int tamanho = 100;
    int vetor[tamanho];
    gerarvetor(vetor,tamanho);
    mostrarvetor(vetor,tamanho);
    insertionsort(vetor,tamanho);
    mostrarvetor(vetor,tamanho);
    return 1;
}


void insertionsort(int vetor[],int tamanho){
    for(int i = 0;i < tamanho;i++){
        for(int k = i;k > 0;k--) {
            if (vetor[k] < vetor[k - 1]){
            swap(vetor[i],vetor[k-1]);
            i--;
            }
        }
    }    
}


void swap(int &x,int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
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
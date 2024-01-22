#include <iostream>

void mergesort(int vetor[], int inicio,int fim);
void merge(int vetor[],int inicio,int meio,int fim);
void gerarvetor(int vetor[],int tamanho);
void mostrarvetor(int vetor[],int tamanho);

int main() {
    srand(time(NULL));
    int tamanho = 10;
    int inicio = 0;
    int fim = tamanho - 1;
    int vetor[tamanho];
    gerarvetor(vetor,tamanho);
    mostrarvetor(vetor,tamanho);
    mergesort(vetor,inicio,fim);
    mostrarvetor(vetor,tamanho);
    return 1;
}


void mergesort(int vetor[],int inicio,int fim){
        int meio;
        if(inicio < fim) {
                meio = (inicio + fim)/2;
                mergesort(vetor,inicio,meio);
                mergesort(vetor,meio + 1,fim);
                merge(vetor,inicio,meio,fim);
        }
}

void merge(int vetor[],int inicio,int meio,int fim){
        int lado1 = inicio;
        int lado2 = meio + 1;
        int temp = 0;  
        int vetoraux[(fim-inicio+1)];
        while (lado1 <= meio && lado2 <= fim) {
                if(vetor[lado1]<=vetor[lado2]){
                        vetoraux[temp] = vetor[lado1];
                        lado1 +=1;
                }
                else {
                        vetoraux[temp] = vetor[lado2];
                        lado2 +=1;
                }
                temp++;
        }
         while(lado1 <= meio) {
                vetoraux[temp] = vetor[lado1];
                lado1++;
                temp++;
        }
        while(lado2 <= fim){
                vetoraux[temp] = vetor[lado2];
                lado2++;
                temp++;
        } 
        for(int i = inicio;i <= fim;i++) {
                vetor[i] = vetoraux[i-inicio];
        }
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

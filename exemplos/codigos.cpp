#include <iostream>
//METODOS DE ORDENACAO

//BUBBLESORT

void bubblesort(int vetor[],int tamanho){
    int i,k;
    for(i = 0;i < tamanho - 1; i++) {
        for(k = 0;k < tamanho - 1;k++) {
            if(vetor[k] > vetor[k + 1]) {
                swap(vetor[k],vetor[k+1]);
            }
        }
    }
}

//INSERTIONSORT

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

//SELECTIONSORT

void selectionsort(int vetor[],int tamanho){
        
    for(int i = 0;i < tamanho;i++){
        int menor = 101;
        int imenor = i;
        for(int k = i;k < tamanho;k++) {
            if (vetor[k] < menor) {
            menor = vetor[k];
            imenor = k;
            }
        }
            swap(vetor[i],vetor[imenor]);
    }    
}

//QUICKSORT

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


//MERGESORT

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


void swap(int &x,int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

//BUSCAS BINARIA E SEQUENCIAL


int buscabinaria(int vetor[],int tamanho,int n) {
    int inicio = 0;
    int fim = tamanho-1;
    int centro;
    do {
            centro = (inicio + fim)/2;
        if(vetor[centro] > n) {
            fim = centro - 1;
        }
        else if (vetor[centro] < n){
            inicio = centro + 1;
        }
        else {
            std::cout <<"numero encontrado " << vetor[centro] <<" = " << n << "\n";
            return 1;
        }
    }while  (inicio<=fim);
    return 0;
}

int buscasequencial(int vetor[],int n,int tamanho) {
    for (int i = 0;i < tamanho;++i) {
        if (vetor[i] == n){
        std::cout <<"numero encontrado " << vetor[i] <<" = " << n << "\n";
        return 1;
        }
    }
    return 0;
}


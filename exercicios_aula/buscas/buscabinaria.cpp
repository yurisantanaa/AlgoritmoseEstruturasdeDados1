#include <iostream>
#include <cstdlib>
#include <ctime>
#define tam_max 200000

void gerarvetor(int vetor[],int tamanho);
int buscabinaria(int vetor[],int tamanho,int n);
void quickSort(int vetor[], int comeco, int fim);
void swap(int &x,int &y);
int partition(int vetor[], int comeco, int fim);

int main() {
    srand(time(NULL));
    int vetor1[tam_max],vetor2[tam_max],vetor3[tam_max],vetor4[tam_max],vetor5[tam_max],vetor6[tam_max],vetor7[tam_max],vetor8[tam_max],vetor9[tam_max],vetor10[tam_max];
    int buscados[10000],i;
    int count1 = 0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count10=0;
    gerarvetor(buscados,10000);gerarvetor(vetor1,tam_max);gerarvetor(vetor2,tam_max);gerarvetor(vetor3,tam_max);gerarvetor(vetor4,tam_max);gerarvetor(vetor5,tam_max);gerarvetor(vetor6,tam_max);gerarvetor(vetor7,tam_max);gerarvetor(vetor8,tam_max);gerarvetor(vetor9,tam_max);gerarvetor(vetor10,tam_max);
    quickSort(vetor1,0,tam_max);quickSort(vetor2,0,tam_max);quickSort(vetor3,0,tam_max);quickSort(vetor4,0,tam_max);quickSort(vetor5,0,tam_max);quickSort(vetor6,0,tam_max);quickSort(vetor7,0,tam_max);quickSort(vetor8,0,tam_max);quickSort(vetor9,0,tam_max);quickSort(vetor10,0,tam_max);
        

    for(i = 0;i<10000;i++) {
        if(i >= 0 && i < 1000) {
            if(buscabinaria(vetor1,tam_max,buscados[i])) {
                count1 += 1;
            }
        }

         else if(i >= 1000 && i < 2000) {
            if(buscabinaria(vetor2,tam_max,buscados[i])) {
                count2 += 1;
            }
        }

        else if(i >= 2000 && i < 3000) {
            if(buscabinaria(vetor3,tam_max,buscados[i])) {
            count3 += 1;
            }
        }

        else if(i >= 3000 && i < 4000) {
            if(buscabinaria(vetor4,tam_max,buscados[i])) {
                count4 += 1;
            }
        }

        else if(i >= 4000 && i < 5000) {
            if(buscabinaria(vetor5,tam_max,buscados[i])) {
                count5 += 1;
            }
        }

        else if(i >= 5000 && i < 6000) {
            if(buscabinaria(vetor6,tam_max,buscados[i])) {
             count6 += 1;
            }
        }

        else if(i >= 6000 && i < 7000) {
            if(buscabinaria(vetor7,tam_max,buscados[i])) {
                count7 += 1;
            }
        }

        else if(i >= 7000 && i < 8000) {
            if(buscabinaria(vetor8,tam_max,buscados[i])){
                count8 += 1;
            } 
        }

        else if(i >= 8000 && i < 9000) {
            if(buscabinaria(vetor9,tam_max,buscados[i])){
                count9 += 1;
            } 
        }

        else if(i >= 9000 && i < 10000) {
            if(buscabinaria(vetor10,tam_max,buscados[i])){
                count10 += 1;
            } 
        }
    }
                std::cout<< count1<< " elementos\n";
                std::cout<< count2<< " elementos\n";
                std::cout<< count3<< " elementos\n";
                std::cout<< count4<< " elementos\n";      
                std::cout<< count5<< " elementos\n";
                std::cout<< count6<< " elementos\n";
                std::cout<< count7<< " elementos\n";
                std::cout<< count8<< " elementos\n";         
                std::cout<< count9<< " elementos\n";
                std::cout<< count10 << " elementos\n";

    return 1;
}

void gerarvetor(int vetor[],int tamanho){
    for(int i = 0;i < tamanho;i++){
        vetor[i] =  rand();
    }
}

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

void swap(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
}

 
void quickSort(int vetor[], int comeco, int fim)
{
    if (comeco >= fim)
        return;
    int p = partition(vetor, comeco, fim);
    quickSort(vetor, comeco, p - 1);
    quickSort(vetor, p + 1, fim);
}

int partition(int vetor[], int comeco, int fim){
    int pivot = vetor[comeco];
    int count = 0;
    for (int i = comeco + 1; i <= fim; i++) {
        if (vetor[i] <= pivot)
            count++;
    }

    int indexpivot = comeco + count;
    swap(vetor[indexpivot], vetor[comeco]);
    int i = comeco, j = fim;
    while (i < indexpivot && j > indexpivot) {
        while (vetor[i] <= pivot) {
            i++;
        }
 
        while (vetor[j] > pivot) {
            j--;
        }
 
        if (i < indexpivot && j > indexpivot) {
            swap(vetor[i++], vetor[j--]);
        }
    }
    return indexpivot;
}


//10 vetores de 200000 elementos aleatorios
//1000 elementos cada vetor de busca
//Bubble sort + busca binaria = muito

//10 vetores de 200000 elementos aleatorios
//1000 elementos cada vetor de busca
//Quicksort + busca binaria = 0.35
#include <stdio.h>

void inverte(int *vetor,int i,int f){
    if (i >= f) return;
    int t = vetor[i];
    vetor[i] = vetor[f];
    vetor[f] = t;
    inverte(vetor,i+1,f-1);    
}

int main() {
    int vetor[] = {0,3,0,1,2};
    int i = 0;
    int j;
    int f = sizeof(vetor) / sizeof(int );
    inverte(vetor,i,f-1);


    for(j = 0;j < f;j++) {
    printf("%d",vetor[j]);
    }
    printf("\n");
    return 0;
}
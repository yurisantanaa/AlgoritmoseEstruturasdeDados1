#include <stdio.h>
#include <stdlib.h>

void inverte(int *vetor,int i,int f){
    if (i >= f) return;
    int t = vetor[i];
    vetor[i] = vetor[f];
    vetor[f] = t;
    inverte(vetor,i+1,f-1);    
}

int main() {
    int *v;
    int j,x;
    int i = 0;
    int f;
    
    printf("quantidade de elementos: ");
    scanf("%d",&x);
    v = (int *)(malloc(x * sizeof(int)));
    f = x;
    for (j = 0;j < x;j++){
        scanf("%d",&v[j]);
    }

    inverte(v,i,f-1);

    for(j = 0;j < f;j++) {
        printf("%d ",v[j]);
    }
    printf("\n");
    free(v);
    return 0;
}
#include <stdio.h>

int fatduplo(int n,int resultado){
    int i;
    if(n == 0) return resultado; 
    if (n%2 == 1) resultado *= n;
    fatduplo(n - 1,resultado);
}

int main() {
    int n,r,resultado = 1;
    scanf("%d",&n);
    r = fatduplo(n,resultado);
    printf("%d\n",r);
    return 0;
}
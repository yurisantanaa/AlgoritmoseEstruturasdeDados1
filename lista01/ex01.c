#include <stdio.h>

int increment(int n,int i) {
    printf("%d ",n);
    if (n == i) {
        printf("\n");
        return 0;
    }
    increment(n+1,i);
}

int main() {
    int n = 1;
    int i;
    scanf("%d",&i);
    increment(n, i);
    return 0;
}
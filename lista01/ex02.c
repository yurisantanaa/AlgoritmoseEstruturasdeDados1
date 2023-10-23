#include <stdio.h>

void fibonacci(int termos,int n1,int n2) {
    int temp;
    printf("%d ", n1);
    if (termos == 0) {
        printf("\n");
        return;
    }
    temp = n2;
    n2 += n1;
    n1 = temp;
    fibonacci(termos-1,n1,n2);
}

int main() {
    int n1 = 0;
    int n2 = 1;
    int t,r;
    scanf("%d",&t);
    fibonacci(t,n1,n2);
    return 0;
}
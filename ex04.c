#include <stdio.h>

void inv(int n){
    if (n == 0){
        printf("\n");
        return;
    }
    if (n%10 > 0){
        printf("%d",n%10);
        n /= 10;
    }
    else n /= 10;
    inv(n);
}


int main() {
    int n;
    scanf("%d",&n);
    inv(n);
    return 0;
} 
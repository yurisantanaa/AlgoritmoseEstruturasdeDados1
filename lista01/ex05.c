#include <stdio.h>


void tobin(int n,unsigned long int m){
    if (n <= 0) {
        while (m != 1) {
        printf("%ld",m%10);
        m/=10;
        }
        return;
    }
    else {
        if (n%2 == 1){
            m *= 10;
            m += n%2;
        }
        if (n%2 == 0) {
            m *= 10;
        }

        tobin(n/2,m);
    }
}

int main() {
    int k,n,i;
    unsigned long int m = 1;
    scanf("%d",&k);
    for(i = k;i > 0; i--){
        scanf("%d",&n);
        tobin(n,m);
        printf("\n");
    }
    return 0;
}
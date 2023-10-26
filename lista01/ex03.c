#include <stdio.h>

int fack(int m,int n) {
    int r;
    if (m == 0) {
        r = n + 1;
        return r;
    }

    if (n == 0 && m > 0) fack(m-1,1);
    if (n > 0 && m > 0) fack(m-1,fack(m,n-1));
}

int main() {
    int m,n,r;
    scanf("%d%d",&m,&n);
    r = fack(m,n);
    printf("%d",r);
    return 0;
}
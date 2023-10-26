#include <stdio.h>


void tobin(int n,int m){
    if (n <= 0) {
        printf("%d\n",m); //m invertido tlvz
        return;
    }
    else {
        //bin
        tobin(n/2,m);
    }
}

int main() {
    int k,n,i,m = 0;
    scanf("%d",&k);
    for(i = k;i > 0; i--){
        scanf("%d",&n);
        tobin(n,m);
    }
    return 0;
}
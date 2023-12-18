#include <stdio.h>

int BancoInt(int valor,int n2,int n5,int n10,int n20,int n50,int n100,int notas,int casos) {
    if (notas == 0) return casos;
    int temp = valor;
    switch(notas) {
       case 6:
            if (valor >= 100 && n100 >= valor/100) {
                valor = valor%100;
            }
       case 5:
            if (valor >= 50 && n50 >= valor/50) {
                valor = valor%50;
                notas = 5;
            }
       case 4:
            if (valor >= 20 && n20 >= valor/20) {
                valor = valor%20;
                notas = 4;
            }
       case 3:
            if (valor >= 10 && n10 >= valor/10) {
                valor = valor%10;
                notas = 3;
            }
       case 2:
            if (valor >= 5 && n5 >= valor/5)  {
                valor = valor%5;
                notas = 2;
            }
       case 1:
            if (valor >= 2 && n2 >= valor/2)  {
                valor = valor%2;
            }

    }
    if (valor == 0) casos++;
    valor = temp;
    BancoInt(valor,n2,n5,n10,n20,n50,n100,notas-1,casos);
}

int main(){
    int valor,n2,n5,n10,n20,n50,n100,casos = 0;
    scanf("%d",&valor);
    scanf("%d%d%d%d%d%d",&n2,&n5,&n10,&n20,&n50,&n100);
    int maneiras = BancoInt(valor,n2,n5,n10,n20,n50,n100,6,casos);
    printf("%d\n",maneiras);
    return 0;
}
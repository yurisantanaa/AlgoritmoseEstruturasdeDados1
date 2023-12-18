#include <stdio.h>

void decimalParaBinario(int numero) {
    if (numero == 0) {
        return;
    }
    decimalParaBinario(numero / 2);
    printf("%d", numero % 2);
}

int main() {
    int numero;
    printf("Digite um número decimal: ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("A representação binária de números negativos não é suportada neste exemplo.\n");
    } else {
        printf("A representação binária de %d é: ", numero);
        decimalParaBinario(numero);
        printf("\n");
    }
    return 0;
}

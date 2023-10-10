#include <stdio.h>

int contarDigitos(int numero, int digito) {
    if (numero == 0) {
        return 0;
    }
    
    int ultimoDigito = numero % 10;
    
    numero = numero / 10;
    
    if (ultimoDigito == digito) {
        return 1 + contarDigitos(numero, digito);
    } else {
        return contarDigitos(numero, digito);
    }
}

int main() {
    int numero, digito;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    printf("Digite o dígito que deseja contar: ");
    scanf("%d", &digito);
    
    int resultado = contarDigitos(numero, digito);
    
    printf("O dígito %d aparece %d vezes no número %d.\n", digito, resultado, numero);
    
    return 0;
}

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: \n");
    scanf("%d", &numero);

    if(numero > 5){
        printf("%d é maior que 5.\n", numero);
    } else if (numero < 5) {
        printf("%d é menor que 5.\n", numero);
    }
    return 0;
}
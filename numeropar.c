#include <stdio.h>

int main(){
    int numero = 1;

    while (numero <= 10) {
        if ( numero % 2 == 0)
        {
            printf("O número %d é um exemplo de número par\n", numero);
        }
        numero++;
    }
//-------------------------------------------------------------   
    do {
        printf("\nDigite um número par para sair do programa:\n");
        scanf("%d", &numero);

        if (numero % 2 == 0){
            printf("%d é par\nSaindo...\n", numero);
        } else {
            printf("%d é impar\n", numero);
        }
    } while (numero % 2 != 0);

    return 0;
}
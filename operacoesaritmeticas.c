#include <stdio.h>

int main (){
    //Declarando os números inteiros
    int numero1, numero2;
    //Declarando os operadores matemáticos
    int soma, subtracao, multiplicacao, divisao;

    //Recebendo os números 1 e 2 informados pelo usuário
    printf("Digite o numero 1:\n");
    scanf("%d", &numero1);
    printf("Digite o numero 2:\n");
    scanf("%d", &numero2);

    //Realizando operações
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;
    
    //Mostrando os resultados de cada operação ao usuário
    printf("A soma é: %d \n", soma);
    printf("A subtração é: %d \n", subtracao);
    printf("A multiplicacao é: %d \n", multiplicacao);
    printf("A divisao é: %d \n", divisao);

    return 0;
}

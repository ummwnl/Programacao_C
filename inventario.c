#include <stdio.h>

int main (){
    //Declarando variáveis dos produtos
    char produto1[30] = "detergente";
    char produto2[30] = "carregador";
    unsigned int estoque1 = 1000;
    unsigned int estoque2 = 2000;
    unsigned int estoque_minimo1 = 500;
    unsigned int estoque_minimo2 = 2500;
    float valor1 = 19.99;
    float valor2 = 61.67;
    float valor_total1 = (float) valor1 * estoque1;
    float valor_total2 = (float) valor2 * estoque2;

    //Imprimindo os dados
    printf("O produto %s tem estoque %u e o valor unitário é: R$ %.2f\n", produto1, estoque1, valor1);
    printf("O produto %s tem estoque %u e o valor unitário é: R$ %.2f\n", produto2, estoque2, valor2);
    printf("O valor total de %s é: R$ %.2f\n", produto1, valor_total1);
    printf("O valor total de %s é: R$ %.2f\n", produto2, valor_total2);
    printf("O estoque mínimo de %s é: %d\n", produto1, estoque_minimo1);
    printf("O estoque mínimo de %s é: %d\n", produto2, estoque_minimo2);

printf("----------------------------------------\n");

    //Fazendo comparações
    printf("O produto %s está acima do estoque mínimo? %d\n", produto1, estoque1 > estoque_minimo1);
    printf("O produto %s está acima do estoque mínimo? %d\n", produto1, estoque2 > estoque_minimo2);
    printf("O valor total de %s é maior que o valor total de %s? %d\n", produto1, produto2, valor_total1 > valor_total2);

    //Esclarescendo uma informação ao usuário
    printf("\n1 = sim\n0 = não\n");

    return 0;
}

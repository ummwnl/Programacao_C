#include <stdio.h>

int main() {
    //Declarando variaveis da primeira carta
    char estado1, codigo1[4], cidade1[20];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float area1, pib1;

    //Declarando variaveis da segunda carta
    char estado2, codigo2[4], cidade2[20];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float area2, pib2;

    //Solicitando dados da primeira carta
    printf("Digite o estado da primeira carta:\n");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta:\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da primeira carta:\n");
    scanf("%s", cidade1);
    printf("Digite a população da primeira carta:\n");
    scanf("%lu", &populacao1);
    printf("Digite a área (em km2) da primeira carta:\n");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira carta:\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da primeira carta:\n");
    scanf("%d", &pontos_turisticos1);

printf("----------------------------------------\n");

    //Solicitando dados da segunda carta
    printf("Digite o estado da segunda carta:\n");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta:\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da segunda carta:\n");
    scanf("%s", cidade2);
    printf("Digite a população da segunda carta:\n");
    scanf("%lu", &populacao2);
    printf("Digite a área (em km2) da segunda carta:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda carta:\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda carta:\n");
    scanf("%d", &pontos_turisticos2);

    //Declrando novas variáveis e atribuindo operações aritméticas
    float densidade_populacional1 = (float) populacao1 / area1;
    float densidade_populacional2 = (float) populacao2 / area2;
    float pib_per_capita1 = (float) pib1 / populacao1;
    float pib_per_capita2 = (float) pib2 / populacao2;
    float super_poder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 - densidade_populacional1;
    float super_poder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 - densidade_populacional2;

printf("----------------------------------------\n");

    //Imprimindo os dados da primeira carta
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n",(unsigned long int) populacao1);
    printf("Área: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", (int) pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    //Imprimindo os dados da segunda carta
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n",(unsigned long int) populacao2);
    printf("Área: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", (int) pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

printf("----------------------------------------\n");

    //Informando ao usuário sobre a comparação das cartas
    printf("\nComparação dos dados:\n");
    printf("O número 1 representa a carta 1.\n");
    printf("O número 0 representa a carta 2\n");
    
    //Comparando as cartas
    printf("\nA carta que contém o maior super poder é: %d \n", (int) super_poder1 > super_poder2);
    printf("A carta que contém a maior população é: %d \n", (int) populacao1 > populacao2);
    printf("A carta que contém a maior área é: %d \n", (int) area1 > area2);
    printf("A carta que contém o maior PIB é: %d \n", (int) pib1 > pib2);
    printf("A carta que contém a maior quantidade de pontos turísticos é: %d \n", (int) pontos_turisticos1 > pontos_turisticos2);
    printf("A carta que contém o menor densidade populacional é: %d \n", (int) densidade_populacional1 < densidade_populacional2);
    printf("A carta que contém o maior PIB per capita é: %d \n", (int) pib_per_capita1 > pib_per_capita2);

    //Informando ao usuário sobre o resultado
    printf("\nSe a na maioria dos resultados a resposta for 1, a carta 1 vence.\n");
    printf("Se a na maioria dos resultados a resposta for 0, a carta 2 vence.\n");

    //Anotação: Se os valores forem iguais, a segunda carta recebe uma vantagem, pois o resultado será falso.
    return 0;
}

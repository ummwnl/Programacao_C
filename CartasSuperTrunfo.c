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

    //Realizando comparações
    int resultado1 = 0;
    int resultado2 = 0;

    if (super_poder1 > super_poder2) {
        resultado1++;
        printf("A carta que contém o maior superpoder é: Carta 1\n");

      } else if (super_poder1 < super_poder2) {
        resultado2++;
        printf("A carta que contém o maior superpoder é: Carta 2\n");

      } else {
        printf("O superpoder de ambas as cartas é igual\n");
    }

    if (populacao1 > populacao2) {
        resultado1++;
        printf("A carta que contém a maior população é: Carta 1\n");

      } else if (populacao1 < populacao2) {
        resultado2++;
        printf("A carta que contém a maior população é: Carta 2\n");

      } else {
        printf("A população de ambas as cartas é igual\n");
    }
    
    if (area1 > area2) {
        resultado1++;
        printf("A carta que contém a maior área é: Carta 1\n");

      } else if (area1 < area2) {
        resultado2++;
        printf("A carta que contém a maior área é: Carta 2\n");

      } else {
        printf("A área de ambas as cartas é igual\n");
    }

    if (pib1 > pib2) {
        resultado1++;
        printf("A carta que contém o maior PIB é: Carta 1\n");

      } else if (pib1 < pib2) {
        resultado2++;
        printf("A carta que contém o maior PIB é: Carta 2\n");

      } else {
        printf("O PIB de ambas as cartas é igual\n");
    }

    if (pontos_turisticos1 > pontos_turisticos2) {
        resultado1++;
        printf("A carta que contém a maior quantidade de pontos turísticos é: Carta 1\n");

      } else if (pontos_turisticos1 < pontos_turisticos2) {
        resultado2++;
        printf("A carta que contém a maior quantidade de pontos turísticos é: Carta 2\n");

      } else {
        printf("A quantidade de pontos turísticos de ambas as cartas é igual\n");
    }
    
    if (densidade_populacional1 > densidade_populacional2) {
        resultado1++;
        printf("A carta que contém a menor densidade populacional é: Carta 1\n");

      } else if (densidade_populacional1 < densidade_populacional2) {
        resultado2++;
        printf("A carta que contém a menor densidade populacional é: Carta 2\n");

      } else {
        printf("A densidade populacional de ambas as cartas é igual\n");
    }

    if (pib_per_capita1 > pib_per_capita2) {
        resultado1++;
        printf("A carta que contém o maior PIB per capita é: Carta 1\n");

      } else if (pib_per_capita1 < pib_per_capita2) {
        resultado2++;
        printf("A carta que contém o maior PIB per capita é: Carta 2\n");

      } else {
        printf("O PIB per capita de ambas as cartas é igual\n");
    }

    //Imprimindo o resultado
    if (resultado1 > resultado2) {
        printf("\nResultado: A carta 1 venceu!\n");
    } else if (resultado1 < resultado2){
        printf("\nResultado: A carta 2 venceu!\n");
    } else {
        printf("\nResultado: As cartas 1 e 2 empataram!\n");
    }

    return 0;
}

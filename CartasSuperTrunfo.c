#include <stdio.h>

int main() {
    //Declarando variaveis da primeira carta
    char estado1, codigo1[4], cidade1[20];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    //Declarando variaveis da segunda carta
    char estado2, codigo2[4], cidade2[20];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    //Solicitando dados da primeira carta
    printf("Digite o estado da primeira carta:\n");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta:\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da primeira carta:\n");
    scanf("%s", cidade1);
    printf("Digite a população da primeira carta:\n");
    scanf("%d", &populacao1);
    printf("Digite a área (em km2) da primeira carta:\n");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira carta:\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da primeira carta:\n");
    scanf("%d", &pontos_turisticos1);

    //Solicitando dados da segunda carta
    printf("Digite o estado da segunda carta:\n");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta:\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da segunda carta:\n");
    scanf("%s", cidade2);
    printf("Digite a população da segunda carta:\n");
    scanf("%d", &populacao2);
    printf("Digite a área (em km2) da segunda carta:\n");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda carta:\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda carta:\n");
    scanf("%d", &pontos_turisticos2);

    //Imprimindo os dados da primeira carta
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    //Imprimindo os dados da segunda carta
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}

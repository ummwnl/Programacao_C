#include <stdio.h>

int main() {
  //Exibindo informações do jogo
  printf("Super Trunfo\n");
  printf("Tema: Cidades\n\n");
    
  //Declarando a variável que vai armazenar a escolha do usuário no menu interativo
  short int escolha;

  //Imprimindo o menu interativo
  printf("Se deseja começar a cadastrar suas cartas, digite 1.\n");
  printf("Se deseja saber como o jogo funciona, digite 2.\n");
  printf("Se deseja fechar o programa, digite qualquer coisa.\n");

  //Solicitando o dado que corresponde a decisão do usuário
  scanf("%d", &escolha);

  //A escolha do jogador encaminhará para o respectivo bloco de código.
  switch (escolha) {
  
  //Bloco 1: Inicia o jogo
  case 1:{
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

    //Declarando variáveis que vão determinar resultado final de todas as comparações
    int resultado1 = 0;
    int resultado2 = 0;

    //Comparando o superpoder das duas cartas
    if (super_poder1 > super_poder2) {
        resultado1++;
        printf("A carta que contém o maior superpoder é: Carta 1\n");

      } else if (super_poder1 < super_poder2) {
        resultado2++;
        printf("A carta que contém o maior superpoder é: Carta 2\n");

      } else {
        printf("O superpoder de ambas as cartas é igual\n");
    }

    //Comparando a população das duas cartas
    if (populacao1 > populacao2) {
        resultado1++;
        printf("A carta que contém a maior população é: Carta 1\n");

      } else if (populacao1 < populacao2) {
        resultado2++;
        printf("A carta que contém a maior população é: Carta 2\n");

      } else {
        printf("A população de ambas as cartas é igual\n");
    }
    
    //Comparando a área das duas cartas
    if (area1 > area2) {
        resultado1++;
        printf("A carta que contém a maior área é: Carta 1\n");

      } else if (area1 < area2) {
        resultado2++;
        printf("A carta que contém a maior área é: Carta 2\n");

      } else {
        printf("A área de ambas as cartas é igual\n");
    }

    //Comparando o PIB das duas cartas
    if (pib1 > pib2) {
        resultado1++;
        printf("A carta que contém o maior PIB é: Carta 1\n");

      } else if (pib1 < pib2) {
        resultado2++;
        printf("A carta que contém o maior PIB é: Carta 2\n");

      } else {
        printf("O PIB de ambas as cartas é igual\n");
    }

    //Comparando os pontos turísticos das duas cartas
    if (pontos_turisticos1 > pontos_turisticos2) {
        resultado1++;
        printf("A carta que contém a maior quantidade de pontos turísticos é: Carta 1\n");

      } else if (pontos_turisticos1 < pontos_turisticos2) {
        resultado2++;
        printf("A carta que contém a maior quantidade de pontos turísticos é: Carta 2\n");

      } else {
        printf("A quantidade de pontos turísticos de ambas as cartas é igual\n");
    }
    
    //Comparando a densidade populacional das duas cartas
    if (densidade_populacional1 < densidade_populacional2) {
        resultado1++;
        printf("A carta que contém a menor densidade populacional é: Carta 1\n");

      } else if (densidade_populacional1 < densidade_populacional2) {
        resultado2++;
        printf("A carta que contém a menor densidade populacional é: Carta 2\n");

      } else {
        printf("A densidade populacional de ambas as cartas é igual\n");
    }

    //Comparando o PIB per capita das duas cartas
    if (pib_per_capita1 > pib_per_capita2) {
        resultado1++;
        printf("A carta que contém o maior PIB per capita é: Carta 1\n");

      } else if (pib_per_capita1 < pib_per_capita2) {
        resultado2++;
        printf("A carta que contém o maior PIB per capita é: Carta 2\n");

      } else {
        printf("O PIB per capita de ambas as cartas é igual\n");
    }

    //Imprimindo o resultado final
    if (resultado1 > resultado2) {
        printf("\nResultado: A carta 1 venceu!\n");
      } else if (resultado1 < resultado2){
        printf("\nResultado: A carta 2 venceu!\n");
      } else {
        printf("\nResultado: As cartas 1 e 2 empataram!\n");
    }}
  break;

  //Bloco 2: Mostra as regras do jogo:
  case 2:{
  printf("Neste jogo, o jogador deve cadastrar duas cartas de super trunfo, com o tema 'cidades'\n");
  printf("Após serem cadastradas, todos os dados aparecerão na tela\n");
  printf("Junto aos dados, uma comparação será feita automaticamente para decidir qual carta venceu em cada atributo\n");
  printf("No final, aparece uma mensagem que indica a carta que sobressaiu-se em todos os atributos comparados\n");}
  break;

  //Bloco 3: Fecha o jogo:
  default:
  break;
  }
  
  return 0;
}

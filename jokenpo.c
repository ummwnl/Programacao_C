//Incluindo uma biblioteca que possui funções para a entrada e saida de dados
//('printl' e 'scanl')
#include <stdio.h>
//Incluindo duas bibliotecas que possuem funções para fazer a geração de números aleatórios
//('srand' e 'rand')
#include <stdlib.h>
#include <time.h>

//Iniciando a função "main"
int main (){
    //Declarando a variável que vai armazenar a escolha do jogador
    short int EscolhaDoJogador;

    //Solicitando ao jogador um número entre 1 e 3
    printf("Escolha uma das opções abaixo e digite o número que corresponde ela:\n");
    printf("Pedra: 1\n");
    printf("Papel: 2\n");
    printf("Tesoura: 3\n");
    scanf("%d", &EscolhaDoJogador);

    //Imprimindo a escolha do jogador
    switch (EscolhaDoJogador) {
        case 1:
        printf("O jogador escolheu: pedra --");
        break;
    
        case 2:
        printf("O jogador escolheu: papel --");
        break;
    
        case 3:
        printf("O jogador escolheu: tesoura --");
        break;
        
        default:
        printf("Você escolheu o número %d.\nPara o jogo funcionar corretamente, escolha um número entre 1 e 3\n", EscolhaDoJogador);
        return 0;
        break;
    }

    //Declarando a variável que vai armazenar a escolha do computador
    short int EscolhaDoComputador;

    //Inicializando o gerador de números aleatórios
    srand(time(0));

    //Atribuindo um número aleatório entre 1 e 3 à variável "EscolhaDoComputador"
    EscolhaDoComputador = rand() % 3 + 1;

    //Imprimindo a escolha do computador
    switch (EscolhaDoComputador) {
        case 1:
        printf(" O computador escolheu: pedra\n");
        break;
    
        case 2:
        printf(" O computador escolheu: papel\n");
        break;
    
        case 3:
        printf(" O computador escolheu: tesoura\n");
        break;
    }

    //Imprimindo o resultado
    if 
        (EscolhaDoComputador == 1 && EscolhaDoJogador == 2
        || EscolhaDoComputador == 2 && EscolhaDoJogador == 3
        || EscolhaDoComputador == 3 && EscolhaDoJogador == 1)
        { printf("O jogador venceu!\n");}
    else if 
        (EscolhaDoJogador == EscolhaDoComputador)
        {printf("O jogo empatou!\n");} 
    else {
        printf("O Computador venceu!\n");
    }

    return 0;
}
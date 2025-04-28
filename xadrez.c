#include <stdio.h>

//Declarando variavel
int escolha;

//Essa função impede que o(a) jogador(a) escreva um número diferenete de 1, 2, 3 ou 4
void apenas_1a4(){
    while (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4)
    {
        printf("Digite um número de 1 a 4 para continuar\n");
        scanf("%d", &escolha);
    }

}

//Essa função impede que o(a) jogador(a) escreva um número diferenete de 1, 2, 3, 4, 5, 6, 7 ou 8
void apenas_1a8(){
    while (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 5 && escolha != 6 && escolha != 7 && escolha != 8)
    {
        printf("Digite um número de 1 a 8 para continuar\n");
        scanf("%d", &escolha);
    }

}

//Essa é a função principal do programa
int main(){

    //Exibindo uma informação importante
    printf("(Aviso: Digite apenas números, qualquer outro caractere quebrará o programa.)\n\n");

    //Imprimindo um menu interativo

        //Pergunta
        printf("Escolha a peça que deseja mover no tabuleiro:\n");
        //Opções
        printf("Digite 1 para selecionar a torre\n");
        printf("Digite 2 para selecionar o bispo\n");
        printf("Digite 3 para selecionar a rainha\n");
        printf("Digite 4 para selecionar o cavalo\n");
        //Entrada de dados
        scanf("%d", &escolha);

    //Limitando a entrada de dados
    apenas_1a4();
    
    //Atribuindo a escolha do jogador á variável peça
    int peca = escolha;

    //Imprimindo a escolha do(a) jogador(a)
    switch (peca){
    case 1:
    printf("\nVocê selecionou a torre\n");
    break;

    case 2:
    printf("\nVocê selecionou o bispo\n");
    break;

    case 3:
    printf("\nVocê selecionou a rainha\n");
    break;

    case 4:
    printf("\nVocê selecionou o cavalo\n");
    break;
    }

    //Imprimindo um menu interativo

        //Pergunta
        printf("Em que direção deseja mover essa peça?\n");

        //Opções (levando em consideração a peça que o(a) jogador(a) escolheu)
        switch (peca){
        case 1:
        printf("Digite 1 para se deslocar para a direita\n");
        printf("Digite 2 para se deslocar para a esquerda\n");
        printf("Digite 3 para se deslocar para cima\n");
        printf("Digite 4 para se deslocar para baixo\n");
        break;

        case 2:
        printf("Digite 1 para se deslocar na diagonal superior direita\n");
        printf("Digite 2 para se deslocar na diagonal superior esquerda\n");
        printf("Digite 3 para se deslocar na diagonal inferior direita\n");
        printf("Digite 4 para se deslocar na diagonal inferior esquerda\n");
        break;

        case 3:
        printf("Digite 1 para se deslocar para a direita\n");
        printf("Digite 2 para se deslocar para a esquerda\n");
        printf("Digite 3 para se deslocar para cima\n");
        printf("Digite 4 para se deslocar para baixo\n");
        printf("Digite 5 para se deslocar na diagonal superior direita\n");
        printf("Digite 6 para se deslocar na diagonal superior esquerda\n");
        printf("Digite 7 para se deslocar na diagonal inferior direita\n");
        printf("Digite 8 para se deslocar na diagonal inferior esquerda\n");
        break;

        case 4:
        printf("Digite 1 para se deslocar duas casas para a direita e uma para cima\n");
        printf("Digite 2 para se deslocar duas casas para a direita e uma para baixo\n");
        printf("Digite 3 para se deslocar duas casas para a esquerda e uma para cima\n");
        printf("Digite 4 para se deslocar duas casas para a esquerda e uma para baixo\n");
        printf("Digite 5 para se deslocar duas casas para cima e uma para a direita\n");
        printf("Digite 6 para se deslocar duas casas para cima e uma para a esquerda\n");
        printf("Digite 7 para se deslocar duas casas para baixo e uma para a direita\n");
        printf("Digite 8 para se deslocar duas casas para baixo e uma para a esquerda\n");
        break;
        }
        //Entrada de dados
        scanf("%d", &escolha);

    //Limitando a entrada de dados

        //Se o(a) jogador(a) escolheu a torre ou o bispo, ele(a) tem apenas 4 opções
        if (peca == 1 || peca == 2){

            if (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4){
                apenas_1a4();
            }
        }

        //Se o(a) jogador(a) escolheu a rainha ou o cavalo, ele(a) tem apenas 8 opções
        if (peca == 3 || peca == 4){

            if (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 5 && escolha != 6 && escolha != 7 && escolha != 8){
                apenas_1a8();
            }
        }

    //Declarando variaveis que permitem a movimentação da peça
    //Atribuindo o valor da escolha para as novas variáveis
    int direcao_torre = escolha;
    int direcao_bispo = escolha;
    int direcao_rainha = escolha;
    int direcao_cavalo = escolha;

    //Esse bloco será executado se o(a) jogador(a) tiver escolhido a torre
    if (peca == 1){

        //Imprimindo a escolha do(a) jogador(a)
        switch (direcao_torre){
            case 1:
            printf("\nVocê escolheu mover para a direita\n");
            break;

            case 2:
            printf("\nVocê escolheu mover para a esquerda\n");
            break;

            case 3:
            printf("\nVocê escolheu mover para cima\n");
            break;

            case 4:
            printf("\nVocê escolheu mover para baixo\n");
            break;
        }
    }

    //Esse bloco será executado se o(a) jogador(a) tiver escolhido o bispo
    if (peca == 2){

        //Imprimindo a escolha do(a) jogador(a)
        switch (direcao_bispo){
            case 1:
            printf("\nVocê escolheu mover na diagonal superior direita\n");
            break;

            case 2:
            printf("\nVocê escolheu mover na diagonal superior esquerda\n");
            break;

            case 3:
            printf("\nVocê escolheu mover na diagonal inferior direita\n");
            break;

            case 4:
            printf("\nVocê escolheu mover na diagonal inferior esquerda\n");
            break;
        }
    }
    
    //Esse bloco será executado se o(a) jogador(a) tiver escolhido a rainha
    if (peca == 3){

        //Imprimindo a escolha do(a) jogador(a)
        switch (direcao_rainha){
            case 1:
            printf("\nVocê escolheu mover para a direita\n");
            break;

            case 2:
            printf("\nVocê escolheu mover para a esquerda\n");
            break;

            case 3:
            printf("\nVocê escolheu mover para cima\n");
            break;

            case 4:
            printf("\nVocê escolheu mover para baixo\n");
            break;

            case 5:
            printf("\nVocê escolheu mover na diagonal superior direita\n");
            break;

            case 6:
            printf("\nVocê escolheu mover na diagonal superior esquerda\n");
            break;

            case 7:
            printf("\nVocê escolheu mover na diagonal inferior direita\n");
            break;

            case 8:
            printf("\nVocê escolheu mover na diagonal inferior esquerda\n");
            break;
        }
    }

    //Esse bloco será executado se o(a) jogador(a) tiver escolhido o cavalo
    if (peca == 4){

        //Imprimindo a escolha do(a) jogador(a)
        switch (direcao_cavalo){
            case 1:
            printf("\nVocê escolheu mover duas casas para a direita e uma para cima\n");
            break;

            case 2:
            printf("\nVocê escolheu mover duas casas para a direita e uma para baixo\n");
            break;

            case 3:
            printf("\nVocê escolheu mover duas casas para a esquerda e uma para cima\n");
            break;

            case 4:
            printf("\nVocê escolheu mover duas casas para a esquerda e uma para baixo\n");
            break;

            case 5:
            printf("\nVocê escolheu mover duas casas para cima e uma para a direita\n");
            break;

            case 6:
            printf("\nVocê escolheu mover duas casas para cima e uma para a esquerda\n");
            break;

            case 7:
            printf("\nVocê escolheu mover duas casas para baixo e uma para a direita\n");
            break;

            case 8:
            printf("\nVocê escolheu mover duas casas para baixo e uma para a esquerda\n");
            break;
        }
    }

    //Se o jogador escolher torre, bispo, ou rainha esse bloco de código é executado
    if (peca == 1 || peca == 2 || peca == 3){

        //Solicitando a quantidade de casas que a peça vai deslocar-se
        printf("Quantas casas?\n");
        scanf("%d", &escolha);
    }

    //Imprimindo a quantidade de casas que o jogador deseja deslocar a peça
    switch (peca){
    case 1:
    printf("Movendo a torre %d vezes....\n", escolha);
    break;

    case 2:
    printf("Movendo o bispo %d vezes....\n", escolha);
    break;

    case 3:
    printf("Movendo a rainha %d vezes....\n", escolha);
    break;

    case 4:
    printf("Movendo o cavalo 3 vezes....\n");
    break;
    }

    //Declarando uma nova variável
    //Essa variável vai receber o valor de "escolha" para limitar as repetições a seguir
    int quantidade = escolha;

    //Imprimindo a movimentação, caso o(a) jogador(a) tenha escolhido a torre
    if (peca == 1) {
        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
        {
            switch (direcao_torre)
            {
                case 1:
                printf("Direita\n");
                break;

                case 2:
                printf("Esquerda\n");
                break;

                case 3:
                printf("Cima\n");
                break;

                case 4:
                printf("Baixo\n");
                break;
            }
        }
    }

    //Imprimindo a movimentação, caso o(a) jogador(a) tenha escolhido o bispo
    if (peca == 2) {
        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
        {
            switch (direcao_bispo)
            {
                case 1:
                printf("Diagonal superior direita\n");
                break;

                case 2:
                printf("Diagonal superior esquerda\n");
                break;

                case 3:
                printf("Diagonal inferior direita\n");
                break;

                case 4:
                printf("Diagonal inferior esquerda\n");
                break;
            }
        }
    }

    //Imprimindo a movimentação, caso o(a) jogador(a) tenha escolhido a rainha
    if (peca == 3) {
        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
        {
            switch (direcao_rainha)
            {
                case 1:
                printf("Direita\n");
                break;

                case 2:
                printf("Esquerda\n");
                break;

                case 3:
                printf("Cima\n");
                break;

                case 4:
                printf("Baixo\n");
                break;

                case 5:
                printf("Diagonal superior direita\n");
                break;

                case 6:
                printf("Diagonal superior esquerda\n");
                break;

                case 7:
                printf("Diagonal inferior direita\n");
                break;

                case 8:
                printf("Diagonal inferior esquerda\n");
                break;
            }
        }
    }

    //Imprimindo a movimentação, caso o(a) jogador(a) tenha escolhido o cavalo
    if (peca == 4) {

        quantidade = 1;

        switch (direcao_cavalo) {
    
            case 1: {
                while (quantidade <= 3)
                {
                    for (quantidade; quantidade <= 2; quantidade++)
                    {
                        printf("Direita\n");
                    }

                    printf("Cima\n");

                    quantidade++;
                }
            }break;

            case 2:
            {
                while (quantidade <= 3)
                {
                    for (quantidade; quantidade <= 2; quantidade++)
                    {
                        printf("Direita\n");
                    }
    
                    printf("Baixo\n");
    
                    quantidade++;
                }
            }break;

            case 3:
            {
                while (quantidade <= 3)
                {
                    for (quantidade; quantidade <= 2; quantidade++)
                    {
                        printf("Esquerda\n");
                    }
    
                    printf("Cima\n");
    
                    quantidade++;
                }
            }break;

            case 4:
            {
                while (quantidade <= 3)
                {
                    for (quantidade; quantidade <= 2; quantidade++)
                    {
                        printf("Esquerda\n");
                    }
    
                    printf("Baixo\n");
    
                    quantidade++;
                }
            }break;

            case 5:
            {
                while (quantidade <= 3)
                {
                    for (quantidade; quantidade <= 2; quantidade++)
                    {
                        printf("Cima\n");
                    }
    
                    printf("Direita\n");
    
                    quantidade++;
                }
            }break;

            case 6:
            {
                while (quantidade <= 3)
                {
                    for (quantidade; quantidade <= 2; quantidade++)
                    {
                        printf("Cima\n");
                    }
    
                    printf("Esquerda\n");
    
                    quantidade++;
                }
            }break;

            case 7:
            {
                while (quantidade <= 3)
                {
                    for (quantidade; quantidade <= 2; quantidade++)
                    {
                        printf("Baixo\n");
                    }
    
                    printf("Direita\n");
    
                    quantidade++;
                }
            }break;

            case 8:
            {
                while (quantidade <= 3)
                {
                    for (quantidade; quantidade <= 2; quantidade++)
                    {
                        printf("baixo\n");
                    }
    
                    printf("Esquerda\n");
    
                    quantidade++;
                }
            }break;
        }
    }

    return 0;
}

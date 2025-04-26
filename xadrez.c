#include <stdio.h>

int main()
{
    //Exibindo uma informação importante ao jogador
    printf("(Aviso: Digite apenas números, qualquer outro caractere quebrará o programa.)\n\n");

    //Imprimindo um menu interativo
    int escolha;
    printf("Escolha a peça que deseja mover no tabuleiro:\n");
    printf("Digite 1 para selecionar a torre\n");
    printf("Digite 2 para selecionar o bispo\n");
    printf("Digite 3 para selecionar a rainha\n");
    printf("Digite 4 para selecionar o cavalo\n");
    scanf("%d", &escolha);

    //Impedindo que o jogador escreva um número diferente dos números apresentados anteriormente
    while (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4)
    {
        printf("Digite um número de 1 a 4 para continuar\n");
        scanf("%d", &escolha);
    }

    //Esse bloco de código inicia a etapa de movimentação a dependendo da peça que o usuário selecionou
    switch (escolha)
    {
        //Se o jogador escolheu a torre, esse bloco de código será executado
        case 1:
        {
            //Exibindo uma informação referente a escolha do jogador
            printf("\nVocê selecionou a torre\n");

            //Imprimindo um menu interativo
            printf("Em que direção deseja mover essa peça?\n");
            printf("Digite 1 para se deslocar para cima\n");
            printf("Digite 2 para se deslocar para a direita\n");
            printf("Digite 3 para se deslocar para a esquerda\n");
            printf("Digite 4 para se deslocar para baixo\n");
            scanf("%d", &escolha);

            //Impedindo que o jogador escreva um número diferente dos números apresentados anteriormente
            while (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4)
            {
                printf("Digite um número de 1 a 4 para continuar\n");
                scanf("%d", &escolha);
            }

            //Esse bloco de código inicia a etapa de movimentação a dependendo da direção que o usuário selecionou
            switch (escolha)
            {
                //Se o jogador escolheu mover para cima, esse bloco de código será executado
                case 1:
                {
                    //Exibindo uma informação referente a escolha do jogador
                    printf("\nVocê escolheu mover para cima.\n");

                    //Solicitando a quantidade de casas que o jogador deseja deslocar a peça
                    printf("Quantas casas?\n");
                    scanf("%d", &escolha);

                    //Exibindo a quantidade de casas que o jogador deseja deslocar a peça
                    printf("Movendo a torre %d vezes....\n", escolha);

                    //Movimentando a peça
                    int quantidade = escolha;
                    for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                    {
                        printf("Cima\n");
                    }
                }break;
                //Se o jogador escolheu mover para a direita, esse bloco de código será executado
                case 2:
                {
                    //Exibindo uma informação referente a escolha do jogador
                    printf("\nVocê escolheu mover para a direita.\n");

                    //Solicitando a quantidade de casas que o jogador deseja deslocar a peça
                    printf("Quantas casas?\n");
                    scanf("%d", &escolha);

                    //Exibindo a quantidade de casas que o jogador deseja deslocar a peça
                    printf("Movendo a torre %d vezes....\n", escolha);

                    //Movimentando a peça
                    int quantidade = escolha;
                    for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                    {
                        printf("Direita\n");
                    }
                }break;
                //Se o jogador escolheu mover para a esquerda, esse bloco de código será executado
                case 3:
                {
                    //Exibindo uma informação referente a escolha do jogador
                    printf("\nVocê escolheu mover para a esquerda.\n");

                    //Solicitando a quantidade de casas que o jogador deseja deslocar a peça
                    printf("Quantas casas?\n");
                    scanf("%d", &escolha);

                    //Exibindo a quantidade de casas que o jogador deseja deslocar a peça
                    printf("Movendo a torre %d vezes....\n", escolha);

                    //Movimentando a peça
                    int quantidade = escolha;
                    for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                    {
                        printf("Esquerda\n");
                    }
                }break;
                //Se o jogador escolheu mover para baixo, esse bloco de código será executado
                case 4:
                {
                    //Exibindo uma informação referente a escolha do jogador
                    printf("\nVocê escolheu mover para baixo.\n");
                    
                    //Solicitando a quantidade de casas que o jogador deseja deslocar a peça
                    printf("Quantas casas?\n");
                    scanf("%d", &escolha);

                    //Exibindo a quantidade de casas que o jogador deseja deslocar a peça
                    printf("Movendo a torre %d vezes....\n", escolha);

                    //Movimentando a peça
                    int quantidade = escolha;
                    for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                    {
                        printf("Baixo\n");
                    }
                }break;
            } 
        }break;
         //Se o jogador escolheu o bispo, esse bloco de código será executado
        case 2:
        {

            printf("\nVocê selecionou o bispo\n");
            printf("Em que direção deseja mover essa peça?\n");
            printf("Digite 1 para se deslocar para a diagonal superior direita\n");
            printf("Digite 2 para se deslocar para a diagonal superior esquerda\n");
            printf("Digite 3 para se deslocar para a diagonal inferior direita\n");
            printf("Digite 4 para se deslocar para a diagonal inferior esquerda\n");
            scanf("%d", &escolha);

            while (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4)
            {
                printf("Digite um número de 1 a 4 para continuar\n");
                scanf("%d", &escolha);
            }

            switch (escolha)
            {
                case 1:
                {
                    printf("\nVocê escolheu mover a diagonal superior direita.\n");
                    printf("Quantas casas?\n");
                    scanf("%d", &escolha);

                    printf("Movendo o bispo %d vezes....\n", escolha);

                    int quantidade = escolha;
                    for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                    {
                        printf("Diagonal superior direita\n");
                    }
                }break;

                case 2:
                {
                    printf("\nVocê escolheu mover para a diagonal superior esquerda.\n");
                    printf("Quantas casas?\n");
                    scanf("%d", &escolha);

                    printf("Movendo o bispo %d vezes....\n", escolha);

                    int quantidade = escolha;
                    for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                    {
                        printf("Diagonal superior esquerda\n");
                    }
                }break;

                case 3:
                {
                    printf("\nVocê escolheu mover para a diagonal inferior direita.\n");
                    printf("Quantas casas?\n");
                    scanf("%d", &escolha);

                    printf("Movendo o bispo %d vezes....\n", escolha);

                    int quantidade = escolha;
                    for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                    {
                        printf("Diagonal inferior direita\n");
                    }
                }break;

                case 4:
                {
                    printf("\nVocê escolheu mover para a diagonal inferior esquerda.\n");
                    printf("Quantas casas?\n");
                    scanf("%d", &escolha);

                    printf("Movendo o bispo %d vezes....\n", escolha);

                    int quantidade = escolha;
                    for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                    {
                        printf("Diagonal inferior esquerda\n");
                    }
                }break;
            } 
        }break;
         //Se o jogador escolheu a rainha, esse bloco de código será executado
        case 3:
        {
            printf("\nVocê selecionou a rainha\n");
            printf("Em que direção deseja mover essa peça?\n");
            printf("Digite 1 para se deslocar para cima\n");
            printf("Digite 2 para se deslocar para a direita\n");
            printf("Digite 3 para se deslocar para a esquerda\n");
            printf("Digite 4 para se deslocar para baixo\n");
            printf("Digite 5 para se deslocar para a diagonal superior direita\n");
            printf("Digite 6 para se deslocar para a diagonal superior esquerda\n");
            printf("Digite 7 para se deslocar para a diagonal inferior direita\n");
            printf("Digite 8 para se deslocar para a diagonal inferior esquerda\n");
            scanf("%d", &escolha);

            while (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 5 && escolha != 6 && escolha != 7 && escolha != 8)
            {
                printf("Digite um número de 1 a 8 para continuar\n");
                scanf("%d", &escolha);
            }

            switch (escolha)
            {
                case 1:
                {
                    printf("\nVocê escolheu mover para cima.\n");
                    printf("Quantas casas?\n");
                    scanf("%d", &escolha);

                    printf("Movendo a rainha %d vezes....\n", escolha);

                    int quantidade = escolha;
                    for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                    {
                        printf("Cima\n");
                    }
                }break;

                case 2:
                {
                    printf("\nVocê escolheu mover para a direita.\n");
                    printf("Quantas casas?\n");
                    scanf("%d", &escolha);

                    printf("Movendo a rainha %d vezes....\n", escolha);

                    int quantidade = escolha;
                    for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                    {
                        printf("Direita\n");
                    }
                }break;

                case 3:
                {
                    printf("\nVocê escolheu mover para a esquerda.\n");
                    printf("Quantas casas?\n");
                    scanf("%d", &escolha);

                    printf("Movendo a rainha %d vezes....\n", escolha);

                    int quantidade = escolha;
                    for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                    {
                        printf("Esquerda\n");
                    }
                }break;

                case 4:
                {
                    printf("\nVocê escolheu mover para baixo.\n");
                    printf("Quantas casas?\n");
                    scanf("%d", &escolha);

                    printf("Movendo a rainha %d vezes....\n", escolha);

                    int quantidade = escolha;
                    for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                    {
                        printf("Baixo\n");
                    }
                }break;

                case 5:
                {
                    printf("\nVocê escolheu mover a diagonal superior direita.\n");
                    printf("Quantas casas?\n");
                    scanf("%d", &escolha);

                    printf("Movendo a rainha %d vezes....\n", escolha);

                    int quantidade = escolha;
                    for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                    {
                        printf("Diagonal superior direita\n");
                    }
                }break;

                case 6:
                {
                    printf("\nVocê escolheu mover para a diagonal superior esquerda.\n");
                    printf("Quantas casas?\n");
                    scanf("%d", &escolha);

                    printf("Movendo a rainha %d vezes....\n", escolha);

                    int quantidade = escolha;
                    for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                    {
                        printf("Diagonal superior esquerda\n");
                    }
                }break;

                case 7:
                {
                    printf("\nVocê escolheu mover para a diagonal inferior direita.\n");
                    printf("Quantas casas?\n");
                    scanf("%d", &escolha);

                    printf("Movendo a rainha %d vezes....\n", escolha);

                    int quantidade = escolha;
                    for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                    {
                        printf("Diagonal inferior direita\n");
                    }
                }break;

                case 8:
                {
                    printf("\nVocê escolheu mover para a diagonal inferior esquerda.\n");
                    printf("Quantas casas?\n");
                    scanf("%d", &escolha);

                    printf("Movendo a rainha %d vezes....\n", escolha);

                    int quantidade = escolha;
                    for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                    {
                        printf("Diagonal inferior esquerda\n");
                    }
                }break;
            } 
        }break;
         //Se o jogador escolheu o cavalo, esse bloco de código será executado
        case 4:
        {
            printf("\nVocê selecionou o cavalo\n");
            printf("Em que direção deseja mover essa peça?\n");
            printf("Digite 1 para se deslocar duas casas para cima e uma para a direita\n");
            printf("Digite 2 para se deslocar duas casas para cima e uma para a esquerda\n");
            printf("Digite 3 para se deslocar duas casas para a direita e uma para cima\n");
            printf("Digite 4 para se deslocar duas casas para a direita e uma para baixo\n");
            printf("Digite 5 para se deslocar duas casas para a esquerda e uma para cima\n");
            printf("Digite 6 para se deslocar duas casas para a esquerda e uma para baixo\n");
            printf("Digite 7 para se deslocar duas casas para baixo e uma para a direita\n");
            printf("Digite 8 para se deslocar duas casas para baixo e uma para a esquerda\n");
            scanf("%d", &escolha);

            while (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 5 && escolha != 6 && escolha != 7 && escolha != 8)
            {
                printf("Digite um número de 1 a 8 para continuar\n");
                scanf("%d", &escolha);
            }

            switch (escolha)
            {
                case 1:
                {
                    printf("\nVocê escolheu mover duas casas para cima e uma para a direita.\n");
                    printf("Movendo o cavalo 3 vezes...\n");

                    int quantidade = 1;

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

                case 2:
                {
                    printf("\nVocê escolheu mover duas casas para cima e uma para a esquerda.\n");
                    printf("Movendo o cavalo 3 vezes...\n");

                    int quantidade = 1;

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

                case 3:
                {
                    printf("\nVocê escolheu mover duas casas para a direita e uma para cima.\n");
                    printf("Movendo o cavalo 3 vezes...\n");

                    int quantidade = 1;

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

                case 4:
                {
                    printf("\nVocê escolheu mover duas casas para a direita e uma para baixo.\n");
                    printf("Movendo o cavalo 3 vezes...\n");

                    int quantidade = 1;

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

                case 5:
                {
                    printf("\nVocê escolheu mover duas casas para a esquerda e uma para cima.\n");
                    printf("Movendo o cavalo 3 vezes...\n");

                    int quantidade = 1;

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

                case 6:
                {
                    printf("\nVocê escolheu mover duas casas para a esquerda e uma para baixo.\n");
                    printf("Movendo o cavalo 3 vezes...\n");

                    int quantidade = 1;

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

                case 7:
                {
                    printf("\nVocê escolheu mover duas casas para baixo e uma para a direita.\n");
                    printf("Movendo o cavalo 3 vezes...\n");

                    int quantidade = 1;

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
                    printf("\nVocê escolheu mover duas casas para baixo e uma para a esquerda.\n");
                    printf("Movendo o cavalo 3 vezes...\n");

                    int quantidade = 1;

                    while (quantidade <= 3)
                    {
                        for (quantidade; quantidade <= 2; quantidade++)
                        {
                            printf("Baixo\n");
                        }

                        printf("Esquerda\n");

                        quantidade++;
                    }
                }break;
            } 
        }break;
    }

    return 0;
}
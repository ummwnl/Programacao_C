#include <stdio.h>

int main()
{
    int escolha;

    printf("Escolha a peça que deseja mover no tabuleiro:\n");
    printf("Digite 1 para selecionar a torre\n");
    printf("Digite 2 para selecionar o bispo\n");
    printf("Digite 3 para selecionar a rainha\n");
    scanf("%d", &escolha);

    while (escolha != 1 && escolha != 2 && escolha != 3)
    {
        printf("Escolha o número de 1 a 4 para continuar\n");
        scanf("%d", &escolha);
    }

    switch (escolha)
    {
        case 1:
        {
                printf("\nVocê selecionou a torre\n");
                printf("Em que direção deseja mover essa peça?\n");
                printf("Digite 1 para se deslocar para frente\n");
                printf("Digite 2 para se deslocar para a direita\n");
                printf("Digite 3 para se deslocar para a esquerda\n");
                printf("Digite 4 para se deslocar para trás\n");
                scanf("%d", &escolha);

                while (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4)
                {
                    printf("Escolha o número de 1 a 4 para continuar\n");
                    scanf("%d", &escolha);
                }

                switch (escolha)
                {
                    case 1:
                    {
                        printf("\nVocê escolheu mover para frente.\n");
                        printf("Quantas casas?\n");
                        scanf("%d", &escolha);

                        printf("Movendo a torre para frente %d vezes....\n", escolha);

                        int quantidade = escolha;
                        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                        {
                            printf("Torre mundou de posição\n");
                        }
                    }
                    break;

                    case 2:
                    {
                        printf("\nVocê escolheu mover para a direita.\n");
                        printf("Quantas casas?\n");
                        scanf("%d", &escolha);

                        printf("Movendo a torre para a direita %d vezes....\n", escolha);

                        int quantidade = escolha;
                        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                        {
                            printf("Torre mundou de posição\n");
                        }
                    }
                    break;

                    case 3:
                    {
                        printf("\nVocê escolheu mover para a esquerda.\n");
                        printf("Quantas casas?\n");
                        scanf("%d", &escolha);

                        printf("Movendo a torre para a esquerda %d vezes....\n", escolha);

                        int quantidade = escolha;
                        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                        {
                            printf("Torre mundou de posição\n");
                        }
                    }
                    break;

                    case 4:
                    {
                        printf("\nVocê escolheu mover para trás.\n");
                        printf("Quantas casas?\n");
                        scanf("%d", &escolha);

                        printf("Movendo a torre para trás %d vezes....\n", escolha);

                        int quantidade = escolha;
                        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                        {
                            printf("Torre mundou de posição\n");
                        }
                    }
                    break;
                } 
        }break;
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
                    printf("Escolha o número de 1 a 4 para continuar\n");
                    scanf("%d", &escolha);
                }

                switch (escolha)
                {
                    case 1:
                    {
                        printf("\nVocê escolheu mover a diagonal superior direita.\n");
                        printf("Quantas casas?\n");
                        scanf("%d", &escolha);

                        printf("Movendo o bispo para a diagonal superior direita %d vezes....\n", escolha);

                        int quantidade = escolha;
                        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                        {
                            printf("Bispo mundou de posição\n");
                        }
                    }
                    break;

                    case 2:
                    {
                        printf("\nVocê escolheu mover para a diagonal superior esquerda.\n");
                        printf("Quantas casas?\n");
                        scanf("%d", &escolha);

                        printf("Movendo o bispo para a diagonal superior esquerda %d vezes....\n", escolha);

                        int quantidade = escolha;
                        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                        {
                            printf("Bispo mundou de posição\n");
                        }
                    }
                    break;

                    case 3:
                    {
                        printf("\nVocê escolheu mover para a diagonal inferior direita.\n");
                        printf("Quantas casas?\n");
                        scanf("%d", &escolha);

                        printf("Movendo o bispo para a diagonal inferior direita %d vezes....\n", escolha);

                        int quantidade = escolha;
                        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                        {
                            printf("Bispo mundou de posição\n");
                        }
                    }
                    break;

                    case 4:
                    {
                        printf("\nVocê escolheu mover para a diagonal inferior esquerda.\n");
                        printf("Quantas casas?\n");
                        scanf("%d", &escolha);

                        printf("Movendo o bispo para a diagonal inferior esquerda %d vezes....\n", escolha);

                        int quantidade = escolha;
                        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                        {
                            printf("Bispo mundou de posição\n");
                        }
                    }
                    break;
                } 
        }break;
        case 3:
        {
                printf("\nVocê selecionou a rainha\n");
                printf("Em que direção deseja mover essa peça?\n");
                printf("Digite 1 para se deslocar para frente\n");
                printf("Digite 2 para se deslocar para a direita\n");
                printf("Digite 3 para se deslocar para a esquerda\n");
                printf("Digite 4 para se deslocar para trás\n");
                printf("Digite 5 para se deslocar para a diagonal superior direita\n");
                printf("Digite 6 para se deslocar para a diagonal superior esquerda\n");
                printf("Digite 7 para se deslocar para a diagonal inferior direita\n");
                printf("Digite 8 para se deslocar para a diagonal inferior esquerda\n");
                scanf("%d", &escolha);

                while (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 5 && escolha != 6 && escolha != 7 && escolha != 8)
                {
                    printf("Escolha o número de 1 a 8 para continuar\n");
                    scanf("%d", &escolha);
                }

                switch (escolha)
                {
                    case 1:
                    {
                        printf("\nVocê escolheu mover para frente.\n");
                        printf("Quantas casas?\n");
                        scanf("%d", &escolha);

                        printf("Movendo a rainha para frente %d vezes....\n", escolha);

                        int quantidade = escolha;
                        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                        {
                            printf("Rainha mundou de posição\n");
                        }
                    }
                    break;

                    case 2:
                    {
                        printf("\nVocê escolheu mover para a direita.\n");
                        printf("Quantas casas?\n");
                        scanf("%d", &escolha);

                        printf("Movendo a rainha para a direita %d vezes....\n", escolha);

                        int quantidade = escolha;
                        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                        {
                            printf("Rainha mundou de posição\n");
                        }
                    }
                    break;

                    case 3:
                    {
                        printf("\nVocê escolheu mover para a esquerda.\n");
                        printf("Quantas casas?\n");
                        scanf("%d", &escolha);

                        printf("Movendo a rainha para a esquerda %d vezes....\n", escolha);

                        int quantidade = escolha;
                        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                        {
                            printf("Rainha mundou de posição\n");
                        }
                    }
                    break;

                    case 4:
                    {
                        printf("\nVocê escolheu mover para trás.\n");
                        printf("Quantas casas?\n");
                        scanf("%d", &escolha);

                        printf("Movendo a rainha para trás %d vezes....\n", escolha);

                        int quantidade = escolha;
                        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                        {
                            printf("Rainha mundou de posição\n");
                        }
                    }
                    break;

                    case 5:
                    {
                        printf("\nVocê escolheu mover a diagonal superior direita.\n");
                        printf("Quantas casas?\n");
                        scanf("%d", &escolha);

                        printf("Movendo a rainha para a diagonal superior direita %d vezes....\n", escolha);

                        int quantidade = escolha;
                        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                        {
                            printf("Rainha mundou de posição\n");
                        }
                    }
                    break;

                    case 6:
                    {
                        printf("\nVocê escolheu mover para a diagonal superior esquerda.\n");
                        printf("Quantas casas?\n");
                        scanf("%d", &escolha);

                        printf("Movendo a rainha para a diagonal superior esquerda %d vezes....\n", escolha);

                        int quantidade = escolha;
                        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                        {
                            printf("Rainha mundou de posição\n");
                        }
                    }
                    break;

                    case 7:
                    {
                        printf("\nVocê escolheu mover para a diagonal inferior direita.\n");
                        printf("Quantas casas?\n");
                        scanf("%d", &escolha);

                        printf("Movendo a rainha para a diagonal inferior direita %d vezes....\n", escolha);

                        int quantidade = escolha;
                        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                        {
                            printf("Rainha mundou de posição\n");
                        }
                    }
                    break;

                    case 8:
                    {
                        printf("\nVocê escolheu mover para a diagonal inferior esquerda.\n");
                        printf("Quantas casas?\n");
                        scanf("%d", &escolha);

                        printf("Movendo a rainha para a diagonal inferior esquerda %d vezes....\n", escolha);

                        int quantidade = escolha;
                        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
                        {
                            printf("Rainha mundou de posição\n");
                        }
                    }
                    break;
                } 
        }break;
    }

    return 0;
}
#include <stdio.h>

//Declarando variaveis
int escolha;

//Impedindo que o jogador escreva um número diferente dos números apresentados anteriormente
void menu()
{
    while (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4)
    {
        printf("Digite um número de 1 a 4 para continuar\n");
        scanf("%d", &escolha);
    }
}

int main()
{
    //Exibindo uma informação importante ao jogador
    printf("(Aviso: Digite apenas números, qualquer outro caractere quebrará o programa.)\n\n");

    //Imprimindo um menu interativo
    printf("Escolha a peça que deseja mover no tabuleiro:\n");
    printf("Digite 1 para selecionar a torre\n");
    printf("Digite 2 para selecionar o bispo\n");
    printf("Digite 3 para selecionar a rainha\n");
    printf("Digite 4 para selecionar o cavalo\n");
    scanf("%d", &escolha);
    
    menu();
    
    int peca = escolha;

    switch (peca)
    {
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

    printf("Em que direção deseja mover essa peça?\n");

    switch (peca)
    {
    case 1:
    printf("Digite 1 para se deslocar para a direita\n");
    printf("Digite 2 para se deslocar para a esquerda\n");
    printf("Digite 3 para se deslocar para cima\n");
    printf("Digite 4 para se deslocar para baixo\n");
    break;

    case 2:
    printf("Digite 5 para se deslocar na diagonal superior direita\n");
    printf("Digite 6 para se deslocar na diagonal superior esquerda\n");
    printf("Digite 7 para se deslocar na diagonal inferior direita\n");
    printf("Digite 8 para se deslocar na diagonal inferior esquerda\n");
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
    
    scanf("%d", &escolha);

    int direcao, direcao_cavalo = escolha;

    if (peca == 1 || peca == 2 || peca == 3)
    {
    //Solicitando a quantidade de casas que o jogador deseja deslocar a peça
    printf("Quantas casas?\n");
    scanf("%d", &escolha);
    }

    int quantidade = escolha;

    switch (peca)
    {
    case 1:
    //Exibindo a quantidade de casas que o jogador deseja deslocar a peça
    printf("Movendo a torre %d vezes....\n", quantidade);
    break;

    case 2:
    //Exibindo a quantidade de casas que o jogador deseja deslocar a peça
    printf("Movendo o bispo %d vezes....\n", quantidade);
    break;

    case 3:
    //Exibindo a quantidade de casas que o jogador deseja deslocar a peça
    printf("Movendo a rainha %d vezes....\n", quantidade);
    break;

    case 4:
    //Exibindo a quantidade de casas que o jogador deseja deslocar a peça
    printf("Movendo o cavalo 3 vezes....\n");
    break;
    }

    if (peca == 1 || peca == 2 || peca == 3) {
        for (escolha; escolha <= quantidade && escolha != 0; escolha--)
        {
            switch (direcao)
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

                case 6:s
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
    } else if (peca == 4) {
        switch (direcao_cavalo)
        {
            case 1:
            {
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
                    printf("Baixo\n");
                }

                printf("Esquerda\n");

                quantidade++;
            }
            }break;
        }
    }

    return 0;
}

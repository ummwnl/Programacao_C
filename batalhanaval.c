#include <stdio.h>

//Essas constantes determinam o tamanho do tabuleiro
#define COLUNA 9
#define LINHA 9

//Essas variáveis serão usadas nas funções "main()" e "TABULEIRO()"
    //A variável "tabuleiro" recebe uma matriz
    int tabuleiro[LINHA][COLUNA] = {0};

    //As variáveis "x" e "y", controlam todas as estruturas de repetição ultilizadas na matriz
    int x, y;

//Essa função foi criada para não ter que copiar e colar o mesmo codigo várias vezes na função "main()"
void TABULEIRO(){

    //Essas variáveis servem de guia para compreender as coordenadas do tabuleiro
        //A variável "cabecalho_numeros" ajuda a identificar as linhas no tabuleiro 
        int cabecalho_numeros[LINHA] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        //A variável "cabecalho_letras" ajuda a identificar as colunas no tabuleiro 
        char cabecalho_letras[COLUNA] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};

    //Imprimindo o título do tabuleiro
    printf("  --BATALHA NAVAL--\n ");

    //Imprimindo as letras do cabecalho
    for(y = 0; y < COLUNA; y++){
        printf(" %c", cabecalho_letras[y]);
    }
    
    //Imprimindo os números do cabecalho e o tabuleiro
    for (x = 0; x < LINHA; x++){
        printf("\n%d ", cabecalho_numeros[x]);
        for (y = 0; y < COLUNA; y++){
            printf("%d ", tabuleiro[x][y]);
        }
    }

    //Imprimindo duas quebras de linha para facilitar a visualização dos resultados
    printf("\n\n");
}

int main(){
    //Mostrando o tabuleiro vazio
    TABULEIRO();

    //Esse menu interativo serve para mostrar os resultados de maneira organizada

        //A variável "escolha" receberá o valor que será usado para imprimir um novo tabuleiro
        int escolha;

        //Imprimindo sugestões de alteração
        printf("Digite 1 para posicionar navios pequenos nos cantos do tabuleiro\n");
        printf("Digite 2 para posicionar navios grandes em casas diagonais, verticais e horizontais\n");
        printf("Digite 3 para usar o superpoder que cria um x no centro do tabuleiro\n");
        printf("Digite qualquer coisa para sair do programa\n");

        //Solicitando uma entre as opções requisitadas 
        scanf("%d", &escolha);

        switch (escolha)
        {
            case 1:
                //Posicionando os navios nos cantos do tabuleiro
                tabuleiro[0][0] = 3;
                tabuleiro[8][8] = 3;
                tabuleiro[8][0] = 3;
                tabuleiro[0][8] = 3;
                TABULEIRO();
            break;
    
            case 2:
                //Posicionando um navio na horizontal
                tabuleiro[1][1] = 3;
                tabuleiro[1][2] = 3;

                //Posicionando um navio na vertical
                tabuleiro[7][7] = 3;
                tabuleiro[6][7] = 3;

                //Posicionando um navio na diagonal
                tabuleiro[3][4] = 3;
                tabuleiro[4][3] = 3;
                TABULEIRO();
            break;

            case 3:
                //Colocando um 'X' no centro do tabuleiro
                for (x = 0, y = COLUNA -1; x <= LINHA && y >= 0; x++, y--){
                    tabuleiro[x][x] = 4;
                    tabuleiro[x][y] = 4;
                }
            TABULEIRO();
            break;
    
            default:
                //Imprimindo uma mensagem que mostra o encerramento do programa
                printf("Saindo...\n");
            break;
        }

    return 0;
}
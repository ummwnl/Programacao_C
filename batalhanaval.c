#include <stdio.h>

#define COLUNA 9
#define LINHA 9

int tabuleiro[LINHA][COLUNA] = {0};
int x, y;

void TABULEIRO(){
    int cabecalho_linha[LINHA] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    char cabecalho_coluna[COLUNA] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};

    printf("  --BATALHA NAVAL--\n ");

    for(y = 0; y < COLUNA; y++){
        printf(" %c", cabecalho_coluna[y]);
    }

    for (x = 0; x < LINHA; x++){
        printf("\n%d ", cabecalho_linha[x]);
        for (y = 0; y < COLUNA; y++){
            printf("%d ", tabuleiro[x][y]);
        }
    }

    printf("\n\n");
}

int main(){
    int escolha = 0;

    TABULEIRO();

    printf("Digite 1 para pintar as bordas\n");
    printf("Digite 2 para pintar duas casas diagonais, verticais e horizontais\n");
    printf("Digite 3 para pintar um x no centro\n");
    printf("Digite qualquer coisa para sair do programa\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
        case 1:
            tabuleiro[0][0] = 3;
            tabuleiro[8][8] = 3;
            tabuleiro[8][0] = 3;
            tabuleiro[0][8] = 3;

            TABULEIRO();
        break;

        case 2:
            tabuleiro[1][1] = 3;
            tabuleiro[1][2] = 3;

            tabuleiro[7][7] = 3;
            tabuleiro[6][7] = 3;

            tabuleiro[3][4] = 3;
            tabuleiro[4][3] = 3;

            TABULEIRO();
        break;

        case 3:
            for (x = 0, y = COLUNA -1; x <= LINHA && y >= 0; x++, y--){
                tabuleiro[x][x] = 3;
                tabuleiro[x][y] = 3;
            }
        
        TABULEIRO();
        break;
        
        default:
            printf("Saindo...\n");
        break;
    }
   
    return 0;
}
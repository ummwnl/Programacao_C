#include <stdio.h>

#define COLUNA 10
#define LINHA 10

int main(){
    int cabecalho_linha[LINHA] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char cabecalho_coluna[COLUNA] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[LINHA][COLUNA] = {0};

    tabuleiro[0][1] = 3;
    tabuleiro[0][2] = 3;

    tabuleiro[7][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[5][7] = 3;

    tabuleiro[3][4] = 3;
    tabuleiro[4][3] = 3;

    int i, j;

    for (i = 0, j = 10; i < 10 && j > 0; i++, j--){
        tabuleiro[i][i] = 3;
        tabuleiro[j][i] = 3;
    }

    printf("  --BATALHA NAVAL--\n");

    printf(" ");

    int x, y;

    for(y = 0; y < 10; y++){
        printf(" %c", cabecalho_coluna[y]);
    }

    for (x = 0; x < 10; x++){
        printf("\n%d ", cabecalho_linha[x]);
        for (y = 0; y < 10; y++){
            printf("%d ", tabuleiro[x][y]);
            }
    }
    

    return 0;
}
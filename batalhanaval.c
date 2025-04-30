#include <stdio.h>

int main(){
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0};

    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;

    tabuleiro[5][7] = 3;
    tabuleiro[4][7] = 3;

    printf("Tabuleiro Batalha Naval\n");

    printf(" ");

    int x, y;

    for(int i = 0; i < 10; i++){
        printf(" %c", coluna[i]);
    }
    for (x = 0; x < 10; x++){
        printf("\n%d %d ", linha[x], tabuleiro[x][y]);
        for (y = 0; y < 9; y++){
            printf("%d ", tabuleiro[x][y]);
            }
    }

    return 0;
}
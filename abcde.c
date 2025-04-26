#include <stdio.h>

int main (){

    for (int i = 1; i <= 5; i++)
    {
        char letra = 'A';

        for (int j = 1; j <= i; j++)
        {
            printf("%c ", letra);
            ++letra;
        }
        printf("\n");
    }

    return 0;
}
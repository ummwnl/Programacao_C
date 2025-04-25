#include <stdio.h>

int main(){
    int numero;
    printf("\nDigite um número para ver a tabuada dele\n");
    scanf("%d", &numero);

    for (int outronumero = 1; outronumero <= 10; outronumero++) {
        printf("%d x %d = %d \n", numero, outronumero, numero * outronumero);
    }
}
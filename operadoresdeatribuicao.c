#include <stdio.h>

int main (){
    ////Declarando e atribuindo um valor às variáveis
    int x = 30, y = 100;

    //Imprimindo os valores
    printf("x = %d \n", x);
    printf("Y = %d \n", y);

    //Atribuindo uma soma
    //(Equivalente a "x = x + 20")
    x += 20;
    printf("x + 20 = %d \n", x);

    //Atribuindo uma subtração
    //(Equivalente a "x = x - 10")
    x -= 10;
    printf("x - 10 = %d \n", x);

    //Atribuindo uma multiplicação
    //(Equivalente a "x = x * 5")
    x *= 10;
    printf("x * 5 = %d \n", x);

    //Atribuindo uma divisão
    //(Equivalente a "x = x / 2")
    x /= 2;
    printf("x / 2 = %d \n", x);

    //Atribuindo uma subtração entre variáveis
    //(Equivalente a "x = x - y")
    x -= y;
    printf("x - y = %d \n", x);

    return 0;
}
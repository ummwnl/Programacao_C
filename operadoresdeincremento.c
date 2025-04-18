    #include <stdio.h>

int main (){
    //Declarando e atribuindo um valor à variável
    int variavel = 1;
    printf("Valor inicial da variável: %d \n",variavel);

    //Atribuindo um incremento
    //(Equivalente a "variavel = variavel +1" ou "variavel += 1")
    variavel++;
    printf("Valor da variável depois do incremento: %d \n",variavel);

    //Atribuindo um decremento
    //(Equivalente a "variavel = variavel -1" ou "variavel -= 1")
    variavel--;
    printf("Valor da variável depois do decremento: %d \n",variavel);

printf("-----------------------------------\n");

    //Declarando e atribuindo um valor à outra variável
    int outravariavel = 2;

    //Mostrando os valores atuais das variáveis
    printf("Variável: %d \nOutra variável: %d\n\n", variavel, outravariavel);

    //Atribuindo uma pré incrementação
    //(Uma variável recebe outra variável já incrementada, fazendo com que as duas fiquem com o mesmo valor)
    //(Equivalente a "outravariavel++; variavel = outravariavel;")
    variavel = ++outravariavel;
    printf("Resultado da pré incrementação:\nVariável: %d \nOutra variável: %d\n", variavel, outravariavel);

    //Decrementando os valores para fazer a pós incrementação
    variavel--;
    outravariavel--;

    //Atribuindo uma pós incrementação
    //(Uma variável recebe outra variável e depois a incrementa, fazendo com que as duas tenham valores diferentes)
    //(Equivalente a "variavel = outravariavel; outravariavel++;")
    variavel = outravariavel++;
    printf("Resultado da pós incrementação:\nVariável: %d \nOutra variável: %d\n", variavel, outravariavel);

    return 0;

}
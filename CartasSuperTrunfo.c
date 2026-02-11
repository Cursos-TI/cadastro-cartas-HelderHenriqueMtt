#include <stdio.h>

// Desafio Super Trunfo - Países

int main(){

// Área para definição das variáveis para armazenar as propriedades das cidades

    char letra;
    char letra2;
    char codigo[3];
    char codigo2[3];
    char cidade[50];
    char cidade2[50];
    int populacao;
    int populacao2;
    float area;
    float area2;
    float pib;
    float pib2;
    int turismo;
    int turismo2;

 // Área para entrada de dados carta 1

    printf("Bem vindo(a) ao jogo Super Trunfo \nVamos criar a Carta 1: \n");

    printf("Escolha uma letra de A a H, que sera o seu estado? \n");
    scanf("%c", &letra);

    printf("Defina um numero de 01 a 04? \n");
    scanf("%s", &codigo);

    printf("Qual é a sua Cidade? \n");
    scanf("%s", &cidade);

    printf("Qual é o seu numero de Populacao? \n");
    scanf("%i", &populacao);

    printf("Qual é o tamanho da sua Area? \n");
    scanf("%f", &area);

    printf("Qual é o seu PIB? \n");
    scanf("%f", &pib);

    printf("Qual é o numero de postos Turisticos? \n");
    scanf("%d", &turismo);

    //Area de entrada de dados da carta 2

    printf("Muito bem!!! \nAgora vamos fazer a Carta 2: \n");

    printf("Escolha uma letra de A a H, que sera o seu segundo estado? \n");
    scanf("%c", letra2);

    printf("Defina um numero de 01 a 04? \n");
    scanf("%s", &codigo2);

    printf("Qual é a sua Cidade? \n");
    scanf("%s", &cidade2);

    printf("Qual é o seu numero de Populacao? \n");
    scanf("%i", &populacao2);

    printf("Qual é o tamanho da sua Area? \n");
    scanf("%f", &area2);

    printf("Qual é o seu PIB? \n");
    scanf("%f", &pib2);
    
    printf("Qual é o numero de postos Turisticos? \n");
    scanf("%d", &turismo2);

// Área para exibição dos dados da cidade

    printf("PARABENS!!!\nCarta 1: \n");
    printf("Estado: %c \n", letra);
    printf("Codigo: %c%s \n", letra, codigo);
    printf("Cidade: %s \n", cidade);
    printf("Populacao: %i \n", populacao);
    printf("Area: %f km² \n", area);
    printf("PIB: %f bilhoes de reais \n", pib);
    printf("Turismo: %d \n", turismo);

    printf("\n");
    
    printf("Carta 2: \n");
    printf("Estado: %c \n", letra2);
    printf("Codigo: %c%s \n", letra2, codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("Populacao: %i \n", populacao2);
    printf("Area: %f km² \n", area2);
    printf("PIB: %f bilhoes de reais \n", pib2);
    printf("Turismo: %d \n", turismo2);


    return 0;

   
}






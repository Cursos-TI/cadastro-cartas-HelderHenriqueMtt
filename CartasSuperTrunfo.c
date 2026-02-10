#include <stdio.h>

// Desafio Super Trunfo - Países

int main(){

// Área para definição das variáveis para armazenar as propriedades das cidades

    char letra[24];
    char uf[2];
    char codigo[3];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turismo;

 // Área para entrada de dados

    printf("Bem vindo(a) Vamos criar a Carta 1 \n");

    printf("Escolha o seu Estado? \n");
    scanf("%s", &letra);

    printf("Qual o UF do seu Estado? \n");
    scanf("%s", &uf);

    printf("Escolha um numero de 000 a 999? \n");
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

// Área para exibição dos dados da cidade

    printf("PARABENS! Voce criou a sua carta vamos ver as Informacoes. \n");
    printf("Estado: %s \n", letra);
    printf("Codigo: %s \n", uf, codigo);
    printf("Cidade: %s \n", cidade);
    printf("Populacao: %i \n", populacao);
    printf("Area: %f km² \n", area);
    printf("PIB: %f bilhoes de reais \n", pib);
    printf("Turismo: %d \n", turismo);


    return 0;

   
}






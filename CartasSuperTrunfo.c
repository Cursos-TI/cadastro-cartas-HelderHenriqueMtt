#include <stdio.h>

// Desafio Super Trunfo - Países

int main(){

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
    float densidade;
    float densidade2;
    float capita;
    float capita2;

    // Carta 1
    printf("Bem vindo(a) ao jogo Super Trunfo\nVamos criar a Carta 1:\n");

    printf("Escolha uma letra de A a H, que sera o seu estado:\n");
    scanf(" %c", &letra);

    printf("Defina um numero de 01 a 04:\n");
    scanf("%s", codigo);

    printf("Qual e a sua Cidade?\n");
    scanf("%s", cidade);

    printf("Qual e o numero de Populacao?\n");
    scanf("%d", &populacao);

    printf("Qual e o tamanho da sua Area?\n");
    scanf("%f", &area);

    printf("Qual e o seu PIB?\n");
    scanf("%f", &pib);

    printf("Qual e o numero de postos Turisticos?\n");
    scanf("%d", &turismo);

    capita = pib / populacao;

    densidade = area / populacao;


    // Carta 2
    printf("\nMuito bem!!!\nAgora vamos fazer a Carta 2:\n");

    printf("Escolha uma letra de A a H, que sera o segundo Estado:\n");
    scanf(" %c", &letra2);

    printf("Defina um numero de 01 a 04:\n");
    scanf("%s", codigo2);

    printf("Qual e a sua Cidade?\n");
    scanf("%s", cidade2);

    printf("Qual e o numero de Populacao?\n");
    scanf("%d", &populacao2);

    printf("Qual e o tamanho da sua Area?\n");
    scanf("%f", &area2);

    printf("Qual e o seu PIB?\n");
    scanf("%f", &pib2);

    printf("Qual e o numero de postos Turisticos?\n");
    scanf("%d", &turismo2);

    capita2 = pib2 / populacao2;

    densidade2 = area2 / populacao2;


    // Exibição
    printf("\nPARABENS!!!\nCarta 1:\n");
    printf("Estado: %c\n", letra);
    printf("Codigo: %c%s\n", letra, codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Turismo: %d\n", turismo);
    printf("Densidade Populacional: %2.f\n", densidade);
    printf("PIB PerCapita: %.2f\n", capita);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", letra2);
    printf("Codigo: %c%s\n", letra2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Turismo: %d\n", turismo2);
    printf("Densidade Populacional: %2.f\n", densidade2);
    printf("PIB PerCapita: %.2f\n", capita2);



    return 0;
}


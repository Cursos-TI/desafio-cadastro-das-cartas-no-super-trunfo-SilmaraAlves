#include <stdio.h>

int main(){
    //Variaveis da carta 1
    char estado; 
    int codigo, turistico;
    char cidade[20];
    int populacao;
    float area, pib;

    //Variaveis da carta 2
    char estado2;
    int codigo2, turistico2;
    char cidade2[20];
    int populacao2;
    float area2, pib2;

    // %d é para int, %c um caractere, %s é string/char palavra, %f float 
    printf("Escolha uma letra de 'A' a 'H' para representar o estado: "); //perguntar os dados para o usuario da carta 1
    scanf("%c", &estado);

    printf("Escolha um numero de 01 a 04 para o código: ");
    scanf("%d", &codigo);

    printf("Nome da Cidade? ");
    scanf("%s", &cidade);

    printf("Número de habitantes da cidade: ");
    scanf("%d", &populacao); 

    printf("A área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);

    printf("O Produto Interno Bruto da cidade: ");
    scanf("%f", &pib);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &turistico);

    //Perguntar os dados para o usuario da carta 2
    printf("\nEscolha uma letra de 'A' a 'H' para representar o estado: "); 
    scanf(" %c", &estado2);

    printf("Escolha um numero de 01 a 04 para o código: ");
    scanf("%d", &codigo2);

    printf("Nome da Cidade? ");
    scanf("%s", &cidade2);

    printf("Número de habitantes da cidade: ");
    scanf("%d", &populacao2); 

    printf("A área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("O Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &turistico2);


    // Mostrar carta 1
    printf("\n----- Carta 1 ----- \nEstado: %c \nCódigo: %c0%d \nNome da Cidade: %s \nPopulação: %d \nÁrea: %fKm² \nPIB: %f bilhões de reais \nPontos Turísticos: %d\n",
        estado, estado, codigo, cidade, populacao, area, pib, turistico);
    // Mostrar carta 1
    printf("\n----- Carta 2 -----\nEstado: %c \nCódigo: %c0%d \nNome da Cidade: %s \nPopulação: %d \nÁrea: %fKm² \nPIB: %f bilhões de reais \nPontos Turísticos: %d\n",
        estado2, estado2, codigo2, cidade2, populacao2, area2, pib2, turistico2);

    return 0;
}

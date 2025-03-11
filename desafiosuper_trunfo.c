#include <stdio.h>

int main(){

    printf("desafio super trunfo\n");

    // Declaracoes de variaveis para armazenas os dados das cartas + informacoes da carta 1
    char carta1[20] = "1";
    char Estado1[20] = "Acre";
    char Codigo1[10] = "A03";
    char Cidade1[30] = "Jordao";
    int Populacao1 = 380597;
    float Area1 = 519.8;
    float PIB1 = 20.5;
    int Pontos1 = 30;

printf("digite a carta: \n");
scanf("%s", &carta1);

printf("digite seu estado: \n");
scanf("%s", &Estado1);

printf("digite o codigo: \n");
scanf("%s", &Codigo1);

printf("digite a cidade: \n");
scanf("%s", &Cidade1);

printf("digite a populacao: \n");
scanf("%d", &Populacao1);

printf("digite a area: \n");
scanf("%f", &Area1);

printf("digite o PIB: \n");
scanf("%f", &PIB1);

printf("digite os pontos turisticos: \n");
scanf("%d", &Pontos1);

// exibicao das informacoes da carta 2

printf("carta 2\n");
    
    char Carta2[20] = "2";
    char Estado2[20] = "Amapa";
    char Codigo2[10] = "B03";
    char Cidade2[30] = "Macapa";
    int Populacao2 = 985365;
    float Area2 = 241.6;
    float PIB2 = 27.5;
    int Pontos2 = 30;

    printf("digite a carta: \n");
    scanf("%s", &Carta2);

    printf("digite seu estado: \n");
    scanf("%s", &Estado2);

    printf("digite o codigo: \n");
    scanf("%s", &Codigo2);
    
    printf("digite a cidade: \n");
    scanf("%s", &Cidade2);
    
    printf("digite a populacao: \n");
    scanf("%d", &Populacao2);

    printf("digite a area: \n");
    scanf("%f", &Area2);

    printf("digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("digite os pontos turisticos: \n");
    scanf("%d\n", &Pontos2);

    printf("\nCarta: %s\n", carta1);
    printf("Estado: %s\n", Estado1);
    printf("Codigo da carta: %s\n", Codigo1);
    printf("Nome da cidade: %s\n", Cidade1);
    printf("Populacao da cidade: %d\n", Populacao1);
    printf("Area da cidade: %f km²\n", Area1);
    printf("PIB da cidade: %f bilhoes de reais\n", PIB1);
    printf("Pontos turisticos: %d\n", Pontos1);

    printf("\nCarta: %s\n", Carta2);
    printf("Estado: %s\n", Estado2);
    printf("Codigo da carta: %s\n", Codigo2);
    printf("Nome da cidade: %s\n", Cidade2);
    printf("Populacao da cidade: %d\n", Populacao2);
    printf("Area da cidade: %f km²\n", Area2);
    printf("PIB da cidade: %f bilhoes de reais\n", PIB2);
    printf("Pontos turisticos: %d\n", Pontos2);

    return 0;

}



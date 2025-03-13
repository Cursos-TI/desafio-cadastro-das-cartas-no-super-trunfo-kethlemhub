#include <stdio.h>
 
 int main(){

    //Desafio Super Trunfo - Países
    //Tema 1 - cadastro das cartas
    // VARIAVEIS DAS 2 CARTAS
     char carta1[20];
     char estado1[20];
     char codigo1[10];
     char cidade1[30];
     int populacao1;
     int pontosturis1;
     float area1;
     float pib1;

     char Carta2[20];
     char Estado2[20];
     char Codigo2[10];
     char Cidade2[30];
     int Populacao2;
     int Pontos2;
     float Area2;
     float PIB2;
 
 //Entrada de dados carta 1
 printf("digite a carta: \n");
 scanf("%s", &carta1);
 
 printf("digite seu estado: \n");
 scanf("%s", &estado1);
 
 printf("digite o codigo da carta: \n");
 scanf("%s", &codigo1);
 
 printf("digite a cidade: \n");
 scanf("%s", &cidade1);
 
 printf("digite a populacao: \n");
 scanf("%d", &populacao1);

 printf("digite o numero de pontos turisticos: \n");
 scanf("%d", &pontosturis1);
 
 printf("digite a area em km²: \n");
 scanf("%f", &area1);

 printf("digite o pib: \n");
 scanf("%f", &pib1);

 // Entrada de dados carta 2
     printf("digite a carta: \n");
     scanf("%s", &Carta2);
 
     printf("digite seu estado: \n");
     scanf("%s", &Estado2);
 
     printf("digite o codigo da carta: \n");
     scanf("%s", &Codigo2);

     printf("digite a cidade: \n");
     scanf("%s", &Cidade2);
    
     printf("populacao e: \n");
     scanf("%d", &Populacao2);

     printf("digite o numero de pontos turisticos: \n");
     scanf("%d", &Pontos2);
     
     printf("digite a area em km²: \n");
     scanf("%f", &Area2);

     printf("digite o pib: \n");
     scanf("%f", &PIB2);
 
     // Exibir dados para conferencia
     printf("\nCarta: %s\n", carta1);
     printf("Estado: %s\n", estado1);
     printf("Codigo da carta: %s\n", codigo1);
     printf("Nome da cidade: %s\n", cidade1);
     printf("Populacao da cidade: %d\n", populacao1);
     printf("Pontos turisticos: %d\n", pontosturis1);
     printf("Area da cidade: %.1f km²\n", area1);
     printf("PIB da cidade: %.1f bilhoes de reais\n", pib1);
     
     // Exibir dados para conferencia
     printf("\nCarta: %s\n", Carta2);
     printf("Estado: %s\n", Estado2);
     printf("Codigo da carta: %s\n", Codigo2);
     printf("Nome da cidade: %s\n", Cidade2);
     printf("Populacao da cidade: %d\n", Populacao2);
     printf("Pontos turisticos: %d\n", Pontos2);
     printf("Area da cidade: %.1f km²\n", Area2);
     printf("PIB da cidade: %.1f bilhoes de reais\n", PIB2);

 
 }
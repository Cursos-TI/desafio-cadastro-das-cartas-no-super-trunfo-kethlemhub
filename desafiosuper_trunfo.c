#include <stdio.h>

int main(){
printf("desafio super trunfo\n");

    char estado[20] = "Acre";
    char codigo[10] = "A03";
    char cidade[30] = "RioB";
    int populacao = 89520.0;
    int numerodepontos = 30;
    float area = 78254.0;
    float pib = 47.655;

printf("digite seu estado: \n");
scanf("%s", &estado);
printf("o estado é: %s\n", estado);

printf("digite o codigo: \n");
scanf("%s", &codigo);
printf("o codigo é: %s\n", codigo);

printf("digite a cidade: \n");
scanf("%s", &cidade);
printf("sua cidade é: %s\n", cidade);

printf("digite a populacao: \n");
scanf("%d", &populacao);
printf("o numero de populacao é: %d\n", populacao);

printf("digite o numero de pontos: \n");
scanf("%d", &numerodepontos);
printf("o numero de pontos e: %d\n", numerodepontos);

printf("digite a area: \n");
scanf("%f\n", area);
printf("A area é: %f\n", area);

printf("digite o pib: \n");
scanf("%f", &pib);
printf("o pib e: %f\n", pib);

// exibicao das informacoes da carta 2

printf("carta 2\n");
    
    char estado2[20] = "Amapa";
    char codigo2[10] = "B03";
    char cidade2[30] = "Macapa";
    float pib2 = 54.555;
    int populacao2 = 89520.0;
    int numerodepontos2= 30;
    float area2 = 78254.0;

    printf("digite seu estado: \n");
    scanf("%s", &estado2);
    printf("o estado é: %s\n", estado2);

    printf("digite o codigo: \n");
    scanf("%s", &codigo2);
    printf("o codigo da carta é: %s\n", codigo2);

    printf("digite a cidade: \n");
    scanf("%s", &cidade2);
    printf("sua cidade é: %s\n", cidade2);

    printf("digite o pib: \n");
    scanf("%f", &pib2);
    printf("o pib é: %f\n", pib2);

    printf("digite a populacao: \n");
    scanf("%d", &populacao2);
    printf("numero de populacao é: %d\n", populacao2);

    printf("digite o numero de pontos: \n");
    scanf("%d", &numerodepontos2);
    printf("o numero de pontos e: %d\n", numerodepontos2);

    printf("digite a area: \n");
    scanf("%f\n", &area2);
    printf("a area e: %f\n", area2);

    return 0;

}

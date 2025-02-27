#include <stdio.h>

int main(){
printf("desafio super trunfo\n");

    char estado[20] = "Acre";
    char codigo[10] = "A03";
    char cidade[30] = "RioB";
    int populacao = 89.559;
    int numero_pontos_turisticos = 30;
    float area = 55.57;
    float pib = 47.655;

printf("digite seu estado: \n");
scanf("%s", &estado);

printf("digite o codigo: \n");
scanf("%c\n", &codigo);

printf("digite a cidade: \n");
scanf("%s\n", &cidade);

printf("digite a populacao: \n");
scanf("%d", &populacao);
printf("numero de populacao é: %d\n");

printf("digite o numero de pontos turisticos: \n");
scanf("%d", &numero_pontos_turisticos);
printf("quantidade de pontos turisticos sao: %d\n", numero_pontos_turisticos);

printf("digite a area: \n");
scanf("%f", &area);
printf("A area é: %f\n", area);

printf("digite o pib: \n");
scanf("%f", &pib);
printf("o pib e: %f\n", pib);

// exibicao das informacoes da carta 2

printf("carta 2\n");
    
    char estado2[20] = "Amapa";
    char codigo2[10] = "B03";
    char cidade2[30] = "Macapa";
    float pib2 = 545.255;
    int populacao2 = 458.4585;
    int numero_pontos_turisticos2 = 30;
    float area_em_km2 = 458.255;

    printf("digite seu estado: \n");
    scanf("%s", &estado2);
    printf("o estado é: %s\n", estado2);

    printf("digite o codigo: \n");
    scanf("%s", &codigo2);
    printf("o codigo é: %s\n", codigo2);

    printf("digite a cidade: \n");
    scanf("%s", &cidade2);
    printf("sua cidade é: %s\n", cidade2);

    printf("digite o pib: \n");
    scanf("%f", &pib2);
    printf("o pib é: %f\n", pib2);

    printf("digite a populacao: \n");
    scanf("%d", &populacao2);
    printf("numero de populacao é: %d\n", populacao);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &numero_pontos_turisticos2);
    printf("quantidade de pontos turisticos sao: %d\n", numero_pontos_turisticos2);

    printf("digite a area: \n");
    scanf("%f", &area_em_km2);
    printf("A area em km2 é: %f\n", area_em_km2);

    return 0;

    
}
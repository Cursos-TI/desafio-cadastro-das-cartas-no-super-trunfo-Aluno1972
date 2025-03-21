#include <stdio.h>

int main(){

// declaração das variáveis

    char carta1;
    char carta2; 
    char estado1[28];
    char estado2[28];
    char códigodaCarta1[4];
    char códigodaCarta2[4];
    char nomedaCidade1[15];
    char nomedaCidade2[15];
    int  Populacao1;
    int  Populacao2;
    float área1;
    float área2;
    float pib1;
    float pib2;
    int pontosTurísticos1;
    int pontosTurísticos2;

   // Entrada de dados para a primeira carta

    printf("Digite a letra que corresponde ao estado: \n");
    scanf("%s", &estado1);
    printf("Digite o código da primeira carta com sua letra incial seguido de um número de 01 a 04: \n");
    scanf("%s", &códigodaCarta1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedaCidade1);
    printf("Digite a pupulação: \n");
    scanf("%d", &Populacao1);
    printf("Digite a área (em km²): \n");
    scanf("%f", &área1);
    printf("Digite a PIB: \n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTurísticos1);
 
    // Entrada de dados para a segunda carta

    printf("Digite a letra que corresponde ao estado: \n");
    scanf("%s", &estado2);
    printf("Digite o código da segunda carta com sua letra incial seguido de um número de 01 a 04: \n");
    scanf("%s", &códigodaCarta2);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedaCidade2);
    printf("Digite a pupulação: \n");
    scanf("%d", &Populacao2);
    printf("Digite a área (em km²): \n");
    scanf("%f", &área2);
    printf("Digite a PIB: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTurísticos2);

    return 0;
}
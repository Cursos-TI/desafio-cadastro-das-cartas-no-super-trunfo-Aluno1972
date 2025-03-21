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
    scanf("%s", &estado1);// o estado da primeira carta
    printf("Digite o código da primeira carta com sua letra incial seguido de um número de 01 a 04: \n");
    scanf("%s", &códigodaCarta1);//lê o código da primeira carta
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedaCidade1);//lê o nome da cidade da primeira carta
    printf("Digite a pupulação: \n");
    scanf("%d", &Populacao1); //lê a população da primeira carta
    printf("Digite a área (em km²): \n");
    scanf("%f", &área1);//lê a área da primeira carta
    printf("Digite a PIB: \n");
    scanf("%f", &pib1);//lê o PIB da primeira carta
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTurísticos1);//lê os pontos turísticos da primeira carta
 
    // Entrada de dados para a segunda carta

    printf("Digite a letra que corresponde ao estado: \n");
    scanf("%s", &estado2);//lê o estado da segunda carta
    printf("Digite o código da segunda carta com sua letra incial seguido de um número de 01 a 04: \n");
    scanf("%s", &códigodaCarta2);//lê o código da segunda carta
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedaCidade2);//lê o nome da cidade da segunda carta
    printf("Digite a pupulação: \n");
    scanf("%d", &Populacao2);//lê a população da segunda carta
    printf("Digite a área (em km²): \n");
    scanf("%f", &área2);//lê a área da segunda carta
    printf("Digite a PIB: \n");
    scanf("%f", &pib2);//lê o PIB da segunda carta
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTurísticos2);//lê os pontos turísticos da segunda carta

    // Exibição dos dados da primeira carta

    printf("\nCarta 1:\n");//exibe a carta 1
    printf("Estado: %s \n", estado1);//exibe o estado da primeria carta
    printf("Código: %4s \n", códigodaCarta1);//exibe o código da primeria carta
    printf("Nome da Cidade: %s \n", nomedaCidade1);//exibe o nnome da cidade da primeria carta
    printf("População: %d \n", Populacao1);//exibe a população da primeria carta
    printf("Área: %.2f km²\n", área1);//exibe a área da primeria carta
    printf("PIB: %.2f \n", pib1);//exibe o PIB da primeria carta
    printf("Número de Pontos Turísticos: %d \n", pontosTurísticos1);//exibe os pontos turísticos da primeria carta

    // Exibição dos dados da segunda carta

    printf("\nCarta 2:\n");//exibe a carta 2
    printf("Estado: %s \n", estado2);//exibe estado da segunda carta
    printf("Código: %4s \n", códigodaCarta2);//exibe o código da segunda carta
    printf("Nome da Cidade: %s \n", nomedaCidade2);//exibe o nome da cidade da segunda carta
    printf("População: %d \n", Populacao2);//exibe a população da segunda carta
    printf("Área: %.2f km²\n", área2);//exibe a área da segunda carta
    printf("PIB: %.2f \n", pib2);//exibe o PIB da segunda carta
    printf("Número de Pontos Turísticos: %d \n", pontosTurísticos2);//exibe os pontos turísticos da segunda carta


    return 0;//indica que o programa foi executado com sucesso
}
#include <stdio.h>
#include <string.h>

int main() {
//variavel carta 1
    char codigo1[10];
    unsigned long int populacao1;
    char cidade1[40];
    float pib1;
    char estado1[40];
    int pontosturisticos1;
    float area1;
//variavel carta 2
    char codigo2[10];
    unsigned long int populacao2;
    char cidade2[40];
    float pib2;
    char estado2[40];
    int pontosturisticos2;
    float area2;
//Cadastro de carta 1
    printf("      Desafio Super Trunfo Aventureiro!\n");
    printf("\n----------Cadastro de Carta 1----------\n");
    
    printf("Estado: \n");
    scanf("%s", estado1);

    printf("Código de Carta (ex: A01): \n");
    scanf("%3s", codigo1);

    getchar();
    printf("Nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("Número de população: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos1);


//Cadastro de carta 2

    printf("\n----------Cadastro de Carta 2----------\n");
    
    printf("Estado: \n");
    scanf(" %s", estado2);

    printf("Código de Carta: \n");
    scanf("%3s", codigo2);

    getchar();
    printf("Nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("Populção: \n");
    scanf("%d", &populacao2);

    printf("Área km: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2 );

//Cálculo carta 1
    float densidade1 = populacao1 / area1;
    float pibPercapital1 = (pib1 * 1000000000) / populacao1; 

//Cálculo carta 2
    float densidade2 = populacao2 / area2;
    float pibPercapital2 = (pib2 * 1000000000) / populacao2;    

//Super poder
    float PoderA = (populacao1 + area1 + pib1 + pontosturisticos1 + pibPercapital1); //quanto menor a densidade, maior o poder
    float PoderB = (populacao2 + area2 + pib2 + pontosturisticos2 + pibPercapital2); //falta a densidade

//comparação das cartas

    printf("\n----------Comparação de Cartas----------\n");
    printf("População:")



return 0;
}
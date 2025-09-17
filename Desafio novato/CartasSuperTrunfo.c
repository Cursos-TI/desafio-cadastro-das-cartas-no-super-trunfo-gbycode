#include <stdio.h>
#include <string.h>

int main() {
//variavel carta 1
    char codigo1[10];
    int populacao1;
    char cidade1[40];
    float pib1;
    char estado1[40];
    int pontosturisticos1;
    float area1;
//variavel carta 2
    char codigo2[10];
    int populacao2;
    char cidade2[40];
    float pib2;
    char estado2[40];
    int pontosturisticos2;
    float area2;
//Cadastro de carta 1
    printf("      Desafio Super Trunfo novato!\n");
    printf("\n----------Cadastro de Carta 1----------\n");
    
    printf("Estado: \n");
    fgets(estado1, 40, stdin);
    estado1[strcspn(estado1, "\n")] = 0;

    printf("Código de Carta (ex: A01): \n");
    scanf("%3s", codigo1);

    getchar();
    printf("Nome da Cidade: \n");
    fgets(cidade1, 40, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

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
    
    printf("Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Código de Carta: \n");
    scanf("%3s", codigo2);

    getchar();
    printf("Nome da Cidade: \n");
    fgets(cidade2, 40, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

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


//exibição de carta 1
    
    printf("\n");   

    printf("\n----------Carta 1----------\n");

    printf("Estado: %s \n", estado1);

    printf("Código de Carta: %s \n", codigo1);

    printf("Nome da Cidade: %s \n", cidade1);

    printf("População: %d \n", populacao1);

    printf("Área: %f km² \n", area1);

    printf("PIB:  %f bilhões de reais \n", pib1);

    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

    printf("PIB per capital: %.1f reais\n", pibPercapital1);

//exibição de carta 2

    printf("\n");  

    printf("\n----------Carta 2----------\n");

    printf("Estado: %s \n", estado2);

    printf("Código de Carta: %s \n", codigo2);

    printf("Nome da Cidade: %s \n", cidade2);

    printf("População: %d \n", populacao2);

    printf("Área: %f km² \n", area2);
    
    printf("PIB: %f bilhões de reais \n", pib2);

    printf("Número de Pontos turísticos: %d \n", pontosturisticos2);
    
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    printf("PIB per capital: %.1f reais\n", pibPercapital2);

return 0;
}
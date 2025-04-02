#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os dados das duas cartas
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    // Densidade populacional e PIB per capita
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    // Coleta de dados da primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo dos novos atributos para a primeira carta
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Super Poder: soma dos atributos, com a densidade invertida
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + (1 / densidade1) + pib_per_capita1;

    // Coleta de dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo dos novos atributos para a segunda carta
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Super Poder: soma dos atributos, com a densidade invertida
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + (1 / densidade2) + pib_per_capita2;

    // Exibição dos dados cadastrados e dos cálculos
    printf("\nComparação entre as cartas:\n");

    // Comparação de cada atributo
    printf("\nComparação de Atributos:\n");
    printf("População: %d vs %d -> Carta %d vence\n", populacao1, populacao2, (populacao1 > populacao2) ? 1 : 2);
    printf("Área: %.2f vs %.2f -> Carta %d vence\n", area1, area2, (area1 > area2) ? 1 : 2);
    printf("PIB: %.2f vs %.2f -> Carta %d vence\n", pib1, pib2, (pib1 > pib2) ? 1 : 2);
    printf("Pontos turísticos: %d vs %d -> Carta %d vence\n", pontos_turisticos1, pontos_turisticos2, (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2);
    printf("Densidade populacional: %.2f vs %.2f -> Carta %d vence\n", densidade1, densidade2, (densidade1 < densidade2) ? 1 : 2);
    printf("PIB per capita: %.2f vs %.2f -> Carta %d vence\n", pib_per_capita1, pib_per_capita2, (pib_per_capita1 > pib_per_capita2) ? 1 : 2);
    
    // Comparação do Super Poder
    printf("\nSuper Poder:\n");
    printf("Carta 1 Super Poder: %.2f\n", super_poder1);
    printf("Carta 2 Super Poder: %.2f\n", super_poder2);
    printf("Carta %d vence no Super Poder\n", (super_poder1 > super_poder2) ? 1 : 2);

    return 0;
}
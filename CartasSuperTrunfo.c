#include <stdio.h>

// Estrutura para armazenar os dados da carta
typedef struct {
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

// Função para calcular a densidade populacional
float calcular_densidade_populacional(Carta carta) {
    return carta.populacao / carta.area;
}

// Função para calcular o PIB per capita
float calcular_pib_per_capita(Carta carta) {
    return carta.pib / carta.populacao;
}

// Função para calcular o Super Poder
float calcular_super_poder(Carta carta) {
    // Super Poder = População + Área + PIB + Pontos Turísticos + (1 / Densidade Populacional)
    return carta.populacao + carta.area + carta.pib + carta.pontos_turisticos + (1 / carta.densidade_populacional);
}

// Função para exibir os dados da carta
void exibir_dados(Carta carta, int numero_carta) {
    printf("\n--- Dados da Carta %d ---\n", numero_carta);
    printf("População: %lu\n", carta.populacao);
    printf("Área: %.2f\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", carta.densidade_populacional);
    printf("PIB per Capita: %.2f\n", carta.pib_per_capita);
    printf("Super Poder: %.2f\n", carta.super_poder);
}

// Função para comparar os atributos das cartas
void comparar_cartas(Carta carta1, Carta carta2) {
    printf("\n--- Comparação entre as Cartas ---\n");
    
    // Comparando População
    printf("População: ");
    if (carta1.populacao > carta2.populacao) {
        printf("Carta 1 vence\n");
    } else if (carta1.populacao < carta2.populacao) {
        printf("Carta 2 vence\n");
    } else {
        printf("Empate\n");
    }

    // Comparando Área
    printf("Área: ");
    if (carta1.area > carta2.area) {
        printf("Carta 1 vence\n");
    } else if (carta1.area < carta2.area) {
        printf("Carta 2 vence\n");
    } else {
        printf("Empate\n");
    }

    // Comparando PIB
    printf("PIB: ");
    if (carta1.pib > carta2.pib) {
        printf("Carta 1 vence\n");
    } else if (carta1.pib < carta2.pib) {
        printf("Carta 2 vence\n");
    } else {
        printf("Empate\n");
    }

    // Comparando Pontos Turísticos
    printf("Pontos Turísticos: ");
    if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
        printf("Carta 1 vence\n");
    } else if (carta1.pontos_turisticos < carta2.pontos_turisticos) {
        printf("Carta 2 vence\n");
    } else {
        printf("Empate\n");
    }

    // Comparando Densidade Populacional (menor vence)
    printf("Densidade Populacional: ");
    if (carta1.densidade_populacional < carta2.densidade_populacional) {
        printf("Carta 1 vence\n");
    } else if (carta1.densidade_populacional > carta2.densidade_populacional) {
        printf("Carta 2 vence\n");
    } else {
        printf("Empate\n");
    }

    // Comparando Super Poder
    printf("Super Poder: ");
    if (carta1.super_poder > carta2.super_poder) {
        printf("Carta 1 vence\n");
    } else if (carta1.super_poder < carta2.super_poder) {
        printf("Carta 2 vence\n");
    } else {
        printf("Empate\n");
    }
}

int main() {
    // Declaração de duas cartas
    Carta carta1, carta2;

    // Cadastro da Carta 1
    printf("Digite os dados para a Carta 1:\n");
    printf("População: ");
    scanf("%lu", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da Carta 2
    printf("\nDigite os dados para a Carta 2:\n");
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculos de densidade populacional e PIB per capita para cada carta
    carta1.densidade_populacional = calcular_densidade_populacional(carta1);
    carta1.pib_per_capita = calcular_pib_per_capita(carta1);
    carta1.super_poder = calcular_super_poder(carta1);

    carta2.densidade_populacional = calcular_densidade_populacional(carta2);
    carta2.pib_per_capita = calcular_pib_per_capita(carta2);
    carta2.super_poder = calcular_super_poder(carta2);

    // Exibição dos dados das Cartas
    exibir_dados(carta1, 1);
    exibir_dados(carta2, 2);

    // Comparação entre as Cartas
    comparar_cartas(carta1, carta2);

    return 0;
}

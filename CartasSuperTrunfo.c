#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Nível Aventureiro: cálculo de Densidade Populacional e PIB per Capita

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades

    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1; // PIB em bilhões de reais
    int pontosTuristicos1;
    float densidade1;      // habitantes por km²
    float pibPerCapita1;   // reais por habitante

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2; // PIB em bilhões de reais
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // Área para entrada de dados

    // --- Cadastro da Carta 1 ---
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a populacao: ");
    scanf(" %d", &populacao1);

    printf("Digite a area (em km²): ");
    scanf(" %f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf(" %f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos1);

    // --- Cadastro da Carta 2 ---
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a populacao: ");
    scanf(" %d", &populacao2);

    printf("Digite a area (em km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Área para cálculo dos indicadores

    // Densidade populacional = população / área
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // PIB per capita = (PIB em reais) / população
    // Como o PIB foi informado em bilhões de reais, multiplicamos por 1.000.000.000
    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;

    // Área para exibição dos dados da cidade

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
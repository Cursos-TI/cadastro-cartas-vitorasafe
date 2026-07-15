#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Nível Mestre: Comparação de cartas e cálculo do Super Poder

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades

    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1; // agora unsigned long int
    float area1;
    float pib1; // PIB em bilhões de reais
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2; // agora unsigned long int
    float area2;
    float pib2; // PIB em bilhões de reais
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // Variáveis para armazenar o resultado das comparações (1 = Carta 1 venceu, 0 = Carta 2 venceu)
    int venceuPopulacao;
    int venceuArea;
    int venceuPib;
    int venceuPontosTuristicos;
    int venceuDensidade;
    int venceuPibPerCapita;
    int venceuSuperPoder;

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
    scanf(" %lu", &populacao1);

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
    scanf(" %lu", &populacao2);

    printf("Digite a area (em km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Área para cálculo dos indicadores

    // Densidade populacional = população / área
    // (float) garante que a divisão seja feita em ponto flutuante, mesmo com população sendo unsigned long int
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    // PIB per capita = (PIB em reais) / população
    // PIB é informado em bilhões, então multiplicamos por 1.000.000.000
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float) populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float) populacao2;

    // Super Poder: soma de todos os atributos numéricos
    // Atenção às conversões de tipo: populacao (unsigned long) e pontosTuristicos (int)
    // precisam ser convertidos para float antes da soma, para evitar perda de precisão
    // O inverso da densidade é usado pois quanto menor a densidade, maior o poder.
    superPoder1 = (float) populacao1
                + area1
                + pib1
                + (float) pontosTuristicos1
                + pibPerCapita1
                + (1.0f / densidade1);

    superPoder2 = (float) populacao2
                + area2
                + pib2
                + (float) pontosTuristicos2
                + pibPerCapita2
                + (1.0f / densidade2);

    // Área para exibição dos dados da cidade

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Área para comparação das cartas
    // Para a densidade populacional, o MENOR valor vence.
    // Para os demais atributos, o MAIOR valor vence.

    venceuPopulacao = (populacao1 > populacao2);
    venceuArea = (area1 > area2);
    venceuPib = (pib1 > pib2);
    venceuPontosTuristicos = (pontosTuristicos1 > pontosTuristicos2);
    venceuDensidade = (densidade1 < densidade2); // menor densidade vence
    venceuPibPerCapita = (pibPerCapita1 > pibPerCapita2);
    venceuSuperPoder = (superPoder1 > superPoder2);

    // Área para exibição dos resultados das comparações

    printf("\nComparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n",
           venceuPopulacao ? 1 : 2, venceuPopulacao);

    printf("Área: Carta %d venceu (%d)\n",
           venceuArea ? 1 : 2, venceuArea);

    printf("PIB: Carta %d venceu (%d)\n",
           venceuPib ? 1 : 2, venceuPib);

    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
           venceuPontosTuristicos ? 1 : 2, venceuPontosTuristicos);

    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           venceuDensidade ? 1 : 2, venceuDensidade);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           venceuPibPerCapita ? 1 : 2, venceuPibPerCapita);

    printf("Super Poder: Carta %d venceu (%d)\n",
           venceuSuperPoder ? 1 : 2, venceuSuperPoder);

    return 0;
}
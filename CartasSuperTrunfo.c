#include <stdio.h>
#include <string.h>  // Para usar strcspn

int main() {
    // Declaração de variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Declaração de variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Entrada de dados da primeira carta
    printf("Digite o estado da primeira carta (A-H): ");
    scanf(" %c", &estado1);  // Atenção ao espaço antes de %c para limpar buffer
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %3s", codigo1);  // Lê o código da carta
    getchar();  // Limpar o buffer após o scanf para evitar o problema do '\n'
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;  // Remover o '\n' gerado pelo fgets
    printf("Digite a população: ");
    scanf(" %lu", &populacao1);
    printf("Digite a área (km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB (bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Cálculos para a primeira carta
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1; // PIB em reais
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    // Entrada de dados da segunda carta
    printf("\nDigite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado2);  // Atenção ao espaço antes de %c para limpar buffer
    printf("Digite o código da carta (ex: B02): ");
    scanf(" %3s", codigo2);  // Lê o código da carta
    getchar();  // Limpar o buffer após o scanf para evitar o problema do '\n'
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;  // Remover o '\n' gerado pelo fgets
    printf("Digite a população: ");
    scanf(" %lu", &populacao2);
    printf("Digite a área (km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB (bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculos para a segunda carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2; // PIB em reais
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Comparação dos atributos
    printf("\nComparação de Cartas:\n");

    // Comparação da População
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);

    // Comparação da Área
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);

    // Comparação do PIB
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

    // Comparação dos Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);

    // Comparação da Densidade Populacional (quanto menor, melhor)
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadePopulacional1 > densidadePopulacional2);

    // Comparação do PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);

    // Comparação do Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}

#include <stdio.h>

int main() {
    // Atributos da carta 1
    int populacao1, pontos1;
    float area1, PIB1;

    // Atributos da carta 2
    int populacao2, pontos2;
    float area2, PIB2;

    // Entrada de dados - Carta 1
    printf("Digite a População da primeira cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a Área da primeira cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &PIB1);

    printf("Digite o Número de Pontos Turísticos da primeira cidade: ");
    scanf("%d", &pontos1);

    // Entrada de dados - Carta 2
    printf("\nDigite a População da segunda cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a Área da segunda cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &PIB2);

    printf("Digite o Número de Pontos Turísticos da segunda cidade: ");
    scanf("%d", &pontos2);

    // Saída de dados - Carta 1
    printf("\nDados da Primeira Cidade:\n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontos1);

    // Saída de dados - Carta 2
    printf("\nDados da Segunda Cidade:\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontos2);

    return 0;
}

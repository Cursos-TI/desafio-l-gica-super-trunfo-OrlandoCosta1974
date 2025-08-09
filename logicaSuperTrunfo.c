#include <stdio.h>
#include <string.h>

int main() {
    char codigoA[20], nomeA[50];
    int populacaoA;
    float areaA, pibA;

    char codigoB[20], nomeB[50];
    int populacaoB;
    float areaB, pibB;

    printf("Cadastro da Carta 1:\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigoA);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeA);
    printf("Digite a população: ");
    scanf("%d", &populacaoA);
    printf("Digite a área (km²): ");
    scanf("%f", &areaA);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pibA);

    printf("\nCadastro da Carta 2:\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigoB);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeB);
    printf("Digite a população: ");
    scanf("%d", &populacaoB);
    printf("Digite a área (km²): ");
    scanf("%f", &areaB);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pibB);

    int pontosA = 0, pontosB = 0;

    printf("\nComparação das cartas:\n");

    if (populacaoA > populacaoB) {
        printf("População: %s venceu.\n", nomeA);
        pontosA++;
    } else if (populacaoB > populacaoA) {
        printf("População: %s venceu.\n", nomeB);
        pontosB++;
    } else {
        printf("População: Empate.\n");
    }

    if (areaA > areaB) {
        printf("Área: %s venceu.\n", nomeA);
        pontosA++;
    } else if (areaB > areaA) {
        printf("Área: %s venceu.\n", nomeB);
        pontosB++;
    } else {
        printf("Área: Empate.\n");
    }

    if (pibA > pibB) {
        printf("PIB: %s venceu.\n", nomeA);
        pontosA++;
    } else if (pibB > pibA) {
        printf("PIB: %s venceu.\n", nomeB);
        pontosB++;
    } else {
        printf("PIB: Empate.\n");
    }

    printf("\nResultado final:\n");
    if (pontosA > pontosB) {
        printf("A cidade vencedora é: %s\n", nomeA);
    } else if (pontosB > pontosA) {
        printf("A cidade vencedora é: %s\n", nomeB);
    } else {
        printf("Empate geral entre as cidades!\n");
    }

    return 0;
}

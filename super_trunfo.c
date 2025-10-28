//
// Created by Laercio Serra (laercio.serra@gmail.com) on 28/10/2025.
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades
// utilizando scanf para entrada de dados e printf para exibir as informações.
//
#include <stdio.h>

// Tamanho máximo para strings
#define TAM_CODIGO 4
#define TAM_NOME 50

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[TAM_CODIGO];
    char nomeCidade1[TAM_NOME];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[TAM_CODIGO];
    char nomeCidade2[TAM_NOME];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Área para entrada de dados
    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf(">> Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf(">> Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf(">> Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf(">> Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf(">> Digite a Area (em km): ");
    scanf("%f", &area1);

    printf(">> Digite o PIB (em bilhooes de reais): ");
    scanf("%f", &pib1);

    printf(">> Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf(">> Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf(">> Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf(">> Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf(">> Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf(">> Digite a Area (em km): ");
    scanf("%f", &area2);

    printf(">> Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf(">> Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Área para exibição dos dados da cidade
    // Exibição dos dados da Carta 1
    printf("\n==[ Carta 1 ]==\n");
    printf("==> Estado: %c\n", estado1);
    printf("==> Codigo: %s\n", codigo1);
    printf("==> Nome da Cidade: %s\n", nomeCidade1);
    printf("==> Populacao: %d\n", populacao1);
    printf("==> Area: %.2f km\n", area1);
    printf("==> PIB: %.2f bilhoes de reais\n", pib1);
    printf("==> Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\n==[ Carta 2 ]==\n");
    printf("==> Estado: %c\n", estado2);
    printf("==> Codigo: %s\n", codigo2);
    printf("==> Nome da Cidade: %s\n", nomeCidade2);
    printf("==> Populacao: %d\n", populacao2);
    printf("==> Area: %.2f km\n", area2);
    printf("==> PIB: %.2f bilhoes de reais\n", pib2);
    printf("==> Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}

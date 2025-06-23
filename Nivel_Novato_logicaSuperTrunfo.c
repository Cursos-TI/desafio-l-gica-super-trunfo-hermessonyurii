#include <stdio.h>
/*
 * Tarefa da Faculdade
 * DISCIPLINA: Programando em C
 *
 * Desafio: Desafio Lógica Super Trunfo - Nível Novato
 * Objetivo: Comparar cartas baseado em um atributo específico
 * Autor: Hermesson Yuri
 * Professor: Sergio Cardoso
 * Data: 23/06/2025
 * GitHub: https://github.com/hermessonyurii
 *
 */

int main() {
    // CARTA 1: ALAGOAS (MACEIÓ)
    char estado1[] = "AL";
    char codigo1[] = "A01";
    char cidade1[] = "Maceio";
    unsigned long populacao1 = 957916;
    float area1 = 509.6f;
    double pib1 = 27484016310.31;
    int pontos_turisticos1 = 15;
    
    // Cálculos
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;

    // CARTA 2: SANTA CATARINA (FLORIANÓPOLIS)
    char estado2[] = "SC";
    char codigo2[] = "B02";
    char cidade2[] = "Florianopolis";
    unsigned long populacao2 = 7610361;
    float area2 = 674.844f;
    double pib2 = 65296490000.0;
    int pontos_turisticos2 = 15;
    
    // Cálculos
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    // Exibição das cartas (opcional, conforme requisitos)
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1 / 1e9);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n\n", pib_per_capita1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2 / 1e9);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n\n", pib_per_capita2);

    // COMPARAÇÃO (ESCOLHA DO ATRIBUTO)
    // Vamos comparar por População (como no exemplo)
    char* atributo_escolhido = "População";
    unsigned long valor1 = populacao1;
    unsigned long valor2 = populacao2;
    
    // Exibição da comparação conforme requisito
    printf("Comparação de cartas (Atributo: %s):\n\n", atributo_escolhido);
    printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, valor1);
    printf("Carta 2 - %s (%s): %lu\n\n", cidade2, estado2, valor2);

    // Lógica de comparação
    if (valor1 > valor2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (valor2 > valor1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
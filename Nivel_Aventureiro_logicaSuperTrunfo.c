#include <stdio.h>
/*
 * Tarefa da Faculdade
 * DISCIPLINA: Programando em C
 *
 * Desafio: Desafio Lógica Super Trunfo - Nível Aventureiro
 * Objetivo: Interatividade no Super Trunfo
 * Autor: Hermesson Yuri
 * Professor: Sergio Cardoso
 * Data: 24/06/2025
 * GitHub: https://github.com/hermessonyurii
 *
 */

int main() {
    // Dados da Carta 1: Maceió (AL)
    char estado1[] = "AL";
    char cidade1[] = "Maceio";
    unsigned long populacao1 = 957916;       // População em habitantes
    float area1 = 509.6f;                   // Área em km²
    double pib1 = 27484016310.31;           // PIB em reais
    int pontos_turisticos1 = 15;            // Pontos turísticos
    float densidade1 = populacao1 / area1;  // Densidade (hab/km²)

    // Dados da Carta 2: Florianópolis (SC)
    char estado2[] = "SC";
    char cidade2[] = "Florianopolis";
    unsigned long populacao2 = 7610361;
    float area2 = 674.844f;
    double pib2 = 65296490000.0;
    int pontos_turisticos2 = 15;
    float densidade2 = populacao2 / area2;

    // Menu de escolha
    printf("\n🌟 === SUPER TRUNFO - NIVEL AVENTUREIRO === 🌟\n");
    printf("\nEscolha como quer comparar as cartas:\n");
    printf("1️⃣  - POPULACAO (maior ganha)\n");
    printf("2️⃣  - AREA (maior ganha)\n");
    printf("3️⃣  - PIB (maior ganha)\n");
    printf("4️⃣  - PONTOS TURISTICOS (mais pontos ganha)\n");
    printf("5️⃣  - DENSIDADE (menor ganha)\n");
    printf("\n👉 Digite sua escolha (1-5): ");

    int escolha;
    scanf("%d", &escolha);

    printf("\n⚡ === RESULTADO === ⚡\n");

    // Verifica a escolha e compara
    switch (escolha) {
        case 1: // População
            printf("\n🏙️ POPULACAO:\n");
            printf("%s (%s): %lu pessoas\n", cidade1, estado1, populacao1);
            printf("%s (%s): %lu pessoas\n", cidade2, estado2, populacao2);

            if (populacao1 > populacao2) {
                printf("\n🎉 Vencedor: %s!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("\n🎉 Vencedor: %s!\n", cidade2);
            } else {
                printf("\n🤝 EMPATE!\n");
            }
            break;

        case 2: // Área
            printf("\n🌄 AREA:\n");
            printf("%s (%s): %.2f km²\n", cidade1, estado1, area1);
            printf("%s (%s): %.2f km²\n", cidade2, estado2, area2);

            if (area1 > area2) {
                printf("\n🎉 Vencedor: %s!\n", cidade1);
            } else if (area2 > area1) {
                printf("\n🎉 Vencedor: %s!\n", cidade2);
            } else {
                printf("\n🤝 EMPATE!\n");
            }
            break;

        case 3: // PIB
            printf("\n💰 PIB:\n");
            printf("%s (%s): R$ %.2f bilhões\n", cidade1, estado1, pib1 / 1e9);
            printf("%s (%s): R$ %.2f bilhões\n", cidade2, estado2, pib2 / 1e9);

            if (pib1 > pib2) {
                printf("\n🎉 Vencedor: %s!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("\n🎉 Vencedor: %s!\n", cidade2);
            } else {
                printf("\n🤝 EMPATE!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("\n🏛️ PONTOS TURISTICOS:\n");
            printf("%s (%s): %d pontos\n", cidade1, estado1, pontos_turisticos1);
            printf("%s (%s): %d pontos\n", cidade2, estado2, pontos_turisticos2);

            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("\n🎉 Vencedor: %s!\n", cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("\n🎉 Vencedor: %s!\n", cidade2);
            } else {
                printf("\n🤝 EMPATE!\n");
            }
            break;

        case 5: // Densidade (quanto menor, melhor)
            printf("\n👥 DENSIDADE (menor é melhor):\n");
            printf("%s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
            printf("%s (%s): %.2f hab/km²\n", cidade2, estado2, densidade2);

            if (densidade1 < densidade2) {
                printf("\n🎉 Vencedor: %s!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("\n🎉 Vencedor: %s!\n", cidade2);
            } else {
                printf("\n🤝 EMPATE!\n");
            }
            break;

        default: // Se digitar algo errado
            printf("\n❌ ERRO: Opção inválida! Use números de 1 a 5.\n");
            return 1; // Encerra o programa com erro
    }

    // Mostra todos os dados no final
    printf("\n📊 === DADOS COMPLETOS === 📊\n");
    printf("\n📌 %s (%s):\n", cidade1, estado1);
    printf("- População: %lu hab.\n", populacao1);
    printf("- Área: %.2f km²\n", area1);
    printf("- PIB: R$ %.2f bilhões\n", pib1 / 1e9);
    printf("- Pontos turísticos: %d\n", pontos_turisticos1);
    printf("- Densidade: %.2f hab/km²\n", densidade1);

    printf("\n📌 %s (%s):\n", cidade2, estado2);
    printf("- População: %lu hab.\n", populacao2);
    printf("- Área: %.2f km²\n", area2);
    printf("- PIB: R$ %.2f bilhões\n", pib2 / 1e9);
    printf("- Pontos turísticos: %d\n", pontos_turisticos2);
    printf("- Densidade: %.2f hab/km²\n", densidade2);

    printf("\n=== FIM DO JOGO ===\n");
    return 0;
}
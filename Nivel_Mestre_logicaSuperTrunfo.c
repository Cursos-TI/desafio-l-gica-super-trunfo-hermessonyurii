#include <stdio.h>
/*
 * Tarefa da Faculdade
 * DISCIPLINA: Programando em C
 *
 * Desafio: Desafio Lógica Super Trunfo - Nível Mestre
 * Objetivo: Implementando Comparações Avançadas com Atributos Múltiplos em C
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
    unsigned long populacao1 = 957916;
    float area1 = 509.6f;
    double pib1 = 27484016310.31;
    int pontos_turisticos1 = 15;
    float densidade1 = populacao1 / area1;

    // Dados da Carta 2: Florianópolis (SC)
    char estado2[] = "SC";
    char cidade2[] = "Florianopolis";
    unsigned long populacao2 = 7610361;
    float area2 = 674.844f;
    double pib2 = 65296490000.0;
    int pontos_turisticos2 = 15;
    float densidade2 = populacao2 / area2;

    int atributo1, atributo2;
    float soma_carta1 = 0, soma_carta2 = 0;

    // Menu para escolher o PRIMEIRO atributo
    printf("\n🌟 === SUPER TRUNFO - NIVEL MESTRE === 🌟\n");
    printf("\n📌 Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1️⃣  - POPULACAO\n");
    printf("2️⃣  - AREA\n");
    printf("3️⃣  - PIB\n");
    printf("4️⃣  - PONTOS TURISTICOS\n");
    printf("5️⃣  - DENSIDADE\n");
    printf("\n👉 Digite sua escolha (1-5): ");
    scanf("%d", &atributo1);

    // Verifica se a escolha é válida
    if (atributo1 < 1 || atributo1 > 5) {
        printf("\n❌ ERRO: Opção inválida! Use números de 1 a 5.\n");
        return 1;
    }

    // Menu para escolher o SEGUNDO atributo (dinâmico)
    printf("\n📌 Escolha o SEGUNDO atributo (diferente do primeiro):\n");
    
    // Mostra apenas as opções não escolhidas antes
    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            switch (i) {
                case 1: printf("1️⃣  - POPULACAO\n"); break;
                case 2: printf("2️⃣  - AREA\n"); break;
                case 3: printf("3️⃣  - PIB\n"); break;
                case 4: printf("4️⃣  - PONTOS TURISTICOS\n"); break;
                case 5: printf("5️⃣  - DENSIDADE\n"); break;
            }
        }
    }
    
    printf("\n👉 Digite sua escolha: ");
    scanf("%d", &atributo2);

    // Verifica se a segunda escolha é válida e diferente da primeira
    if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
        printf("\n❌ ERRO: Opção inválida ou repetida! Escolha um atributo diferente.\n");
        return 1;
    }

    printf("\n⚡ === RESULTADO DA COMPARACAO === ⚡\n");
    printf("\n🔹 Carta 1: %s (%s)\n", cidade1, estado1);
    printf("🔹 Carta 2: %s (%s)\n", cidade2, estado2);

    // Comparação do PRIMEIRO atributo
    printf("\n📊 COMPARACAO 1:\n");
    switch (atributo1) {
        case 1: // População
            printf("📌 POPULACAO (maior vence):\n");
            printf("%s: %lu hab.\n", cidade1, populacao1);
            printf("%s: %lu hab.\n", cidade2, populacao2);
            soma_carta1 += populacao1;
            soma_carta2 += populacao2;
            break;

        case 2: // Área
            printf("📌 AREA (maior vence):\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            soma_carta1 += area1;
            soma_carta2 += area2;
            break;

        case 3: // PIB
            printf("📌 PIB (maior vence):\n");
            printf("%s: R$ %.2f bilhões\n", cidade1, pib1 / 1e9);
            printf("%s: R$ %.2f bilhões\n", cidade2, pib2 / 1e9);
            soma_carta1 += pib1 / 1e9;
            soma_carta2 += pib2 / 1e9;
            break;

        case 4: // Pontos Turísticos
            printf("📌 PONTOS TURISTICOS (maior vence):\n");
            printf("%s: %d pontos\n", cidade1, pontos_turisticos1);
            printf("%s: %d pontos\n", cidade2, pontos_turisticos2);
            soma_carta1 += pontos_turisticos1;
            soma_carta2 += pontos_turisticos2;
            break;

        case 5: // Densidade (menor vence)
            printf("📌 DENSIDADE (menor vence):\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            soma_carta1 -= densidade1; // Subtrai porque menor valor vence
            soma_carta2 -= densidade2;
            break;
    }

    // Comparação do SEGUNDO atributo
    printf("\n📊 COMPARACAO 2:\n");
    switch (atributo2) {
        case 1: // População
            printf("📌 POPULACAO (maior vence):\n");
            printf("%s: %lu hab.\n", cidade1, populacao1);
            printf("%s: %lu hab.\n", cidade2, populacao2);
            soma_carta1 += populacao1;
            soma_carta2 += populacao2;
            break;

        case 2: // Área
            printf("📌 AREA (maior vence):\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            soma_carta1 += area1;
            soma_carta2 += area2;
            break;

        case 3: // PIB
            printf("📌 PIB (maior vence):\n");
            printf("%s: R$ %.2f bilhões\n", cidade1, pib1 / 1e9);
            printf("%s: R$ %.2f bilhões\n", cidade2, pib2 / 1e9);
            soma_carta1 += pib1 / 1e9;
            soma_carta2 += pib2 / 1e9;
            break;

        case 4: // Pontos Turísticos
            printf("📌 PONTOS TURISTICOS (maior vence):\n");
            printf("%s: %d pontos\n", cidade1, pontos_turisticos1);
            printf("%s: %d pontos\n", cidade2, pontos_turisticos2);
            soma_carta1 += pontos_turisticos1;
            soma_carta2 += pontos_turisticos2;
            break;

        case 5: // Densidade (menor vence)
            printf("📌 DENSIDADE (menor vence):\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            soma_carta1 -= densidade1; // Subtrai porque menor valor vence
            soma_carta2 -= densidade2;
            break;
    }

    // Resultado final (soma dos atributos)
    printf("\n📌 SOMA DOS ATRIBUTOS:\n");
    printf("%s: %.2f pontos\n", cidade1, soma_carta1);
    printf("%s: %.2f pontos\n", cidade2, soma_carta2);

    // Verifica quem venceu
    if (soma_carta1 > soma_carta2) {
        printf("\n🎉 VENCEDOR: %s (%s)!\n", cidade1, estado1);
    } else if (soma_carta2 > soma_carta1) {
        printf("\n🎉 VENCEDOR: %s (%s)!\n", cidade2, estado2);
    } else {
        printf("\n🤝 EMPATE! As cartas têm a mesma pontuação.\n");
    }

    printf("\n=== FIM DO JOGO ===\n");
    return 0;
}
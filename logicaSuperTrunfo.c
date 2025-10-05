#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado, estado2;
    char nome[50], nome2[50];
    char codigo[4], codigo2[4];
    unsigned long int populacao, populacao2;
    int pontos_turisticos, pontos_turisticos2;
    float area, area2, pib, pib2, densidade1, densidade2, capita1, capita2;
    float poder1, poder2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("Por favor insira os dados da primeira carta.\n\n");

    printf("Estado: ");
    scanf("%c", &estado);

    printf("Codigo: ");
    scanf("%s", &codigo);

    printf("Nome da cidade: ");
    scanf("%s", &nome);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Area: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    //Coleta de dados da segunda carta

    printf("Por favor insira os dados da segunda carta.\n\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", &codigo2);

    printf("Nome da cidade: ");
    scanf("%s", &nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    //Calculo da densidade populacional

    densidade1 = populacao / area;
    densidade2 = populacao2 / area2;

    //Calculo da PIB per capita

    capita1 = pib / populacao;
    capita2 = pib2 / populacao2;

    //Calculo do Super Poder

    poder1 = (float) populacao + area + pib + pontos_turisticos + capita1 - densidade1;
    poder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + capita2 - densidade2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("Carta 1(%s) - População: %d\n", nome, populacao);
    printf("Carta 2(%s) - População: %d\n", nome2, populacao2);

    if (populacao > populacao2){
        printf("A Carta 1 (%s) venceu!\n", nome);
    } else {
        printf("A Carta 2 (%s) venceu!\n", nome2);
    }

    return 0;
}

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Introdução do jogo
    
    printf("\n");
    printf("-------------------------\n");
    printf("Seja muito bem-vindo(a) ao Super Trunfo\n");
    printf("-------------------------\n");
    printf("\n");

    //Cadastrar a primeira carta
    printf("\n");
    printf("-------------------------\n");
    printf("Vamos cadastrar a sua primeira carta\n");
    printf("-------------------------\n");
    printf("\n");

    //Código da carta
    char codigo[50];
    printf("Digite o código da sua carta: \n");
    scanf("%s", codigo);

    //Estado
    char estado[50];
    printf("Digite o estado da sua carta: \n");
    scanf("%s", estado);

    //Nome da cidade
    char nome_cidade[20];
    printf("Digite o nome da cidade da sua carta: \n");
    scanf("%s", nome_cidade);

    //População
    float populacao;
    printf("Digite a população da sua cidade: \n");
    scanf("%f", &populacao);

    //Área
    float area;
    printf("Digite a extensão da sua cidade: \n");
    scanf("%f", &area);

    //PIB
    float pib;
    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib);

    //Número de pontos turísticos
    int numero_t;
    printf("Digite o número de pontos turísticos da sua cidade: \n");
    scanf("%d", &numero_t);

    //Calcular a densidade populacional
    float densidade = (populacao / area);

    //Calcular o pib per capita
    float pib_capita = (pib / populacao) * 1000;

    //Cadastrar a segunda carta
    printf("\n");
    printf("-------------------------\n");
    printf("Vamos cadastrar a sua segunda carta\n");
    printf("-------------------------\n");
    printf("\n");


    char codigo2[50];
    printf("Digite o código da sua carta: \n");
    scanf("%s", codigo2);

    //Estado
    char estado2[50];
    printf("Digite o estado da sua carta: \n");
    scanf("%s", estado2);

    //Nome da cidade
    char nome_cidade2[20];
    printf("Digite o nome da cidade da sua carta: \n");
    scanf("%s", nome_cidade2);

    //População
    float populacao2;
    printf("Digite a população da sua cidade: \n");
    scanf("%f", &populacao2);

    //Área
    float area2;
    printf("Digite a área da sua cidade: \n");
    scanf("%f", &area2);

    //PIB
    float pib2;
    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &pib2);

    //Número de pontos turísticos
    int numero_t2;
    printf("Digite o número de pontos turísticos da sua cidade: \n");
    scanf("%d", &numero_t2);

    //Calcular a densidade populacional
    float densidade2 = (populacao2 / area2);

    //Calcular o pib per capita
    float pib_capita2 = (pib2 / populacao2) * 1000;

    //Texto
    printf("\n");
    printf("-------------------------\n");
    printf("Comparando as duas cartas...\n");
    printf("-------------------------\n");
    printf("\n");

    //Exibir a primeira carta
    printf("\n");
    printf("-------------------------\n");
    printf("Primeira carta: %s\n", codigo);
    printf("-------------------------\n");
    printf("\n");

    printf("Carta 01\n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", nome_cidade);
    printf("População: %.2f\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", numero_t);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB per Capita: %.2f\n", pib_capita);

    //Exibir a segunda carta
    printf("\n");
    printf("-------------------------\n");
    printf("Segunda carta: %s\n", codigo2);
    printf("-------------------------\n");
    printf("\n");

    printf("Carta 02\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", numero_t2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_capita2);

    return 0;
}

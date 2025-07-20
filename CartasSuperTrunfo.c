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
    int populacao;
    printf("Digite a população da sua cidade: \n");
    scanf("%d", &populacao);

    //Área
    float area;
    printf("Digite a extensão da sua cidade: \n");
    scanf("%.2f", &area);

    //PIB
    int pib;
    printf("Digite o PIB da sua cidade: \n");
    scanf("%d", &pib);

    //Número de pontos turísticos
    int numero_t;
    printf("Digite o número de pontos turísticos da sua cidade: \n");
    scanf("%d", &numero_t);

    //Cadastrar a segunda carta
    printf("\n");
    printf("-------------------------\n");
    printf("Vamos cadastrar a sua segunda carta\n");
    printf("-------------------------\n");
    printf("\n");


    //Código da carta
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
    int populacao2;
    printf("Digite a população da sua cidade: \n");
    scanf("%d", &populacao2);

    //Área
    float area2;
    printf("Digite a extensão da sua cidade: \n");
    scanf("%.2f", &area2);

    //PIB
    int pib2;
    printf("Digite o PIB da sua cidade: \n");
    scanf("%d", &pib2);

    //Número de pontos turísticos
    int numero_t2;
    printf("Digite o número de pontos turísticos da sua cidade: \n");
    scanf("%d", &numero_t2);

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

    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %i\n", pib);
    printf("Número de pontos turísticos: %i\n", numero_t);

    //Exibir a segunda carta
    printf("\n");
    printf("-------------------------\n");
    printf("Primeira carta: %s\n", codigo2);
    printf("-------------------------\n");
    printf("\n");

    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %i\n", pib2);
    printf("Número de pontos turísticos: %i\n", numero_t2);



    return 0;
}

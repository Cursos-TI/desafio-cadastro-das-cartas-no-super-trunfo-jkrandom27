#include <stdio.h>

int main(){

    //Variáveis
    int unsigned long populacao, populacao2;
    int p_turisticos, p_turisticos2, cidade, cidade2;
    float area, area2, pib, pib2;
    char estado[5], estado2[5];

    //Entrada de Dados Carta 1
    printf("Seja muito bem vindo(a) ao SuperTruco - Países\n");
    printf("\n");
    printf("Cadastre a carta 1:\n");
    printf("Estado: "); scanf("%s", estado);
    printf("Cidade: "); scanf("%d", &cidade);
    printf("População: "); scanf("%lu", &populacao);
    printf("Área: "); scanf("%f",&area);
    printf("Pib: "); scanf("%f", &pib);
    printf("Pontos Turísticos: "); scanf("%d", &p_turisticos);
    printf("\n");

    //Entrada de Dados Carta 2
    printf("Cadastre a carta 2:");
    printf("\n");
    printf("Estado: "); scanf("%s", estado2);
    printf("Nome da Cidade: "); scanf("%d", &cidade2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área: "); scanf("%f",&area2);
    printf("Pib: "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &p_turisticos2);
    printf("\n");
    

    //Cálculo da Densidade Populacional e Pib per Capita
    float densidade = (float) populacao / area;
    float densidade2 = (float) populacao2 / area2;
    float pib_capita = pib / (float) populacao;
    float pib_capita2 = pib2 / (float) populacao2;

    //Cálculo do Super Poder
    float superpoder = ((float) populacao + area + pib + (float) p_turisticos + pib_capita + ( 1.0f / densidade));
    float superpoder2 = ((float) populacao2 + area2 + pib2 + (float) p_turisticos2 + pib_capita2 + ( 1.0f / densidade));

    //Imprimindo resultados
    printf("Comparando as duas cartas...\n");
    printf("\n");

    //Imprimindo as informações da Carta 1
    printf("Carta 1\n");
    printf("\n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %d\n", cidade);
    printf("Código: %s", estado); printf("0"); printf("%d\n", cidade);
    printf("População: %lu pessoas\n", populacao);
    printf("Pontos Turísticos: %d\n", p_turisticos);
    printf("Área: %.2f km²\n", area);
    printf("Pib: %.2f bilhões\n", pib);
    printf("Densidade Populacionnal: %.2f hab/km²\n", densidade);
    printf("Pib per Capita: %.2f reais\n", pib_capita);
    printf("Super Poder: %.2f", superpoder);
    printf("\n");

    //Imprimindo as informações da Carta 2
    printf("\n");
    printf("Carta 2\n");
    printf("\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %d\n", cidade2);
    printf("Código: %s", estado2); printf("0"); printf("%d\n", cidade2);
    printf("População: %lu pessoas\n", populacao2);
    printf("Pontos Turísticos: %d\n", p_turisticos2);
    printf("Área: %.2f km²\n", area2);
    printf("Pib: %.2f bilhões\n", pib2);
    printf("Densidade Populacionnal: %.2f hab/km²\n", densidade2);
    printf("Pib per Capita: %.2f reais\n", pib_capita2);
    printf("Super Poder: %.2f", superpoder2);
    printf("\n");

    //Combate...
    printf("\n");
    printf("Hora da Batalha...\n");
    printf("\n");
    int resultadoPopulacao = populacao > populacao2;
    printf("População: %d Ganhou\n", resultadoPopulacao);
    int resultadoPontos = p_turisticos > p_turisticos2;
    printf("Pontos Turísticos: %d Ganhou\n", resultadoPontos);
    int resultadoArea = area > area2;
    printf("Área: %d Ganhou\n", resultadoArea);
    int resultadoPib = pib > pib2;
    printf("Pib: %d Ganhou\n", resultadoPib);
    int resultadoDensidade = densidade > densidade2;
    printf("Densidade Populacional: %d Ganhou\n", resultadoDensidade);
    int resultadoPibCapita = pib_capita > pib_capita2;
    printf("Pib per Capita: %d Ganhou\n", resultadoPibCapita);
    int resultadoSuperPoder = superpoder > superpoder2;
    printf("Super Poder: %d Ganhou\n", resultadoSuperPoder);
    printf("\n");

    return 0;

}
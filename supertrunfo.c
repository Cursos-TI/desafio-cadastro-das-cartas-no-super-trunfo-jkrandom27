#include <stdio.h>

int main(){

    //Variáveis
    unsigned long int populacao, populacao2;
    int pTuristicos, pTuristicos2;
    float area, area2, pib, pib2;
    char estado[10], estado2[10], cidade[10], cidade2[10], codigo[10], codigo2[10];

    //Menu
    printf("Olá, Seja bem-vindo(a) ao Super Trunfo - Países\n");
    printf("\nCadastre as suas cartas...\n");

    //Entrada de dados carta 1
    printf("\nCarta 01:\n");

    //Estado
    printf("Digite o nome do seu estado: "); scanf("%s", estado);

    //Código da Carta
    printf("Digite o código da carta: "); scanf("%s", codigo);

    //Nome da Cidade
    printf("Digite o nome da sua cidade: "); scanf("%s", cidade);

    //População
    printf("Digite a população: "); scanf("%lu", &populacao);

    //Área
    printf("Digite a área: "); scanf("%f", &area);

    //PIB
    printf("Digite o PIB(em bilhão): "); scanf("%f", &pib);

    //Número de pontos Turísticos
    printf("Digite a quantidade de pontos turísticos: "); scanf("%d", &pTuristicos);

    //Entrada de dados carta 2
    printf("\nCarta 02:\n");

    //Estado
    printf("Digite o nome do seu estado: "); scanf("%s", estado2);

    //Código da Carta
    printf("Digite o código da carta: "); scanf("%s", codigo2);

    //Nome da Cidade
    printf("Digite o nome da sua cidade: "); scanf("%s", cidade2);

    //População
    printf("Digite a população: "); scanf("%lu", &populacao2);

    //Área
    printf("Digite a área: "); scanf("%f", &area2);

    //PIB
    printf("Digite o PIB(em bilhão): "); scanf("%f", &pib2);

    //Número de pontos Turísticos
    printf("Digite a quantidade de pontos turísticos: "); scanf("%d", &pTuristicos2);

    //Calcular densidade populacional, pib per capita e super poder
    float densidade, densidade2, pibCapita, pibCapita2, superpoder, superpoder2;

    densidade = (float) populacao / area;
    pibCapita = (float) (pib * 1000000000) / populacao;
    densidade2 = (float) populacao2 / area2;
    pibCapita2 = (float) (pib2 * 1000000000) / populacao2;
    superpoder = (float) (populacao + area + pib + pTuristicos + pibCapita + 1.0/densidade2);
    superpoder2 = (float) (populacao2 + area2 + pib2 + pTuristicos2 + pibCapita2 + 1.0/densidade2);

    //Mostrar dados

    //Carta 1
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("N° de pontos turísticos: %d\n", pTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("Pib per Capita: %.2f reais\n", pibCapita);
    printf("Super poder: %.2f\n", superpoder);

    //Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("N° de pontos turísticos: %d\n", pTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("Pib per Capita: %.2f reais\n", pibCapita2);
    printf("Super poder: %.2f\n", superpoder2);

    //Comparação
    printf("\nComprarando as duas cartas...\n");
    printf("\nCarta 1\n");
    if (populacao > populacao2){
        printf("População: Carta 1 venceu\n");
    } else {
        printf("População: Carta 2 venceu\n");
        }
    if (area > area2){
        printf("Área: Carta 1 venceu\n");
    } else {
        printf("Área: Carta 2 venceu\n");
        }
    if (pib > pib2){
        printf("PIB: Carta 1 venceu\n");
    } else {
        printf("PIB: Carta 2 venceu\n");;
        }
    if (pTuristicos > pTuristicos2){
        printf("N° de pontos turísticos: Carta 1 venceu\n");
    } else {
        printf("N° de pontos turísticos: Carta 2 venceu\n");
        }
    if (densidade > densidade2){
        printf("Densidade populacional: Carta 1 venceu\n");
    } else {
        printf("Densidade populacional: Carta 2 venceu\n");
        }
    if (pibCapita > pibCapita2){
        printf("Pib per capita: Carta 1 venceu\n");
    } else {
        printf("Pib per capita: Carta 2 venceu\n");
        }
    if (superpoder > superpoder2){
        printf("Super poder: Carta 1 venceu\n");
    } else {
        printf("Super poder: Carta 2 venceu\n");
        }


        
    
    return 0;

}
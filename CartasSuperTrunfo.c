#include <stdio.h>
#include "Menu.c"
#include "Game.c"

int main(){

    //Chamar o menu interativo
    menu();

    //Escolha das opções

    //Variáveis
    int escolha;

    //Entrada de dados
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    //Decisão do usuários
    switch (escolha){
    case 1:
        //Inicia o jogo
        jogo();
        break;
    case 2:
        //Opçoes
        printf("\n");
        printf("Função em andamento...");
        printf("\n");
        main();
    case 3:
        //Sair
        printf("\n");
        printf("Jogo finalizado, obrigado por jogar!");
        printf("\n");
        break;
    default:
        //Opção inválida
        printf("\n");
        printf("Opção inválida");
        printf("\n");
        break;
    }

    
    return 0;
    

}
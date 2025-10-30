#include <stdio.h>
#include <string.h>
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void verticalHorizontal(char escolha[],char comando[],int numCasa){
    if (strcmp(comando, "frente") == 0 || strcmp(comando, "tras") == 0 || strcmp(comando, "esquerda") == 0 || strcmp(comando, "direita") != 0) {  
        printf("\n%s foi %d casa para %s \n", escolha, numCasa, comando);
    }
}

void diagonal(char escolha[],char comando1[],char comando2[],int numCasa){
    if (strcmp(comando1, "frente") == 0 || strcmp(comando1, "tras") == 0) {  
        if(strcmp(comando2, "esquerda") == 0 || strcmp(comando2, "direita") == 0){
            printf("%s foi para %s na diagonal %s %d vezes", escolha, comando1, comando2, numCasa);
        }
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
char escolha[50];
    char peca[50];
    int casas;
    printf("\nEscolha Uma peça para mexer\n Bispo: b\n Torre: t\n Rainha: R\nlembrando que Torre Move-se em linha reta horizontalmente ou verticalmente até cinco casas\nBispo: Move-se na diagonal até cinco casas\nRainha: Move-se em todas as direções até oito casas\n");
    scanf("%s", &escolha);
   while (strcmp(escolha, "b") != 0 && strcmp(escolha, "t") != 0 && strcmp(escolha, "r") != 0) {
        printf("tem que escolher entre\ntorre: t\nrainha: r\nbispo: b\n");
        scanf("%s", escolha);
    }

    if (strcmp(escolha, "b") == 0){
        strcpy(escolha, "Bispo");
    }else if (strcmp(escolha, "t") == 0){
        strcpy(escolha, "Torre");
    }else if (strcmp(escolha, "r") == 0){
        strcpy(escolha, "Rainha");
    }

    printf("Você escolheu a(o) %s, agora escolhe o numero de casa que quer avançar:",escolha);
    printf("\nlembrando que:\nTorre Move-se em linha reta horizontalmente ou verticalmente até cinco casas\nBispo: Move-se na diagonal até cinco casas\nRainha: Move-se em todas as direções até oito casas\n");
    scanf("%d", &casas);
   
        if(strcmp(escolha, "Bispo") == 0){
            char direcao1[10];
            char direcao2[10];
            while (casas < 1 || casas > 5) {
                printf("bispo só pode escolher o numero de casa de 1 a 5\n");
                scanf("%d", &casas);
            }
            printf("\nescolha para onde quer ir frente ou tras?\n");
            scanf("%s", direcao1);
            while (strcmp(direcao1, "frente") != 0 && strcmp(direcao1, "tras") != 0) {
                printf("tem que escolher entre\nfrente ou tras\n");
                scanf("%s", direcao1);
            }
             printf("\nescolha para onde quer ir esquerda ou direita?\n");
            scanf("%s", direcao2);
            while (strcmp(direcao2, "esquerda") != 0 && strcmp(direcao2, "direita") != 0) {
                printf("tem que escolher entre\esquerda ou direita\n");
                scanf("%s", direcao2);
            }
            diagonal(escolha,direcao1,direcao2,casas);
        }if(strcmp(escolha, "Torre") == 0){
            char direcao[10];
            while (casas < 1 || casas > 5) {
                printf("Torre só pode escolher o numero de casa de 1 a 5\n");
                scanf("%d", &casas);
            }
            printf("\nescolha frente, tras, esquerda ou direita\n");
            scanf("%s", direcao);
            while (strcmp(direcao, "frente") != 0 && strcmp(direcao, "tras") != 0 && strcmp(direcao, "esquerda") != 0 && strcmp(direcao, "direita") != 0) {
                printf("tem que escolher entre\nesquerda, direita, tras ou frente\n");
                scanf("%s", direcao);
            }
            verticalHorizontal(escolha, direcao, casas);
        }if(strcmp(escolha, "Rainha") == 0){
            char diagonalEscolha[5];
            
                while (casas < 1 || casas > 8) {
                    printf("Rainha só pode escolher o numero de casa de 1 a 8\n");
                    scanf("%d", &casas);
                    
                }
            printf("\nquer que se mova em diagonal s/n?\n");
            scanf("%s", diagonalEscolha);
            do{
                if (strcmp(diagonalEscolha, "s") == 0) {
                    char direcao1[10];
                    char direcao2[10];
                    printf("\nescolha para onde quer ir frente ou tras?\n");
                    scanf("%s", direcao1);
                    while (strcmp(direcao1, "frente") != 0 && strcmp(direcao1, "tras") != 0) {
                        printf("tem que escolher entre\nfrente ou tras\n");
                        scanf("%s", direcao1);
                    }
                    printf("\nescolha para onde quer ir esquerda ou direita?\n");
                    scanf("%s", direcao2);
                    while (strcmp(direcao2, "esquerda") != 0 && strcmp(direcao2, "direita") != 0) {
                        printf("tem que escolher entre\esquerda ou direita\n");
                        scanf("%s", direcao2);
                    }    
                    diagonal(escolha,direcao1,direcao2,casas);
                }else if (strcmp(diagonalEscolha, "n") == 0) {
                    char direcao[10];
                    printf("\nescolha frente, tras, esquerda ou direita\n");
                    scanf("%s", direcao);
                    while (strcmp(direcao, "frente") != 0 && strcmp(direcao, "tras") != 0 && strcmp(direcao, "esquerda") != 0 && strcmp(direcao, "direita") != 0) {
                        printf("tem que escolher entre\nesquerda, direita, tras ou frente\n");
                        scanf("%s", direcao);
                    }
                    verticalHorizontal(escolha, direcao, casas);
                }else{
                    printf("\nvalor invalido é s ou n\nEscolha se quer mover na diagonal(s/n)\n");
                    scanf("%s", diagonalEscolha);
                }
            }while (strcmp(diagonalEscolha, "s") != 0 && strcmp(diagonalEscolha, "n") != 0);
        }
    return 0;
}

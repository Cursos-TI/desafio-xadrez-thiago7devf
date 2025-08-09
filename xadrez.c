#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//Desafio Novato movimento de Peças Xadrez

int main() {
    // Quantidade de casas que cada peça vai andar
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    int i; // variável de controle do loop

    // Movimento da Torre (FOR)
    printf("Movimento da Torre:\n");
    for (i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (WHILE)
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da Rainha (DO-WHILE)
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= movimentoRainha);

    return 0;
}
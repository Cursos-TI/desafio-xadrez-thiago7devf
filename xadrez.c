#include <stdio.h>

/*
    Desafio Final - Movimentos Complexos de Peças de Xadrez

    Torre, Bispo e Rainha -> Funções recursivas
    Cavalo -> Loops aninhados com múltiplas condições (duas casas para cima, uma para direita)
    Bispo -> Recursividade + loops aninhados (vertical externo, horizontal interno)


*/

// --- Função recursiva para Torre ---
void moverTorre(int casas) {
    if (casas <= 0) return; // caso base
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// --- Função recursiva simples para Rainha ---
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// --- Função recursiva para Bispo ---
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// --- Função extra: loops aninhados para Bispo ---
void moverBispoAninhado(int casasVert, int casasHor) {
    for (int v = 1; v <= casasVert; v++) { // vertical externo
        for (int h = 1; h <= casasHor; h++) { // horizontal interno
            printf("Cima Direita\n");
        }
    }
}

void moverCavaloComplexo(int movimentos) {
    for (int m = 0; m < movimentos; m++) { // cada movimento em L
        for (int v = 1, h = 0; v <= 2 || h < 1; ) {
            // movimento vertical (2 casas)
            if (v <= 2) {
                printf("Cima\n");
                v++;
                continue; // volta para checar se ainda há movimentos verticais
            }
            // movimento horizontal (1 casa)
            if (h < 1) {
                printf("Direita\n");
                h++;
            }
            if (v > 2 && h >= 1) break; // fim do L
        }
    }
}

int main() {
    // Quantidade de casas
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int movimentosCavalo = 3; // quantas vezes ele faz o L

    // --- Torre ---
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf(" /n");

    // --- Bispo Recursivo ---
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);

    printf(" /n");

    // --- Bispo com Loops Aninhados ---
    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoAninhado(3, 3);

    printf(" /n");

    // --- Rainha ---
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    printf(" /n");

    // --- Cavalo ---
    printf("Movimento do Cavalo:\n");
    moverCavaloComplexo(movimentosCavalo);

    return 0;
}
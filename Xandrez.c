#include <stdio.h>

// Desafio de Xadrez, esse código possui todas as evoluções (novato, aventureiro e mestre)
// A lógica foi intregar todas as movimentações com o passar do cógico, não criando um novo.
// Aluna pretende usar essa base para fazer um jogo em C#. 

// Aluna: Rebeka Lorrayne
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverBispo(int casas) { // Função recursiva pro Mestre
    if (casas > 0) {
        printf("Cima e Direita %d\n", 5 - casas + 1);
        moverBispo(casas - 1);
    }
}

void moverTorre(int casas) { // Função recursiva pro Mestre
    if (casas > 0) {
        printf("Direita %d\n", 5 - casas + 1);
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas) { // Função recursiva pro Mestre
    if (casas > 0) {
        printf("Esquerda %d\n", 8 - casas + 1);
        moverRainha(casas - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    const int BISPO_CASAS = 5;
    const int TORRE_CASAS = 5;
    const int RAINHA_CASAS = 8;

    printf("Nivel Novato - Movimentacao das Pecas\n");

    // Implementação de Movimentação do Bispo
    printf("\nBispo:\n");
    for (int i = 1; i <= BISPO_CASAS; i++) {
        printf("Cima e Direita %d\n", i);
    }

    // Implementação de Movimentação da Torre
    printf("\nTorre:\n");
    for (int i = 1; i <= TORRE_CASAS; i++) {
        printf("Direita %d\n", i);
    }

    // Implementação de Movimentação da Rainha
    printf("\nRainha:\n");
    for (int i = 1; i <= RAINHA_CASAS; i++) {
        printf("Esquerda %d\n", i);
    }

    // Nível Aventureiro - Movimentação do Cavalo
    printf("\nNivel Aventureiro - Movimentacao do Cavalo\n");
    printf("\nCavalo (2 baixo, 1 esquerda):\n");
    for (int baixo = 1; baixo <= 2; baixo++) {
        printf("Baixo %d\n", baixo);
        int esquerda = 0;
        while (esquerda < 1) {
            esquerda++;
            printf("Esquerda %d\n", esquerda);
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    printf("\nNivel Mestre - Funcoes Recursivas e Loops\n");

    // Bispo com recursão
    printf("\nBispo:\n");
    moverBispo(BISPO_CASAS);

    // Torre com recursão
    printf("\nTorre:\n");
    moverTorre(TORRE_CASAS);

    // Rainha com recursão
    printf("\nRainha:\n");
    moverRainha(RAINHA_CASAS);

    // Cavalo com loops aninhados e break
    printf("\nCavalo (1 cima, 2 direita):\n");
    for (int cima = 1; cima <= 1; cima++) {
        printf("Cima %d\n", cima);
        for (int direita = 1; direita <= 2; direita++) {
            printf("Direita %d\n", direita);
            if (direita == 2) break;
        }
    }

    return 0;
}
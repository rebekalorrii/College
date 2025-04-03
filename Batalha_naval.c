#include <stdio.h>

// Desafio Batalha Naval 
// Aluna: Rebeka Lorrayne

int main() {
    // nivel novato - dois navios
    int tabuleiro[5][5] = {0}; // matriz 5x5 pra tabuleiro
    printf("Nivel Novato - Posicionamento dos Navios\n");

    
    tabuleiro[0][1] = 1;
    tabuleiro[1][1] = 1;
    tabuleiro[2][1] = 1;

    
    tabuleiro[3][0] = 1;
    tabuleiro[3][1] = 1;
    tabuleiro[3][2] = 1;

    printf("\nCoordenadas dos navios:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    // nivel aventureiro - tabuleiro maior
    int tabuleiro10[10][10] = {0}; // matriz 10x10 agora
    printf("\nNivel Aventureiro - Tabuleiro 10x10\n");

    // navio vertical em y=2
    tabuleiro10[0][2] = 3;
    tabuleiro10[1][2] = 3;
    tabuleiro10[2][2] = 3;
    tabuleiro10[3][2] = 3;

    // navio horizontal em x=5
    tabuleiro10[5][0] = 3;
    tabuleiro10[5][1] = 3;
    tabuleiro10[5][2] = 3;
    tabuleiro10[5][3] = 3;

    // navio diagonal cima-direita
    tabuleiro10[1][1] = 3;
    tabuleiro10[2][2] = 3;
    tabuleiro10[3][3] = 3;

    // outro diagonal baixo-direita
    tabuleiro10[6][1] = 3;
    tabuleiro10[7][2] = 3;
    tabuleiro10[8][3] = 3;

    
    printf("\nTabuleiro 10x10 (0 vazio, 3 navio):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro10[i][j]);
        }
        printf("\n");
    }

    // nivel mestre 
    int tabuleiro_habilidade[5][5] = {0}; // matriz 5x5 pras habilidade
    printf("\nNivel Mestre - Habilidades Especiais\n");

    
    for (int j = 0; j < 5; j++) {
        tabuleiro_habilidade[2][j] = 1; 
    }
    tabuleiro_habilidade[1][1] = 1;
    tabuleiro_habilidade[1][2] = 1;
    tabuleiro_habilidade[1][3] = 1;
    tabuleiro_habilidade[0][2] = 1;

    printf("\nHabilidade Cone:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro_habilidade[i][j]);
        }
        printf("\n");
    }

    // cruz no centro
    for (int i = 0; i < 5; i++) {
        tabuleiro_habilidade[i][2] = 1; // vertical da cruz
    }
    for (int j = 0; j < 5; j++) {
        tabuleiro_habilidade[2][j] = 1; // horizontal da cruz
    }

    printf("\nHabilidade Cruz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro_habilidade[i][j]);
        }
        printf("\n");
    }

    // octaedro no centro
    tabuleiro_habilidade[0][2] = 0; // limpando pra octaedro
    tabuleiro_habilidade[1][1] = 0;
    tabuleiro_habilidade[1][2] = 0;
    tabuleiro_habilidade[1][3] = 0;
    tabuleiro_habilidade[2][0] = 0;
    tabuleiro_habilidade[2][1] = 0;
    tabuleiro_habilidade[2][2] = 1; // centro
    tabuleiro_habilidade[2][3] = 0;
    tabuleiro_habilidade[2][4] = 0;
    tabuleiro_habilidade[3][1] = 0;
    tabuleiro_habilidade[3][2] = 0;
    tabuleiro_habilidade[3][3] = 0;
    tabuleiro_habilidade[4][2] = 0;

    tabuleiro_habilidade[1][2] = 1;
    tabuleiro_habilidade[2][1] = 1;
    tabuleiro_habilidade[2][3] = 1;
    tabuleiro_habilidade[3][2] = 1;

    printf("\nHabilidade Octaedro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro_habilidade[i][j]);
        }
        printf("\n");
    }

    return 0;
}
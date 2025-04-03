#include <stdio.h>
#include <string.h>

// Aluna: Rebeka Lorrayne
// Resumo: Código com menu pra escolher dois atributos, compara com if aninhado e ternário, exibe vencedor ou empate.


typedef struct {  // mantendo estrutura de declarações
    char codigo[4];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

void cadastrarCidade(Cidade *c) {
    printf("Digite o codigo (ex: A01): ");
    scanf("%s", c->codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", c->nome);
    printf("Digite a populacao: ");
    scanf("%d", &c->populacao);
    printf("Digite a area (km2): ");
    scanf("%f", &c->area);
    printf("Digite o PIB (bilhoes): ");
    scanf("%f", &c->pib);
    printf("Digite os pontos turisticos: ");
    scanf("%d", &c->pontos_turisticos);
}

void exibirCidade(Cidade c) {
    printf("\nCarta: %s - %s\n", c.codigo, c.nome);
    printf("Populacao: %d\n", c.populacao);
    printf("Area: %.2f km2\n", c.area);
    printf("PIB: %.2f bilhoes\n", c.pib);
    printf("Pontos Turisticos: %d\n", c.pontos_turisticos);
}

int main() {
    Cidade c1, c2;
    int op1, op2;

    printf("Cadastro da primeira carta:\n");
    cadastrarCidade(&c1);
    printf("\nCadastro da segunda carta:\n");
    cadastrarCidade(&c2);

    exibirCidade(c1);
    exibirCidade(c2);

    printf("\nEscolha dois atributos pra comparar:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n");
    printf("Primeiro atributo: ");
    scanf("%d", &op1);
    printf("Segundo atributo: ");
    scanf("%d", &op2);

    int v1 = 0, v2 = 0; // Contador de vitórias

    // Primeiro atributo
    if (op1 == 1) {
        v1 += (c1.populacao > c2.populacao) ? 1 : 0;
        v2 += (c2.populacao > c1.populacao) ? 1 : 0;
    } else if (op1 == 2) {
        v1 += (c1.area > c2.area) ? 1 : 0;
        v2 += (c2.area > c1.area) ? 1 : 0;
    } else if (op1 == 3) {
        v1 += (c1.pib > c2.pib) ? 1 : 0;
        v2 += (c2.pib > c1.pib) ? 1 : 0;
    } else if (op1 == 4) {
        v1 += (c1.pontos_turisticos > c2.pontos_turisticos) ? 1 : 0;  // Comparações
        v2 += (c2.pontos_turisticos > c1.pontos_turisticos) ? 1 : 0;
    }

    // Segundo atributo
    if (op2 == 1) {
        v1 += (c1.populacao > c2.populacao) ? 1 : 0;
        v2 += (c2.populacao > c1.populacao) ? 1 : 0;
    } else if (op2 == 2) {
        v1 += (c1.area > c2.area) ? 1 : 0;
        v2 += (c2.area > c1.area) ? 1 : 0;
    } else if (op2 == 3) {
        v1 += (c1.pib > c2.pib) ? 1 : 0;
        v2 += (c2.pib > c1.pib) ? 1 : 0;
    } else if (op2 == 4) {
        v1 += (c1.pontos_turisticos > c2.pontos_turisticos) ? 1 : 0;
        v2 += (c2.pontos_turisticos > c1.pontos_turisticos) ? 1 : 0;
    }

    // Decide o vencedor
    if (v1 > v2)
        printf("\nVencedor: %s com %d vitorias!\n", c1.codigo, v1);
    else if (v2 > v1)
        printf("\nVencedor: %s com %d vitorias!\n", c2.codigo, v2);
    else
        printf("\nEmpate com %d vitorias cada!\n", v1);

    return 0;
}
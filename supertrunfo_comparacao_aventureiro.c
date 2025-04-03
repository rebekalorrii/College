#include <stdio.h>
#include <string.h>

// Aluna: Rebeka Lorrayne
// Resumo: Código com menu interativo pra comparar cartas por diferentes atributos, usando switch e if aninhado.

typedef struct {
    char codigo[4];
    char nome[20]; // Um vetor a mais do ultimo códigos
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

void cadastrarCidade(Cidade *c) {        // Mantendo a função de cadastro das cidades
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
    int opcao;

    printf("Cadastro da primeira carta:\n");
    cadastrarCidade(&c1);
    printf("\nCadastro da segunda carta:\n");
    cadastrarCidade(&c2);

    exibirCidade(c1);
    exibirCidade(c2);

    printf("\nEscolha o atributo pra comparar:\n");     // Menu onde usuario escolhe o atributo desejado
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n");
    scanf("%d", &opcao);

    switch (opcao) {        // Uso de cases pela quantidade de multi alternativas, não só o IF.
        case 1:
            if (c1.populacao > c2.populacao)
                printf("\nVencedor: %s\n", c1.codigo);
            else if (c2.populacao > c1.populacao)
                printf("\nVencedor: %s\n", c2.codigo);
            else
                printf("\nEmpate!\n");
            break;
        case 2:
            if (c1.area > c2.area)
                printf("\nVencedor: %s\n", c1.codigo);
            else if (c2.area > c1.area)
                printf("\nVencedor: %s\n", c2.codigo);
            else
                printf("\nEmpate!\n");
            break;
        case 3:
            if (c1.pib > c2.pib)
                printf("\nVencedor: %s\n", c1.codigo);
            else if (c2.pib > c1.pib)
                printf("\nVencedor: %s\n", c2.codigo);
            else
                printf("\nEmpate!\n");
            break;
        case 4:
            if (c1.pontos_turisticos > c2.pontos_turisticos)
                printf("\nVencedor: %s\n", c1.codigo);
            else if (c2.pontos_turisticos > c1.pontos_turisticos)
                printf("\nVencedor: %s\n", c2.codigo);
            else
                printf("\nEmpate!\n");
            break;
        default:
            printf("\nOpcao invalida!\n");
    }

    return 0;
}
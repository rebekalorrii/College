#include <stdio.h>
#include <string.h>

//Aluna: Rebeka Lorrayne
// Resumo: Código pra comparar duas cartas no Super Trunfo, com struct pra organizar e if pra decidir a vencedora pela população.

typedef struct {
    char codigo[4];
    char nome[20]; // vetor
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

int main() {            // Função das cidades
    Cidade c1, c2;

    printf("Cadastro da primeira carta:\n");
    cadastrarCidade(&c1);
    printf("\nCadastro da segunda carta:\n");
    cadastrarCidade(&c2);

    exibirCidade(c1);
    exibirCidade(c2);

    // Comparação pela população
    if (c1.populacao > c2.populacao) {
        printf("\nVencedor: %s com %d de populacao!\n", c1.codigo, c1.populacao);
    } else if (c2.populacao > c1.populacao) {
        printf("\nVencedor: %s com %d de populacao!\n", c2.codigo, c2.populacao);
    } else {
        printf("\nEmpate na populacao!\n");     // usado if como pedido
    }

    return 0;
}
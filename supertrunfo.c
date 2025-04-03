#include <stdio.h>
#include <string.h>

//Aluna: Rebeka Lorrayne - Nivel Novato
// Resumo: Criei uma struct para organizar os dados, usei typedef para facilitar e scanf para ler os dados da cidade, como pedido.
// Usei ponteiro para alterar a cidade direto, main para interagir com o usuário e %.2f para limitar decimais do PIB.


typedef struct {
    char codigo[4]; // Estrutura para guardar cadastro
    int populacao;  
    float area;     
    float pib;      
    int pontos_turisticos;
} Cidade;

// Função pra cadastrar uma cidade
void cadastrarCidade(Cidade *cidade) {
    printf("\n=== Cadastro de Cidade ===\n");
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", cidade->codigo);
    printf("Digite a populacao: ");
    scanf("%d", &cidade->populacao);
    printf("Digite a area (em km2): ");
    scanf("%f", &cidade->area);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &cidade->pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &cidade->pontos_turisticos);
}

// Função pra mostrar os dados de uma cidade
void exibirCidade(Cidade cidade) {
    printf("\n=== Dados da Cidade ===\n");
    printf("Codigo: %s\n", cidade.codigo);
    printf("Populacao: %d habitantes\n", cidade.populacao);
    printf("Area: %.2f km2\n", cidade.area);
    printf("PIB: %.2f bilhoes\n", cidade.pib);
    printf("Pontos Turisticos: %d\n", cidade.pontos_turisticos);
}

int main() {   // Função onde posso interagir com usuario 
    int num_cartas;
    printf("Quantas cartas voce quer cadastrar? ");
    scanf("%d", &num_cartas);

    // Array pra guardar as cidades
    Cidade cidades[num_cartas];

    // Loop pra cadastrar cada cidade
    for (int i = 0; i < num_cartas; i++) {
        printf("\nCadastrando carta %d de %d\n", i + 1, num_cartas);
        cadastrarCidade(&cidades[i]);
    }

    // Mostrando todas as cidades cadastradas
    printf("\n=== Cartas Cadastradas ===\n");
    for (int i = 0; i < num_cartas; i++) {
        exibirCidade(cidades[i]);
    }

    printf("\nCadastro concluido! Valeu por jogar!\n");
    return 0;
}
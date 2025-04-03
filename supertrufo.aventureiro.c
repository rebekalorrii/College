#include <stdio.h>
#include <string.h>

// Estrutura pra guardar os dados da cidade
typedef struct {
    char codigo[4]; 
    int populacao; 
    float area;     
    float pib;     
    int pontos_turisticos; 
    float densidade;     
    float pib_per_capita; 
} Cidade;

// Função pra cadastrar cidade
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

    
    cidade->densidade = (float)cidade->populacao / cidade->area;
    cidade->pib_per_capita = cidade->pib / cidade->populacao;
}

// Função pra mostrar os dados de uma cidade
void exibirCidade(Cidade cidade) {
    printf("\n=== Dados da Cidade ===\n");
    printf("Codigo: %s\n", cidade.codigo);
    printf("Populacao: %d habitantes\n", cidade.populacao);
    printf("Area: %.2f km2\n", cidade.area);
    printf("PIB: %.2f bilhoes\n", cidade.pib);
    printf("Pontos Turisticos: %d\n", cidade.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km2\n", cidade.densidade);
    printf("PIB per Capita: %.6f bilhoes/hab\n", cidade.pib_per_capita);
}

int main() {
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

    printf("\nCadastro concluido! Partiu pro proximo nivel?\n");
    return 0;
}
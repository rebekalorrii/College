#include <stdio.h>
#include <string.h>


typedef struct {
    char codigo[4]; 
    int populacao;  
    float area;     
    float pib;      
    int pontos_turisticos; 
    float densidade;      
    float pib_per_capita;
    float super_poder;    
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

    // Calculando as propriedades
    cidade->densidade = (float)cidade->populacao / cidade->area;
    cidade->pib_per_capita = cidade->pib / cidade->populacao;
    cidade->super_poder = cidade->populacao + cidade->area + cidade->pib + 
                          cidade->pontos_turisticos + cidade->densidade + 
                          cidade->pib_per_capita;
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
    printf("Super Poder: %.2f\n", cidade.super_poder);
}

// Função pra comparar duas cidades
void compararCidades(Cidade c1, Cidade c2) {
    printf("\n=== Comparacao entre %s e %s ===\n", c1.codigo, c2.codigo);

    // Comparando cada propriedade
    printf("Populacao: %s (%d) vs %s (%d) -> %s\n", 
           c1.codigo, c1.populacao, c2.codigo, c2.populacao, 
           c1.populacao > c2.populacao ? c1.codigo : c2.codigo);
    
    printf("Area: %s (%.2f) vs %s (%.2f) -> %s\n", 
           c1.codigo, c1.area, c2.codigo, c2.area, 
           c1.area > c2.area ? c1.codigo : c2.codigo);
    
    printf("PIB: %s (%.2f) vs %s (%.2f) -> %s\n", 
           c1.codigo, c1.pib, c2.codigo, c2.pib, 
           c1.pib > c2.pib ? c1.codigo : c2.codigo);
    
    printf("Pontos Turisticos: %s (%d) vs %s (%d) -> %s\n", 
           c1.codigo, c1.pontos_turisticos, c2.codigo, c2.pontos_turisticos, 
           c1.pontos_turisticos > c2.pontos_turisticos ? c1.codigo : c2.codigo);
    
    printf("Densidade: %s (%.2f) vs %s (%.2f) -> %s (menor vence)\n", 
           c1.codigo, c1.densidade, c2.codigo, c2.densidade, 
           c1.densidade < c2.densidade ? c1.codigo : c2.codigo);
    
    printf("PIB per Capita: %s (%.6f) vs %s (%.6f) -> %s\n", 
           c1.codigo, c1.pib_per_capita, c2.codigo, c2.pib_per_capita, 
           c1.pib_per_capita > c2.pib_per_capita ? c1.codigo : c2.codigo);
    
    printf("Super Poder: %s (%.2f) vs %s (%.2f) -> %s\n", 
           c1.codigo, c1.super_poder, c2.codigo, c2.super_poder, 
           c1.super_poder > c2.super_poder ? c1.codigo : c2.codigo);
}

int main() {
    Cidade cidade1, cidade2;

    // Cadastrando duas cidades pra comparar
    printf("Cadastrando a primeira carta:\n");
    cadastrarCidade(&cidade1);
    printf("\nCadastrando a segunda carta:\n");
    cadastrarCidade(&cidade2);

    // Mostrando os dados
    printf("\n=== Cartas Cadastradas ===\n");
    exibirCidade(cidade1);
    exibirCidade(cidade2);

    // Comparando as duas
    compararCidades(cidade1, cidade2);

    printf("\nFim do jogo! Quem diria que ia ser tao legal?\n");
    return 0;
}
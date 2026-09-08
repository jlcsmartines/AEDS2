/*
 Uma empresa possui 10 vendedores. Armazene em um vetor a quantidade de peças
vendidas por cada vendedor e, em outro vetor, o preço da peça correspondente. Calcule o
total vendido por cada vendedor e o total geral das vendas.
*/

#include <stdio.h>

#define VENDEDORES 2 // Para eu poder mudar a quantidade e testar

int main() {

    int pecas[VENDEDORES];
    float valores[VENDEDORES];
    float total_geral = 0;
    
    // Leitura dos dados
    for(int i = 0; i < VENDEDORES; i++){
        printf("--- Vendedor %d ---\n", i + 1);

        printf("Digite a quantidade de pecas vendidas: ");
        scanf("%d", &pecas[i]);

        printf("Digite o valor unitario da peca: ");
        scanf("%f", &valores[i]);
    }

    printf("\n===================================\n");
    printf("        RESUMO DAS VENDAS          \n");
    printf("===================================\n");

    // Cálculo e exibição do total por vendedor e total geral
    for(int i = 0; i < VENDEDORES; i++){
        float total_vendedor = pecas[i] * valores[i];
        
        // Mostra o total vendido por cada vendedor
        printf("Vendedor %d vendeu um total de: R$ %.2f\n", i + 1, total_vendedor);
        
        // Soma ao total geral
        total_geral += total_vendedor;
    }

    // Mostra o total geral
    printf("-----------------------------------\n");
    printf("Total geral de todas as vendas: R$ %.2f\n", total_geral);

    return 0;
}

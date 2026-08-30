/*
 Uma empresa possui 10 vendedores. Armazene em um vetor a quantidade de peças
vendidas por cada vendedor e, em outro vetor, o preço da peça correspondente. Calcule o
total vendido por cada vendedor e o total geral das vendas.
*/

#include <stdio.h>

int main() {

    int vendedores = 2, auxx=0;
    int pecas[vendedores];
    float valores[vendedores], aux=0;
    
    for(int i = 0; i < vendedores; i++){ //Vendedores
        
        printf("Vendedor %d:\n", i+1);

        printf("Digite a quantidade de peças: ");
        scanf("%d", &pecas[i]);

        printf("Digite o valor da peça: ");
        scanf("%f", &valores[i]);

    }

    for(int i = 0; i < vendedores; i++){ //Total
        auxx += pecas[i];
        aux += (valores[i]*pecas[i]);
    }

    printf("Total de peças: %d\n Total: %f\n", auxx, aux);

    return 0;
}

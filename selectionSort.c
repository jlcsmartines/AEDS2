//Selection Sort

#include <stdio.h>

int main(void){

    int v[] = {42, 17, 89, 3, 56, 74, 21, 99, 8, 65};
    int aux, posmenor;
    int numTrocas = 0, numComparacoes = 0;

    // para descobrir o tamanho do vetor em C, é com essa formula. Não tem comando específico
    int tam = sizeof(v) / sizeof(v[0]);

    printf("Vetor desordenado:\n");
    for(int i=0; i<tam; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n\n");

    for(int i=0;i<tam;i++)
    {
        posmenor = i;

        for(int j = i+1; j < tam; j++)
        {
            if(v[j] < v[posmenor])
            {
                posmenor = j;
            }
            numComparacoes++;
        }

        if(posmenor != i)
        {
            aux = v[i];
            v[i] = v[posmenor];
            v[posmenor] = aux;
            numTrocas++;
        }
    }

    printf("Vetor ordenado:\n");
    for(int i=0; i<tam; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n\n");
    printf("Numero de Comparacoes: %d\n", numComparacoes);
    printf("Numero de Trocas: %d\n", numTrocas);

    return 0;
}

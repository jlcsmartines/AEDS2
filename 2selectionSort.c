#include <stdio.h>

// definir tamanho dos vetores (p/ jogar na função)
#define tamanho(vetor) (sizeof(vetor) / sizeof((vetor)[0]))

// definindo função de selectionSort, entra um vetor, o tamanho deste vetor e o nome dele(p identificação do usuário)
void selectionSort(int vetor[], int tam, char* nome)
{
    int numComparacoes = 0;
    int numTrocas = 0;
    int posmenor, aux;
    
    printf("%s (Tamanho: %d elementos):\n\n", nome, tam); 
    printf("Vetor desordenado:\n");
    for(int i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    for(int i = 0; i < tam; i++)
    {
        posmenor = i;

        for(int j = i+1; j < tam; j++)
        {
            if(vetor[j] < vetor[posmenor])
            {
                posmenor = j;
            }
            numComparacoes++;
        }

        if(posmenor != i)
        {
            aux = vetor[i];
            vetor[i] = vetor[posmenor];
            vetor[posmenor] = aux;
            numTrocas++;
        }
    }

    printf("Vetor ordenado:\n");
    for(int i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    printf("Numero de Comparacoes: %d\n", numComparacoes);
    printf("Numero de Trocas: %d\n", numTrocas);
    printf("------------------------------------\n\n");
}

// main, usando a função para os diferentes vetores
int main(void){

    int v1[] = {3, 8, 17, 21, 42, 56, 65, 74, 89, 99}; // ordenado
    int v2[] = {99, 89, 74, 65, 56, 42, 21, 17, 8, 3}; // inverso
    int v3[] = {42, 17, 89, 3, 56, 74, 21, 99, 8, 65}; // bagunçado

    selectionSort(v1, tamanho(v1), "Vetor ordenado");
    selectionSort(v2, tamanho(v2), "Vetor invertido");
    selectionSort(v3, tamanho(v3), "Vetor baguncado");

    return 0;
}

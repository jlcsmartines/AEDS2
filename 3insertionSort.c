#include <stdio.h>

// definir tamanho dos vetores (p/ jogar na função)
#define tamanho(vetor) (sizeof(vetor) / sizeof((vetor)[0]))

// definindo função de insertionSort, entra um vetor, o tamanho deste vetor e o nome dele (p/ identificação do usuário)
void insertionSort(int vetor[], int tam, char* nome)
{
    int numComparacoes = 0;
    int numTrocas = 0; // No Insertion, são os deslocamentos
    int atual, j;
    
    printf("%s (Tamanho: %d elementos):\n\n", nome, tam); 
    printf("Vetor desordenado:\n");
    for(int i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    // Lógica do Insertion Sort
    for(int i = 1; i < tam; i++)
    {
        atual = vetor[i]; 
        j = i - 1;    

        while (j >= 0 && vetor[j] > atual) 
        {
            numComparacoes++;     // Contabiliza a leitura

            vetor[j + 1] = vetor[j]; // Desloca o numero para a direita
            numTrocas++;          // Contabiliza o deslocamento
            j--;                  // Vai para o proximo numero da esquerda
        }

        // Quando o while para porque achou um número menor (ou igual), 
        // ele fez uma comparação que deu falso, logo eu contabilizo por fora,
        // pois se o vetor estiver ordenado, não iria contar as comparações feitas.
        if (j >= 0) {
            numComparacoes++;
        }
        
        vetor[j + 1] = atual; 
    }

    printf("Vetor ordenado:\n");
    for(int i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    printf("Numero de Comparacoes: %d\n", numComparacoes);
    printf("Numero de Trocas (Deslocamentos): %d\n", numTrocas);
    printf("------------------------------------\n\n");
}

// main, usando a função para os diferentes vetores
int main(void){

    int v1[] = {3, 8, 17, 21, 42, 56, 65, 74, 89, 99}; // ordenado
    int v2[] = {99, 89, 74, 65, 56, 42, 21, 17, 8, 3}; // inverso
    int v3[] = {42, 17, 89, 3, 56, 74, 21, 99, 8, 65}; // bagunçado

    insertionSort(v1, tamanho(v1), "Vetor ordenado");
    insertionSort(v2, tamanho(v2), "Vetor invertido");
    insertionSort(v3, tamanho(v3), "Vetor baguncado");

    return 0;
}

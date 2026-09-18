// Bubble Sort

#include <stdio.h>
#include <stdbool.h>

// Definir tamanho dos vetores (p/ jogar na função)
#define tamanho(vetor) (sizeof(vetor) / sizeof((vetor)[0]))

void bubbleSort(int vetor[], int tam, char* nome)
{
    int numComparacoes = 0;
    int numTrocas = 0;
    int aux;
    bool trocou;

    printf("%s (Tamanho: %d elementos):\n\n", nome, tam); 
    printf("Vetor desordenado:\n");
    for(int i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    // Lógica principal do Bubble Sort otimizado
    for(int i = 0; i < tam - 1; i++)
    {
        trocou = false;
        
        for(int j = 0; j < tam - 1 - i; j++)
        {
            numComparacoes++; // Contabiliza CADA olhada que ele dá, dando verdadeiro ou falso

            if(vetor[j] > vetor[j+1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
                trocou = true;
                numTrocas++;
            }
        }    
        
        // Parada antecipada: se percorreu o vetor e não trocou ninguém, já está ordenado
        if(!trocou) 
        {
            break;
        }
    }

    printf("Vetor ordenado:\n");
    for(int i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");
    printf("Numero de Comparacoes: %d\n", numComparacoes);
    printf("Numero de Trocas: %d\n", numTrocas);
    printf("------------------------------------\n\n");
}

int main(void){

    int v1[] = {3, 8, 17, 21, 42, 56, 65, 74, 89, 99}; // ordenado
    int v2[] = {99, 89, 74, 65, 56, 42, 21, 17, 8, 3}; // inverso
    int v3[] = {42, 17, 89, 3, 56, 74, 21, 99, 8, 65}; // bagunçado

    bubbleSort(v1, tamanho(v1), "Vetor ordenado");
    bubbleSort(v2, tamanho(v2), "Vetor invertido");
    bubbleSort(v3, tamanho(v3), "Vetor baguncado");

    return 0;
}

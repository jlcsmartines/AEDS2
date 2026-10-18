#include <stdio.h>

// Definir tamanho dos vetores (p/ jogar na função)
#define tamanho(vetor) (sizeof(vetor) / sizeof((vetor)[0]))

// Definindo função de shellSort, entra um vetor, o tamanho deste vetor e o nome dele (p/ identificação do usuário)
void shellSort(int vetor[], int tam, char* nome)
{
int numComparacoes = 0;
int numTrocas = 0; // Deslocamentos
int atual, j, h;

printf("%s (Tamanho: %d elementos):\n\n", nome, tam); 
printf("Vetor desordenado:\n");
for(int i = 0; i < tam; i++)
{
    printf("%d ", vetor[i]);
}
printf("\n\n");

// Lógica do Shell Sort
// Começa com um gap (salto) igual a metade do tamanho do vetor, e vai dividindo por 2
for(h = tam / 2; h > 0; h /= 2)
{
    // A partir do gap, fazemos um Insertion Sort modificado
    for(int i = h; i < tam; i++)
    {
        atual = vetor[i]; 
        j = i;    

        // O j volta dando saltos de tamanho 'h', em vez de 1 em 1
        while (j >= h && vetor[j - h] > atual) 
        {
            numComparacoes++;     // Contabiliza a leitura

            vetor[j] = vetor[j - h]; // Desloca o numero para a direita (dando o salto 'h')
            numTrocas++;          // Contabiliza o deslocamento
            j -= h;               // Vai para o proximo numero da esquerda pulando 'h' posições
        }

        // Se o while parou porque achou um número menor (ou igual) e não porque chegou no limite,
        // contabilizamos essa comparação extra que falhou.
        if (j >= h) {
            numComparacoes++;
        }
        
        vetor[j] = atual; 
    }
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

shellSort(v1, tamanho(v1), "Vetor ordenado");
shellSort(v2, tamanho(v2), "Vetor invertido");
shellSort(v3, tamanho(v3), "Vetor baguncado");

return 0;


}

#include <stdio.h>
#include <string.h>

// Para calcular o tamanho do vetor dinamicamente
#define tamanho(vetor) (sizeof(vetor) / sizeof((vetor)[0]))

// Definição da struct para os alunos da Escola Tabajara
typedef struct {
    int matricula;
    char nome[50];
    float media;
} Aluno;

// Função Insertion Sort para ordenar os alunos pela média (da maior para a menor - decrescente)
void insertionSortAlunos(Aluno alunos[], int tam) {
    int numComparacoes = 0;
    int numTrocas = 0;

    for (int i = 1; i < tam; i++) {
        Aluno atual = alunos[i];
        int j = i - 1;

        // Compara as médias para ordenar em ordem decrescente (maior para a menor)
        while (j >= 0 && alunos[j].media < atual.media) {
            numComparacoes++;
            alunos[j + 1] = alunos[j];
            numTrocas++;
            j--;
        }

        // Contabiliza a última comparação que falhou no while (se houver)
        if (j >= 0) {
            numComparacoes++;
        }

        alunos[j + 1] = atual;
    }

    // Exibição dos resultados estatísticos
    printf("--- Estatisticas de Ordenacao (Escola Tabajara) ---\n");
    printf("Numero de Comparacoes: %d\n", numComparacoes);
    printf("Numero de Trocas (Deslocamentos): %d\n\n", numTrocas);
}

// Função auxiliar para exibir a lista de alunos formatada
void exibirAlunos(Aluno alunos[], int tam) {
    printf("%-10s | %-25s | %-10s\n", "Matricula", "Nome do Aluno", "Media");
    printf("----------------------------------------------------\n");
    for (int i = 0; i < tam; i++) {
        printf("%-10d | %-25s | %-10.2f\n", alunos[i].matricula, alunos[i].nome, alunos[i].media);
    }
    printf("----------------------------------------------------\n\n");
}

int main(void) {
    // Vetor de estruturas com 10 alunos cadastrados para a Escola Tabajara
    Aluno escolaTabajara[] = {
        {201, "Ana Souza", 7.5},
        {202, "Bruno Silva", 9.2},
        {203, "Carla Dias", 5.4},
        {204, "Daniel Rocha", 8.8},
        {205, "Eduarda Lima", 6.1},
        {206, "Felipe Santos", 4.9},
        {207, "Gabriela Costa", 10.0},
        {208, "Henrique Alves", 8.0},
        {209, "Isabela Martins", 6.5},
        {210, "Joao Pedro", 7.9}
    };

    printf("=== ESCOLA TABAJARA - SISTEMA DE ORDENACAO (ALUNOS) ===\n\n");
    
    printf("Alunos Cadastrados (Desordenados):\n");
    exibirAlunos(escolaTabajara, tamanho(escolaTabajara));

    // Executa o Insertion Sort baseado na média (maior para a menor)
    insertionSortAlunos(escolaTabajara, tamanho(escolaTabajara));

    printf("Alunos Ordenados por Media (Da Maior para a Menor):\n");
    exibirAlunos(escolaTabajara, tamanho(escolaTabajara));

    return 0;
}

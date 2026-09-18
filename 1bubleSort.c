// Buble sort

#include <stdio.h>
#include <stdbool.h>

int main(void){

    int tam = 12; // quantidade de numeros no vetor
    int num[tam];
    int trocas = 0,passagens = 0,aux = 0;
    bool trocou = false;

    printf("Recebendo os numeros:\n");
    for(int i = 0; i < tam; i++){
        printf("Digite o %d número: ", i+1);
        scanf("%d", &num[i]);
    }
    printf("\n\n");

    printf("Vetor não ordenado:\n");
    for(int i = 0; i < tam; i++) {
        printf("%d ", num[i]);
    }
    printf("\n\n");

    for(int i = 0; i < tam-1; i++)
    {
        trocou = false;
        for(int j = 0; j < tam-1-i; j++)
        {
            if(num[j] > num[j+1])
            {
                aux = num[j];
                num[j] = num[j+1];
                num[j+1] = aux;
                trocou = true;
                trocas++;
            }
        }    
        passagens++;
        if(!trocou) // parada antecipada,caso não troque nada
            {
                break;
            }
    }

    printf("Quantidade de passagens para ordenar: %d.\n", passagens);
    printf("Quantidade de trocas: %d\n\n", trocas);
    printf("Vetor ordenado:\n");
    for(int i = 0; i < tam; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}

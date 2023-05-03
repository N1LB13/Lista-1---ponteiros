#include <stdio.h>
#include <stdlib.h>

void apresentar_em_ordem_crescente(float *valores, int n) {
    int i, j;
    float temp;

    // Ordena os valores usando bubble sort
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (valores[j] > valores[j+1]) {
                // Troca os valores
                temp = valores[j];
                valores[j] = valores[j+1];
                valores[j+1] = temp;
            }
        }
    }

    // Apresenta os valores em ordem crescente
    printf("Valores em ordem crescente:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", valores[i]);
    }
    printf("\n");
}

int main() {
    int n, i;
    float *valores;

    printf("Digite o número de valores a serem lidos: ");
    scanf("%d", &n);

    // Aloca espaço na memória para armazenar n valores do tipo float
    valores = (float *) malloc(n * sizeof(float));

    if (valores == NULL) {
        printf("Erro ao alocar memória\n");
        exit(1);
    }

    // Lê os valores
    printf("Digite %d valores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &valores[i]);
    }

    // Chama a função para apresentar os valores em ordem crescente
    apresentar_em_ordem_crescente(valores, n);

    // Libera a memória alocada
    free(valores);

    return 0;
}

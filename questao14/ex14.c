#include <stdio.h>
#include <stdlib.h>

// Função de comparação para ordenação em ordem crescente
int cmpfunc(const void *a, const void *b) {
   return (*(float*)a - *(float*)b);
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

    // Chama a função qsort para ordenar os valores em ordem crescente
    qsort(valores, n, sizeof(float), cmpfunc);

    // Apresenta os valores em ordem crescente
    printf("Valores em ordem crescente:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", valores[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(valores);

    return 0;
}

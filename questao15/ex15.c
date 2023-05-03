#include <stdio.h>
#include <stdlib.h>

// Definindo um tipo para o ponteiro da função de comparação
typedef int (*cmp_ptr)(const void *, const void *);

// Função de comparação para ordenação em ordem crescente
int cmpfunc(const void *a, const void *b) {
   return (*(int*)a - *(int*)b);
}

// Função de ordenação personalizada, que recebe um array de inteiros,
// o número de elementos, e um ponteiro para a função de comparação
void mysort(int *arr, int n, cmp_ptr cmp) {
    qsort(arr, n, sizeof(int), cmp);
}

int main() {
    int n, i;
    int *valores;

    printf("Digite o número de valores a serem lidos: ");
    scanf("%d", &n);

    // Aloca espaço na memória para armazenar n valores do tipo int
    valores = (int *) malloc(n * sizeof(int));

    if (valores == NULL) {
        printf("Erro ao alocar memória\n");
        exit(1);
    }

    // Lê os valores
    printf("Digite %d valores:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
    }

    // Chama a função de ordenação personalizada, passando o array de valores,
    // o número de elementos, e um ponteiro para a função de comparação
    mysort(valores, n, cmpfunc);

    // Apresenta os valores em ordem crescente
    printf("Valores em ordem crescente:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(valores);

    return 0;
}

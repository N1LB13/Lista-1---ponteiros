#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função de comparação para o qsort
int compara_inteiros(const void* a, const void* b) {
    int* x = (int*) a;
    int* y = (int*) b;
    return (*x - *y);
}

// Função que ordena um vetor de inteiros utilizando qsort
void ordena_vetor_qsort(int* vetor, int tamanho) {
    qsort(vetor, tamanho, sizeof(int), compara_inteiros);
}

int main() {
    int tamanho = 10000;
    int* vetor = (int*) malloc(tamanho * sizeof(int));

    // Inicializa o vetor com números aleatórios
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand();
    }

    clock_t inicio = clock(); // Tempo de início da execução

    ordena_vetor_qsort(vetor, tamanho);

    clock_t fim = clock(); // Tempo de fim da execução

    double tempo_total = (double) (fim - inicio) / CLOCKS_PER_SEC; // Tempo decorrido em segundos
    printf("Tempo total de execução: %lf segundos.\n", tempo_total);

    free(vetor);
    return 0;
}
/*A partir desse exemplo, podemos adaptar o código para medir o tempo de execução
  da função ordena_vetor_bubble(). Podemos então comparar os tempos de execução das
  duas funções para concluir qual delas é mais eficiente em termos de tempo. É importante
  notar que os tempos de execução podem variar de acordo com o hardware e o sistema operacional utilizados.
*/
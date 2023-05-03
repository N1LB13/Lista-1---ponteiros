#include <stdio.h>
#include <stdlib.h>

void soma_vetores(int* v1, int* v2, int* resultado, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = v1[i] + v2[i];
    }
}
int main(int argc, char const *argv[])
{
    int v1[] = {1, 3, 0, -2};
    int v2[] = {3, 5, -3, 1};
    int resultado[4];

    soma_vetores(v1, v2, resultado, 4);
    return 0;
}



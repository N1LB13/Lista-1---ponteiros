#include <iostream>

int main(){

    int *p4;
    int *p5;
    int idade;
    int vetor[3];
    
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade);
    p5 = p4 + 1;
    idade = *p5;
    printf("%d \n", idade);
    p4 = p5 + 1;
    idade = *p4;
    printf("%d \n", idade);
    p4 = p4 - 2;
    idade = *p4;
    printf("%d \n", idade);
    return 0;

}
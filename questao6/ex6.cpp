#include <iostream>

int main()
{
    int pulo[10] = {1, 2, 3, 4, 5};
    
    std::cout << "Valor do terceiro indice: "<< *(pulo + 2) << std::endl;

    std::cout << "Endereco do terceiro indice: " <<pulo + 2 << std::endl;

    return 0;
}

/* Resposta: pulo + 2 é o valor de referencia para o terceiro
    elemento do vetor pulo. Logo *(pulo + 2) retorna o valor inteiro 
    do terceiro índice do vetor.
*/
 

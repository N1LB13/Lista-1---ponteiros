///3. Se i e j são variáveis inteiras e p e q ponteiros para int, quais 
//das seguintes expressões de atribuição são ilegais?
//p = i; Válido
//q = &j; Válido
//p = &*&i;  Válido
//i = (*&)j; Inválido
//i = *&j; Válido, restaura o conteudo variavel inteira j
//i = *&*&j; Válido, também serve para restaurar o conteudo da variavel
//q = *p; Válido
//i = (*p)++ + *q; Válido

#include <iostream>

int main()
{
    int i=2, j=3;
    int *q, *p;
    std::cout << (&j) << std::endl;

    std::cout << (&*&i) << std::endl;

    std::cout << (*&j) << std::endl;

    std::cout << (*&*&j) << std::endl;

    std::cout << (*p) << std::endl;
    i= (*p)++ + *q;
    std::cout << (i) << std::endl;
    return 0;
}

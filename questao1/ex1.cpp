#include <iostream>
int main(){
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    // p == &i retorna true pois é declarado anteriormente que p = &i 
    std::cout << (p == &i) << std::endl;

    // o símbolo *, quando colocado antes de um ponteiro retorna o conteúdo do endereço.
    // logo o conteúdo de p e q são 3 - 5 = -2 
    std::cout << (*p - *q) << std::endl;

    // ao colocar '&p', é impresso na tela o endereço, ao colocar '*&p' é impresso o conteudo restaurado
    // e ao colocar '**&p' é impresso novamente o endereço da variável na memoria
    std::cout << (&p) << std::endl;

    // abaixo o *p/(*q) se trata dos valores 3 e 5
    std::cout << 3 - *p/(*q) + 7 << std::endl;
    
    return 0;
}

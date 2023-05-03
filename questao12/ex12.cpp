/*Um ponteiro para função é um tipo de ponteiro que aponta
  para uma função em vez de um objeto ou variável de dados. 
  Um ponteiro para função permite que uma função seja passada 
  como argumento para outra função ou que uma função seja retornada 
  como resultado de uma função.

A seguir, um exemplo de como usar um ponteiro para função em C++:
*/
#include <iostream>

// Declaração de uma função que recebe um inteiro e retorna um inteiro
int dobro(int x) {
  return 2 * x;
}

// Declaração de uma função que recebe um ponteiro para função
void imprimir_dobros(int (*f)(int), int x) {
  std::cout << "O dobro de " << x << " é " << f(x) << std::endl;
}

int main() {
  // Declaração de um ponteiro para a função dobro
  int (*ptr)(int) = &dobro;

  // Chama a função dobro diretamente
  std::cout << "O dobro de 5 é " << dobro(5) << std::endl;

  // Chama a função imprimir_dobros, passando ptr como argumento
  imprimir_dobros(ptr, 5);

  return 0;
}
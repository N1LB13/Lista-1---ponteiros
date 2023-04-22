#include <iostream>

int main() {
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;
  // (a): p1 é declarado com o endereço de valor, então ao apontar para p1 
  // alterando seu valor, irá alterar o conteudo da variável "valor". Ou seja,
  // o valor immpresso na tela será 20.
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);
  
  // (b): mesmo ocorre aqui, só dessa vez para variáveis do tipo float.
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);
  
  // (c): p3 recebe o endereço para a primeira letra da string "nome" e a a var "aux" 
  // recebe uma cópia do ponteiro p3, assim recebendo a primeira letra da string "nome" e a exibindo
  p3 = &nome[0]; 
  aux = *p3;
  printf("%c \n", aux);
  
  // (d): mesma coisa que na letra (c), só que nesse caso irá ser impresso na tela o 5º caractere da palavra
  // que está dentro da variável "nome"
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux);
  
  // (e): Será impresso na tela o primeiro caractere da palavra armazenada na variavel.
  // Pois p3 aponta para o inicio da string de caracteres "nome"
  p3 = nome;
  printf("%c \n", *p3);
  
  
// (f): exibe o 5 caractere da palavra armazenada.
  p3 = p3 + 4;
  printf("%c \n", *p3);
  
  // (g): subtrai um de p3, logo será exibido o 4º caractere da palavra 'Ponteiro'.
  p3--;
  printf("%c \n", *p3);
  
  // (h): p4 recebe o vetor e idade recebe um ponteiro p4, sendo assim será exibido o primeiro elemento
  // do vetor, 31.
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade);
  
  // (i): 
  p5 = p4 + 1;
  idade = *p5;
  printf("%d \n", idade);
  
  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("%d \n", idade);
  
  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade);

  /* (m) */
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5);
  
  /* (n) */
  p5++;
  printf("%d \n", *p5);
  
  return(0);
}

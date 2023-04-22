#include <iostream>

int main(){

    char *nome = "Ponteiros";
    char aux;
    char *p3;
     p3 = &nome[0]; 
    aux = *p3;
    printf("%c \n", aux);

    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);

    p3 = nome;
    printf("%c \n", *p3);
  
    p3 = p3 + 4;
    printf("%c \n", *p3);
    return 0;

}
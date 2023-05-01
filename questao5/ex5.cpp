#include <iostream>


int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d ",i); //exibe o indice
    printf("vet[%d] = %.1f ",i, vet[i]); // mostra cada elemento do vetor
    printf("*(f + %d) = %.1f ",i, *(f+i)); // aponta para cada elemento do vetor 
    printf("&vet[%d] = %X ",i, &vet[i]); // retorna o endereço da variavel da variavel armazenada no vetor
    printf("(f + %d) = %X",i, f+i); // exibe endereços na memoria pulando de byte em byte  
  }

}
//Sim, foram exibida todas as respostas esperadas




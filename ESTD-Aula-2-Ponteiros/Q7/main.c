/*
Faça um programa que declare um vetor de 10 posições, do tipo int, float ou double. Implemente funções:
• Para ler os valores do vetor;
• Para mostrar os valores do vetor;
• Para exibir os valores maiores que um valor N fornecido pelo usuário;
• Para calcular a media dos valores pares do vetor.
• Que receba o vetor e os endereços de duas
variáveis inteiras, digamos min e max, e deposite
nessas variáveis o valor de um elemento mínimo e o valor de um elemento máximo
do vetor.

Observação: não usar o vetor como variável global.
*/

#include <stdio.h>

void lerVetor(int *vet){
  int cont;
  
  for(cont=0;cont<3;cont++){
    printf("\nDigite valor para campo [%d]: ", cont);
    scanf("%d", &vet[cont]);
  }
}

void imprimirVetor(int vet[3]){
  int cont;

  for(cont=0;cont<3;cont++){
    printf("\nCampo [%d] = %d", cont, vet[cont]);
  }
  
}

void maiorQueN(int vet[3]){
  
}

void mediaDosPares(int vet[3]){
  
}

int main(void) {
  int vetor[3], min, max;
  lerVetor(&vetor[0]);
  imprimirVetor(vetor);
}

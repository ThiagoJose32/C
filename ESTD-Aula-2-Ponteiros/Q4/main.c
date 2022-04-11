/*
4) Faça uma programa que declare um vetor de inteiros com 5 elementos e implemente uma função para les os números e outra para imprimir os valores;
*/

#include <stdio.h>

void lerVetor(int vet[5]){
  int i;
  for(i=0;i<5;i++){
    printf("Informe o valor: ");
    scanf("%d", &vet[i]);  //(vet+1)
  }
}

int main(void) {
  int vetor[5];
  lerVetor(vetor);
  imprimir(vetor);
}
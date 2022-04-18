/*
5) Acrescente uma função no exercício anterior que receba o vetor como parâmetro e retorne a quantidade de valores positivos.
  ( 4) Faça uma programa que declare um vetor de inteiros com 5 elementos e implemente uma função para les os números e outra para imprimir os valores;)
*/

#include <stdio.h>

void lerVetor(int vet[5]){
  int cont;
  for(cont=0;cont<5;cont++){
    printf("Informe o valor: ");
    scanf("%d", &vet[cont]);  //(vet+1)
  }
}

void imprimir(int vet[5]){
  int cont;
  for(cont=0;cont<5;cont++){
    printf("\n\nVet[%d] = %d", cont, vet[cont]);
  }
}

int positivos(int vet[5]){
  int cont, qtdPositivos=0;
  for(cont=0;cont<5;cont++){
    if(vet[cont]>0){
      qtdPositivos++;
    }
  }
  return qtdPositivos;
}

int main(void) {
  int vetor[5];
  lerVetor(vetor);
  imprimir(vetor);
  printf("\n\nExistem %d números posivitos neste vetor.", positivos(vetor));
}

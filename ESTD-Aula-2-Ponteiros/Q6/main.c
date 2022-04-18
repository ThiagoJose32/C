/*
6) Acrescente uma função no exercício anterior, que retorne a quantidade de valores pares.

Imprima o retorno das funções acima na função main.

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

int pares(int vet[5]){
  int cont, qtdPares=0;
  for(cont=0;cont<5;cont++){
    if(vet[cont] % 2 == 0){
      qtdPares++;
    }
  }
  return qtdPares;
}

int main(void) {
  int vetor[5];
  lerVetor(vetor);
  imprimir(vetor);
  printf("\n\nExistem %d números positivos neste vetor.", positivos(vetor));
  printf("\n\nExistem %d números pares neste vetor.", pares(vetor));
}

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
    printf("\nDigite um valor para o campo [%d]: ", cont);
    scanf("%d", &vet[cont]);
  }
}

void imprimirVetor(int vet[3]){
  int cont;

  for(cont=0;cont<3;cont++){
    printf("\nCampo[%d] = %d", cont, vet[cont]);
  }
  
}

void maiorQueN(int vet[3]){
  int cont, n, x=0;
  printf("\nDeseja visualizar os valores acima de quanto? ");
  scanf("%d", &n);
  
  for(cont=0;cont<3;cont++){
    if(vet[cont]>n){
      printf("\nCampo[%d] = %d", cont, vet[cont]);
      x++;
    }
  }
  if(x==0){
    printf("\nNenhum valor encontrado!");
  }
}

void mediaDosPares(int vet[3]){
  int cont, total=0, qtd=0;

  for(cont=0;cont<3;cont++){
    if(vet[cont]%2 == 0){
      total = total + vet[cont];
      qtd++;;
    }
  }
  printf("\nMedia dos numeros pares: %d", total/qtd);
}

void minMax(int vet[3], int *min, int *max){
  int cont, prox=1, minimo, maximo;

  for(cont=0;cont<2;cont++){
    if(vet[cont]>vet[prox]){
      maximo = vet[cont];
      printf("----- %d -----", minimo);
      getc(stdin);
      getc(stdin);
    }else{
      maximo = vet[prox];
    }
    prox++;
  }

  *min = minimo;
  *max = maximo;
}

int main(void) {
  int vetor[3], min, max;
  lerVetor(&vetor[0]);
  printf("\n------------------------------------------\n");
  imprimirVetor(vetor);
  printf("\n\n------------------------------------------\n");
  maiorQueN(vetor);
  printf("\n\n------------------------------------------\n");
  mediaDosPares(vetor);
  printf("\n\n------------------------------------------\n");
  minMax(vetor, &min, &max);
  printf("\n\n Minimo: %d      Maximo: %d", min, max);
}

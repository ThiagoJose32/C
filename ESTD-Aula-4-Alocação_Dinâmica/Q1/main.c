#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

struct pessoa{
  char nome[50];
  int idade;
  float peso;
};
typedef struct pessoa Pessoa;


int main(void) {
  float *pf;
  int x, i;
  Pessoa p, *pp;
  Pessoa pessoas[4];

  Ponto *p1 = criar(10, 12);
  Ponto *p2 = criar(5, 25);

  imprimir(p1);
  imprimir(p2);
  

  p.idade = 25;
  p.peso = 60;

  pp = &p;
  (*pp).idade = 30;

  pp->peso = 50;
  pp->idade = 35;
  
  
  printf("\n valor da idade: %d e peso: %.2f", p.idade, p.peso);
  pessoas[0].idade = 15;
  
  
  
  printf("\n Informar a quantidade de elementos: ");
  scanf("%d", &x);

  pf = (float*)malloc(x * sizeof(float));
  if (pf == NULL){
    printf("\n Memoria insuficiente\n");
  }else{
    //leitura das informacoes
    for (i = 0; i<x; i++){
      printf("\n Informe o conteudo da posicao: %d ", i);
      scanf("%f", &pf[i]);//scanf("%f", (pf+i));
    }

    //imprimindo as informacoes do vetor
    for (i = 0; i<x; i++){
      printf("\n Valor: %.2f", pf[i]);//printf("\n Valor: %.2f", *(pf+i));
    }
    
    free(pf);

    for (i = 0; i<x; i++){
      printf("\n Valor: %.2f", pf[i]);
    }
    
  }
  return 0;
}

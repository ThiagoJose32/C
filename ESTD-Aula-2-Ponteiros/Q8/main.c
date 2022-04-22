/*
1 - Faça uma função que receba três valores e realize a troca dos valores entre eles, da seguinte forma: o valor de a vai para b, o de b vai para c e o de c vai para a;

2 - Implemente uma função que calcule a área da superfície e o volume de uma esfera de raio r. Essa função deve obedecer o seguinte protótipo:void calc_esfera ( float r, float *area, float *volume);
*/

#include <stdio.h>

void ler(int *aa, int *bb, int *cc){
  printf("\nDigite a: ");
  scanf("%d", &*aa);
  printf("\nDigite b: ");
  scanf("%d", &*bb);
  printf("\nDigite a: ");
  scanf("%d", &*cc);
}

void trocar(int *aa, int *bb, int *cc){
  int aux, aux2;
  aux=*bb;
  *bb=*aa;
  aux2=*cc;
  *cc=aux;
  *aa=aux2;
}

void imprimir(int aa, int bb, int cc){
  printf("\n\nPrintf a: %d", aa);
  printf("\n\nPrintf b: %d", bb);
  printf("\n\nPrintf c: %d", cc);
}

void calc_esfera(float r, float *area, float *volume){
  
}

int main(void) {
  int a, b, c;
  
  ler(&a, &b, &c);
  trocar(&a, &b, &c);
  imprimir(a, b, c);
  
}

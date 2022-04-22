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
  printf("\n\n--------------------------");
  printf("\n\nPrintf a: %d", aa);
  printf("\n\nPrintf b: %d", bb);
  printf("\n\nPrintf c: %d", cc);
}

void calc_esfera(float r, float *area, float *volume){
  *area=4*3.14*(r*r);
  *volume=(4*3.14*(r*r*r))/3;
}

int main(void) {
  int a, b, c;
  float r, area, volume;
  
  ler(&a, &b, &c);
  trocar(&a, &b, &c);
  imprimir(a, b, c);

  printf("\n\n--------------------------");
  printf("\n\n\nDigite o raio da esfera: ");
  scanf("%f", &r);
  calc_esfera(r, &area, &volume);
  printf("\nArea: %.2f", area);
  printf("\nVolume: %.2f", volume);
  
}

#include <stdio.h>

void troca(int *a, int *b){
  int aux;
  aux=*a;  //aux recebe o conteúdo apontado por a
  *a=*b;  //conteúdo apontado por a é trocado pelo conteúdo apontado por b
  *b=aux;  //conteúdo apontado por b é trocado pelo conteúdo de aux
}

int main(void) {
  int a,b;
  printf("Informe os valores de A e B: ");
  scanf("%d", &a);
  scanf("%d", &b);
  troca(&a,&b);
  printf("Valor a:%d\nValor b:%d", a,b);
}
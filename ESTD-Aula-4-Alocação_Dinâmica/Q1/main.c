#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"


int main(void) {
  int x, i;

  Ponto *p1 = criar(2, 5);
  Ponto *p2 = criar(-5, -2);

  imprimir(p1);
  imprimir(p2);
  printf("\nDistancia: %.2f", calcularDistancia(p1,p2));
}

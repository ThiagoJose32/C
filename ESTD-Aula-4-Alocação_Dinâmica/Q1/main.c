#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"


int main(void) {
  char aux;
  int i=1;
  
  Ponto *p1 = criar(2, 5);
  Ponto *p2 = criar(-5, -2);
  Ponto *p3 = criar(10, -10);
  
  imprimir(p1);
  imprimir(p2);
  printf("\nDistancia: %.2f", calcularDistancia(p1,p2));

  printf("\n\nAlterar ponto A ou B? ");
  
  while(i==1){
    scanf("%c", &aux);
    switch(aux){
      case 'A':
        transladar(p1);
        printf("\nNova localização para A: [%d;%d]", p1->x, p1->y);
        i++;
      break;

      case 'B':
        transladar(p2);
        printf("\nNova localização para B: [%d;%d]", p2->x, p2->y);
        i++;
      break;

      default:
        printf("É A ou B só: ");
    }
    getc(stdin);
 }
}

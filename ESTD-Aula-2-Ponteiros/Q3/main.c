/*
3) Faça um programa que leia o raio de um círculo; impremente uma função que de acordo com o protótipo abaixo, calcule a área e o perímetro, e armazene nas respectivas variáveis:

  void calcular(float raio, float *area, float *perimetro);

*/

#include <stdio.h>

void calcular(float raio, float *area, float *perimetro){
  *area = 3.14*raio*raio;
  *perimetro = 2*3.14*raio;
}
  

int main(void) {
  float raio, area, perimetro;
  printf("Digite o raio: ");
  scanf("%f", &raio);

  calcular(raio, &area, &perimetro);
  printf("Area: %.2f\nPerimetro: %.2f", area,perimetro);
}
/*
2) Faça um programa que leia três valores correspondentes aos coeficientes de uma equação do 2º grau: a, b e c; implemente uma função que segue o protótipo abaixo:

  float raizes(float a, float b, float c, float *x1, float *x2);

Essa função deverá retornar a quantidade de raízes reais e os valores das raízes em x1 e x2 (caso existam).

  ax²+bx+c=0
*/

#include <stdio.h>
#include <math.h>

float raizes(float a, float b, float c, float *x1, float *x2){
  
  float delta;
  delta=b*b-4*a*c;
  if(delta<0){
    return 0;
  }else if(delta==0){
    *x1=-b/(2*a);
    return 1;
  }else{
    *x1=(-b-sqrt(delta))/(2*a);
    *x2=(-b+sqrt(delta))/(2*a);
    return 2;
  }
  
}

int main(void) {
  float a, b, c, resultado;
  float r1, r2;
  printf("Digite os valores:\n                a: ");
  scanf("%f", &a);
  printf("                b: ");
  scanf("%f", &b);
  printf("                c: ");
  scanf("%f", &c);

  resultado=raizes(a, b, c, &r1, &r2);

  if(resultado<0){
    printf("Não tem raizes!");
  }else if(resultado==0){
    printf("Uma raiz real com valor: %.2f: ", r1);
  }else{
    printf("Duas raizes reais: %.2f  %.2f", r1,r2);
  }
  
  printf("\n\nx1 = %.2f", r1);
  printf("\nx2 = %.2f", r2);
}
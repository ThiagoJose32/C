Questão 1

O tipo do ponteiro deve ser do mesmo tipo que a variável a qual ele aponta, isso se deve por conta das diferentes operações que podem ser realizadas para cada tipo de variável, exemplo:

typedef struct{
  char sexo;
  int idade;
} pessoa;

int x, *p1;
p1 = &x;
pessoa *p2;

*p1 = 30;            //*p1 está limitado a apontar para locais de memoria de tamanho int

*p2.sexo = 'f';      //*p2 se molda as alterações realizada na estrutura pessoa
*p2.idade = 26;


------------------------------------------------------------------------------------------------


Questão 2

#include <stdio.h>

void calc_cilindro(float r, float h, float *area, float *volume){
  float pi = 3.14159265;
  *volume = pi*(r*r)*h;
  *area = 2*pi*r*h+2*pi*(r*r);
}

int main(void) {
  float raio, altura, area, volume;
  
  printf("Informe sobre o cilindro:\n");
  printf("Raio: ");
  scanf("%f", &raio);
  printf("Altura: ");
  scanf("%f", &altura);

  calc_cilindro(raio, altura, &area, &volume);

  printf("\nArea: %.2f", area);
  printf("\nVolume: %.2f", volume);
}

//10x10
//Area: 1256.64
//Volume: 3141.59


------------------------------------------------------------------------------------------------


Questão 3

#include <stdio.h>

void troca(int *i, int *j){
  int *temp, x;
  temp = &x;
  *temp = *i;
  *i = *j;
  *j = *temp;
}

int main(void){
  int i=5, j=8;

  printf("\n\nAntes:\n%d --- %d", i, j);
  
  troca(&i, &j);

  printf("\n\nDepois:\n%d --- %d", i, j);
  
}


------------------------------------------------------------------------------------------------


Questão 4

(Nos outros 3 arquivos.)

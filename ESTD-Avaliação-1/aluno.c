#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

aluno* criar(aluno *alunos, int *qtd){
  int cont=0;
  
  do{
    printf("--------------------------------\n");
    printf("Nome: ");
    scanf("%s", alunos[cont].nome);
    printf("Matricula: ");
    scanf("%d", &alunos[cont].matricula);
    printf("Nota: ");
    scanf("%f", &alunos[cont].nota);
    cont++;
  } while(cont < *qtd);

  return alunos;
}

void consultar(aluno *alunos, int *qtd){
  if(*qtd <= 0){
    printf("Nao existem alunos cadastrados!");
    abort();
  }
  
  int cont;

  for(cont=0; cont<*qtd; cont++){
      printf("\nNome: %s\n", alunos[cont].nome);
      printf("Matricula: %d\n", alunos[cont].matricula);
      printf("Nota: %.2f\n\n", alunos[cont].nota);
    }
}

aluno* inserir(aluno *alunos, int *qtd, int add){
  int cont=0;
  aluno *p = (aluno*)realloc(p, sizeof(aluno)*add);
  
  do{
    printf("--------------------------------\n");
    printf("Nome: ");
    scanf("%s", alunos[*qtd].nome);
    printf("Matricula: ");
    scanf("%d", &alunos[*qtd].matricula);
    printf("Nota: ");
    scanf("%f", &alunos[*qtd].nota);

    *qtd=*qtd+1;
    cont++;
  } while(cont < add);
  
  return p;
}

aluno* liberar(aluno *alunos, int *qtd){
  system("clear");
  printf("\n\nResultado final: ");
  consultar(alunos, qtd);
  free(alunos);
  printf("Memoria liberada!");
}

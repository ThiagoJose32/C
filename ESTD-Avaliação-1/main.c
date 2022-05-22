#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"


int main(){
  int qtd, opc, add;

  printf("Quantos alunos deseja cadastrar? ");
  scanf("%d", &qtd);
  
  aluno *alunos = (aluno*)malloc(sizeof(aluno)*qtd);

  if(alunos == NULL){
    printf("Memória não alocada! ");
    return 0;
  }
  
  if(qtd>0){
    criar(alunos, &qtd);
  }else{
    printf("\n\nPrograma finalizado!");
    return 0;
  }
  
  printf("\n\nDeseja imprimir a lista de alunos? 1-Sim | 2-Nao : ");
  scanf("%d", &opc);
  
  if(opc==1){
    consultar(alunos, &qtd);
  }

  printf("\n\nDeseja inserir mais alunos? 1-Sim | 2-Nao : ");
  scanf("%d", &opc);
  if(opc==1){
    printf("Quantos? ");
    scanf("%d", &add);
    inserir(alunos, &qtd, add);
  }else{
    printf("\n\nPrograma finalizado!");
    return 0;
  }
  
  liberar(alunos, &qtd);
}

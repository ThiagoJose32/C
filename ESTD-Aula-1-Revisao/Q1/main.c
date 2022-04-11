/*
1) Faça um programa que cadastre o ano, preço, tipo (C-carro e M-moto) e marca
de 5 veículos.

a)[OK] Exibir as informações cadastradas;
b)[OK]Apresentar os veículos fabricados em 2018;
c)[OK]Apresenta qual veículo é o mais caro (carro ou moto);
d)[OK] Adapte para um número indeterminado de cadastros;
e)[OK] Adapte para usar vetores.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Início - Estrutura do Veículo
typedef struct {
  int i, ano;
  float preco;
  char tipo;
  char marca[10];
} Veiculo;
// Fim - Estrutura do Veículo

// Início - Cadastrar novo veículo
Veiculo cadastrar(Veiculo veiculos[], int cont) {
  char aux_marca[10];
  char aux_tipo;
  printf("\nAno: ");
  scanf("%d", &veiculos[cont].ano);
  printf("Preço: ");
  scanf("%f", &veiculos[cont].preco);
  printf("Tipo (C-carro / M-moto): ");
  getc(stdin);
  scanf("%c", &veiculos[cont].tipo);
  printf("Marca: ");
  scanf("%s", aux_marca);
  strcpy(veiculos[cont].marca, aux_marca);
  return veiculos[cont];
}
// Fim - Cadastrar novo veículo

// Início - Visualizar veículos
void visualizar(Veiculo veiculos[], int cont1) {
  int cont2;
  for (cont2 = 0; cont2 < cont1; cont2++) {
    printf("Ano: %d", veiculos[cont2].ano);
    printf("\nPreço: R$ %.2f", veiculos[cont2].preco);
    printf("\nTipo: %c", veiculos[cont2].tipo);
    printf("\nMarca: %s\n\n", veiculos[cont2].marca);
  }
}
// Fim - Visualizar veículos

// Início - Visualizar veículos por ano
void visualizar_porAno2018(Veiculo veiculos[], int cont1) {
  int cont2;
  for (cont2 = 0; cont2 < cont1; cont2++) {
    if (veiculos[cont2].ano == 2018) {
      printf("Ano: %d", veiculos[cont2].ano);
      printf("\nPreço: R$ %.2f", veiculos[cont2].preco);
      printf("\nTipo: %c", veiculos[cont2].tipo);
      printf("\nMarca: %s\n\n", veiculos[cont2].marca);
    }
  }
}
// Fim - Visualizar veículos por ano

// Início - Visualizar veículo mais caro
void visualizar_maisCaro(Veiculo veiculos[], int quant) {
  int inicio, prox = 1, maisCaro = 0;
  for (inicio = 0; inicio < quant; inicio++) {
    if (veiculos[inicio].preco < veiculos[prox].preco) {
      maisCaro = prox;
    }
    prox++;
  }

  printf("Ano: %d", veiculos[maisCaro].ano);
  printf("\nPreço: R$ %.2f", veiculos[maisCaro].preco);
  printf("\nTipo: %c", veiculos[maisCaro].tipo);
  printf("\nMarca: %s\n\n", veiculos[maisCaro].marca);
}
// Fim - Visualizar veículo mais caro

// Início - Verifica escolha Sim ou Não
void escolha_Sim_Não(char escolha) {}
// Início - Verifica escolha Sim ou Não

void menu(Veiculo veiculos[]) {}

int main(void) {
  Veiculo veiculos[10];
  int cont1 = 0, quant;
  char escolha;

  printf("\nQuantos veículos deseja cadastrar?(máx 10): ");
  scanf("%d", &quant);

  // Início - Verifica se quantidade é válida
  while (1) {
    if (quant > 0 && quant <= 10) {
      system("clear");
      break;
    } else {
      printf("Quantidade inválida, digite novamente: ");
      scanf("%d", &quant);
    }
  }
  // Fim - Verifica se quantidade é válida

  for (quant = quant; quant > 0; quant--) {
    veiculos[cont1] = cadastrar(veiculos, cont1);
    cont1++;
  }
  system("clear");

  // Início - Visualizar itens cadastrados?
  if (1) {
    printf("\n\nDeseja exibir os itens cadastrados?(S/N): ");
    getc(stdin);
    scanf("%c", &escolha);

    if (escolha == 'S' || escolha == 'N' || escolha == 's' || escolha == 'n') {
      if (escolha == 'S' || escolha == 's') {
        printf("\n");
        visualizar(veiculos, cont1);
      } else {
        printf("Execução Finalizada!");
      }
    } else {
      printf("Execução Finalizada!");
    }
  }
  // Fim - Visualizar itens cadastrados?

  // Início - Visualizar item mais caro?
  if (1) {
    printf("\n\nDeseja exibir o item mais caro?(S/N): ");
    getc(stdin);
    scanf("%c", &escolha);

    if (escolha == 'S' || escolha == 'N' || escolha == 's' || escolha == 'n') {
      if (escolha == 'S' || escolha == 's') {
        printf("\n");
        visualizar_maisCaro(veiculos, cont1);
      } else {
        printf("Execução Finalizada!");
      }
    } else {
      printf("Execução Finalizada!");
    }
  }
  // Fim - Visualizar item mais caro?
}
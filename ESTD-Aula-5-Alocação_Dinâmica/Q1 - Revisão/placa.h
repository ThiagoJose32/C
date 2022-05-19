typedef struct{
  int codigo[3];
  char letras[4];
} placa;

placa* criar(placa *p, int qtd);

void imprimir(placa *p, int qtd);

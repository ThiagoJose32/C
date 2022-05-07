struct ponto{
  int x;
  int y;
};
typedef struct ponto Ponto;

Ponto* criar(int x, int y);

void imprimir(Ponto *p);

void liberar(Ponto *p);

float calcularDistancia(Ponto *p1, Ponto *p2);

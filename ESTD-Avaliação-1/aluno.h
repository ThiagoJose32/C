typedef struct{
  char nome[20];
  int matricula;
  float nota;
} aluno;

aluno* criar(aluno *alunos, int *qtd);

void consultar(aluno *alunos, int *qtd);

aluno* inserir(aluno *alunos, int *qtd, int add);

aluno* liberar(aluno *alunos, int *qtd);

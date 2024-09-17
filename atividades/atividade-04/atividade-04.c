// Modificar o programa abaixo, de forma a implementar uma função
// verifica_aprovacao e uma função mostra_aprovacao.

// A função verifica_aprovacao percorre o array de alunos declarados e definidos
// no código fazendo as seguintes verificações: 1)  Se o numero de faltas for
// maior ou igual a 20, considerar que o aluno será reprovado. Atualizar o campo
// Reprovado_SN com o valor 'S'; 2)  Calcular a Media fazendo o seguinte calculo
// (N1 + N2)/2. O resultado atualizará o campo Media.

// A função mostra_aprovacao percorre o array de alunos já modificados e mostra
// os dados do aluno (matricula, nome, N1, N2, Faltas). Também apresentará as
// seguintes mensagens: "REPROVADO POR FALTA" se o campo Reprovado_SN for igual
// a 'S'; "REPROVADO POR MEDIA" se o campo Media for menor que 6.0; "APROVADO"
// se naõ atender as condições anteriores.

#include <stdio.h>

typedef struct {
  int matricula;
  char nome[20];
  float N1;
  float N2;
  float Media;
  int Faltas;
  char Reprovado_SN;
} Aluno;

void verifica_aprovacao(Aluno *alunos, int length) {
  for (int i = 0; i < length; i++) {
    if (alunos[i].Faltas >= 20)
      alunos[i].Reprovado_SN = 'S';
    int media = (alunos[i].N1 + alunos[i].N2) / 2;
    alunos[i].Media = media;
  }
}

void mostra_aprovacao(Aluno *alunos, int length) {
  for (int i = 0; i < length; i++) {
    printf("Aluno %d:\n", i + 1);
    printf("Matrícula: %d\n", alunos[i].matricula);
    printf("Nome: %s\n", alunos[i].nome);
    printf("N1: %.2f\n", alunos[i].N1);
    printf("N2: %.2f\n", alunos[i].N2);
    printf("Media: %.2f\n", alunos[i].Media);
    printf("Faltas: %d\n\n", alunos[i].Faltas);
    if (alunos[i].Reprovado_SN == 'S') printf("REPROVADO POR FALTA\n\n");
    else if (alunos[i].Media < 6.0) printf("REPROVADO POR MEDIA\n\n");
    else printf("APROVADO\n\n");
  }
}

int main() {
  Aluno alunos[5] = {{1, "João", 8.5, 9.0, 0.0, 25, ' '},
                     {2, "Maria", 9.0, 8.0, 0.0, 1, ' '},
                     {3, "Pedro", 7.5, 8.5, 0.0, 3, ' '},
                     {4, "Ana", 9.5, 9.5, 0.0, 20, ' '},
                     {5, "Luiz", 8.0, 7.0, 0.0, 4, ' '}};

  int length = sizeof(alunos) / sizeof(alunos[0]);

  verifica_aprovacao(alunos, length);
  mostra_aprovacao(alunos, length);

  return 0;
}

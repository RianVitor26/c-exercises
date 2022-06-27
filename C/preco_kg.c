#include <stdio.h>

float calcular_media(float nota1, float nota2) {
  float media = (nota1 + nota2) / 2;
  return media;
}

float calcular_mediaTurma(float notaTurma) {
  float mediaTurma = notaTurma / 5;
  return mediaTurma;
}

typedef struct {
  char nome_aluno[30];
  float nota_1;
  float nota_2;
  float media;
} Aluno;

int main() {
  Aluno alunos[5];
  float media, mediaTurma, notaTurma;
  for (int i = 0; i < sizeof(alunos); i++) {
    printf("Insira o nome do aluno %d: ", i);
    scanf("%s", &alunos[i].nome_aluno[30]);
    printf("Insira a nota 1 do aluno: ");
    scanf("%f", &alunos[i].nota_1);
    printf("Insira a nota 2 do aluno: ");
    scanf("%f", &alunos[i].nota_2);
    media = calcular_media(alunos[i].nota_1, alunos[i].nota_2);
    printf("A media do aluno %i é: %.2f \n", i, media);
    notaTurma = notaTurma + media;
  }
  mediaTurma = calcular_mediaTurma(notaTurma);
  printf("A média da turma é: %.2f", mediaTurma);
}
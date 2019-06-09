#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

typedef struct
{
	float nota1, nota2, nota3, nota4;
} notas;

typedef struct 
{ 
  int matricula;
  char nome[100];
  notas notas;	
} aluno;

void lerString(char msg[], char* salvar, int tamanho) {
  printf("%s", msg);

  fgets(salvar, tamanho, stdin);

  //Remove o caractere \n da string
  strtok(salvar, "\n");
}

int lerInt(char msg[]) {
  char dado[10000];
  lerString(msg, dado, 10000);
  int valor = atoi(dado);
  return valor;
}

float lerFloat(char msg[]) {
  char dado[10000];
  lerString(msg, dado, 10000);
  float valor = atof(dado);
  return valor;
}

notas perguntaNotas() {
  notas n1;
  
  printf("===== NOTAS ===== \n");
  n1.nota1 = lerFloat("Informe a primeira nota: ");
  n1.nota2 = lerFloat("Informe a segunda nota: ");
  n1.nota3 = lerFloat("Informe a terceira nota: ");
  n1.nota4 = lerFloat("Informe a quarta nota: ");

  return n1;
};

aluno perguntaDadosAluno() {
  aluno c1;

  c1.matricula = lerInt("Informe a Matrícula: ");
  lerString("Informe o nome: ", c1.nome, 100);
  c1.notas = perguntaNotas();

  return c1;
}

void mostraDadosAluno(aluno a1, int mostrarMedia) {
  printf("Matrícula: %d\n", a1.matricula);
  printf("Nome: %s\n", a1.nome);
  if(mostrarMedia) {
    printf("Média: %.1f\n", ((a1.notas.nota1 + a1.notas.nota2 + a1.notas.nota3 + a1.notas.nota4) / 4));
  }else {
    printf("Notas\n");
    printf("Nota 1: %.1f\n", a1.notas.nota1);
    printf("Nota 2: %.1f\n", a1.notas.nota2);
    printf("Nota 3: %.1f\n", a1.notas.nota3);
    printf("Nota 4: %.1f\n", a1.notas.nota4);
  }
}

void mostraAlunos(aluno alunos[], int tamanho, int mostrarMedia) {
  printf("======== ALUNOS =========\n\n");
  int i = 0;

  for(i = 0; i < tamanho; i++) {
    aluno c1 = alunos[i];
    mostraDadosAluno(c1, mostrarMedia);
    printf("----------------------\n");
  }

  getchar();
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  int quantidade = 10;
  aluno alunos[quantidade];

  int opcao = -1;

  int indiceAluno = 0;

  do{
    printf("1 - Cadastro de um aluno\n");
    printf("2 - Listagem de alunos e suas 4 notas (%d cadastrados)\n", indiceAluno);
    printf("3 - Listagem de alunos e suas médias\n");
    printf("0 - Sair\n");

    opcao = lerInt("Informe a opção: ");

    system("@cls||clear");

    switch (opcao)
    {
      case 0: break;
      case 1:
        alunos[indiceAluno] = perguntaDadosAluno();
        indiceAluno++;
        break;
    
      case 2: mostraAlunos(alunos, indiceAluno, 0);
        break;

      case 3: mostraAlunos(alunos, indiceAluno, 1);
        break;
      
      default:
        printf("Opção inválida\n");
        break;
    }
  }while(opcao != 0);
}
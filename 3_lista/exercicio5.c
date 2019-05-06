#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct
{
    float n1[100];
    float n2[100];
    float n3[100];
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

int lerDouble(char msg[]) {
    char dado[10000];
    lerString(msg, dado, 10000);
    int valor = atof(dado);
    return valor;
}

notas perguntaNotas() {
    notas n;
    
    printf("===== NOTAS ===== \n");
    lerDouble("Informe a nota 1: ", n.n1);
    lerDouble("Informe o nota 2:", n.n2);
    lerDouble("Informe a nota 3: ", n.n3);

    return n;
};

aluno perguntaDadosAluno() {
    aluno a1;

    a1.matricula = lerInt("Informe o matricula: ");
    lerString("Informe o nome: ", a1.nome, 100);
    a1.notas = perguntaNotas();

    return a1;
}

void mostraDadosAluno(aluno a1) {
    printf("Matricula: %d\n", a1.matricula);
    printf("Nome: %s\n", a1.nome);
    printf("Notas\n");
    printf("Nota 1: %f\n", a1.notas.n1);
    printf("Nota 2: %f\n", a1.notas.n2);
    printf("Nota 3: %f\n", a1.notas.n3);
}

void mostraAlunos(aluno alunos[], int tamanho) {
    printf("======== ALUNOS =========\n\n");
    int i = 0;

    for(i = 0; i < tamanho; i++) {
        aluno c1 = alunos[i];
        mostraDadosAluno(c1);
        printf("----------------------\n");
    }

    getchar();
}

int main() {

    int quantidade = 100;
    aluno alunos[quantidade];

    int opcao = -1;

    int indiceAluno = 0;

    do{
        system("@cls||clear");
        printf("1 - Cadastro de um aluno\n");
        printf("2 - Listagem de alunos e suas 4 notas\n", indiceAluno);
        printf("3 - Listagem dos alunos e suas médias\n", indiceAluno);
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
        
            case 2: mostraAlunos(alunos, indiceAluno);
            break;

            default:
                printf("Opção inválida\n");
            break;
        }
    }while(opcao != 0);
}

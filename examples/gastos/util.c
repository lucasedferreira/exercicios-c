#include <stdio.h>
#include <stdlib.h>

void lerString(char msg[], char *salvar, int tamanho) {
  printf("%s", msg);

  fgets(salvar, tamanho, stdin);

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
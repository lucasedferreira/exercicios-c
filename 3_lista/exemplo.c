#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "strings.h"

typedef struct
{
	char rua[100];
  char complemento[100];
	char cidade[100];
	char estado[100];
} endereco;

typedef struct 
{ 
  int codigo;
  char nome[100]; 
  char email[100]; 
  endereco endereco;	
} cliente;

typedef struct
{
  cliente clientes[10];
  int indiceCliente;
} save_data;

void salvarClientes(cliente clientes[], int indiceCliente) {
  save_data save;

  save.indiceCliente = indiceCliente;
  int i = 0;
  for(i = 0; i < indiceCliente;i++) {
    save.clientes[i] = clientes[i];
  }

  FILE *file;
  file = fopen ("dados.dat", "w");
  fwrite (&save, sizeof(save_data), 1, file);
  fflush(file); 
  fclose(file);
}

int carregarClientes(cliente clientes[]) {
  save_data save;
  FILE *file;
  file = fopen ("dados.dat", "r");
  fread(&save, sizeof(save_data), 1, file);
  int i = 0;
  for(i = 0;i < save.indiceCliente; i++) {
    clientes[i] = save.clientes[i];
  }
  fclose(file);

  return save.indiceCliente;
}

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

endereco perguntaDadosEndereco() {
  endereco e1;
  
  printf("===== ENDEREÇO ===== \n");
  lerString("Informe a rua: ", e1.rua, 100);
  lerString("Informe o complemento:", e1.complemento, 100);
  lerString("Informe a cidade: ", e1.cidade, 100);
  lerString("Informe a sigla do estado: ", e1.estado, 100);

  return e1;
};

cliente perguntaDadosCliente() {
  cliente c1;

  c1.codigo = lerInt("Informe o código: ");
  lerString("Informe o nome: ", c1.nome, 100);
  lerString("Informe o email: ", c1.email, 100);
  c1.endereco = perguntaDadosEndereco();

  return c1;
}

void mostraDadosCliente(cliente c1) {
  printf("Codigo: %d\n", c1.codigo);
  printf("Nome: %s\n", c1.nome);
  printf("Email: %s\n", c1.email);
  printf("Endereço\n");
  printf("Rua: %s\n", c1.endereco.rua);
  printf("Complemento: %s\n", c1.endereco.complemento);
  printf("Cidade: %s\n", c1.endereco.cidade);
  printf("Estado: %s\n", c1.endereco.estado);
}

void mostraClientes(cliente clientes[], int tamanho) {
  printf("======== CLIENTES =========\n\n");
  int i = 0;

  for(i = 0; i < tamanho; i++) {
    cliente c1 = clientes[i];
    mostraDadosCliente(c1);
    printf("----------------------\n");
  }

  getchar();
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  int quantidade = 10;
  cliente clientes[quantidade];

  int opcao = -1;

  int indiceCliente = 0;

  do{
    printf("1 - Cadastrar cliente\n");
    printf("2 - Listar clientes (%d cadastrados)\n", indiceCliente);
    printf("3 - Salvar dados\n");
    printf("4 - Carregar dados\n");
    printf("0 - Sair\n");

    opcao = lerInt("Informe a opção: ");

    system("@cls||clear");

    switch (opcao)
    {
      case 0: break;
      case 1:
        clientes[indiceCliente] = perguntaDadosCliente();
        indiceCliente++;
        break;
    
      case 2: mostraClientes(clientes, indiceCliente);
        break;

      case 3: salvarClientes(clientes, indiceCliente);
        break;
      
      case 4: indiceCliente = carregarClientes(clientes);
        break;
      
      default:
        printf("Opção inválida\n");
        break;
    }
  }while(opcao != 0);
}
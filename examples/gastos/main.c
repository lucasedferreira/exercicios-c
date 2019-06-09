#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "util.c"

typedef struct {
  char data[20];
  char descricao[100];
  float valor;
  int tipo; // 1 - Receita, 2 - Despesa
}registro;

typedef struct {
  registro dados[2000];
  int qtd_registros;
}save_data;

void mostraMenu() {
  printf("1 - Cadastrar receita\n");
  printf("2 - Cadastrar despesa\n");
  printf("3 - Relatorio receitas\n");
  printf("4 - Relatorio despesas\n");
  printf("5 - Relatorio total\n");
  printf("0 - Sair\n");
}

registro adicionaRegistro(int tipo) {
  registro res;

  lerString("Informe a data: ", res.data, 20);
  lerString("Informe a descricao: ", res.descricao, 100);
  res.valor = lerFloat("Informe o valor: ");
  res.tipo = tipo;

  return res;
}

void geraRelatorioRegistro(int tipo, save_data db) {
  char *nome_arquivo = tipo == 1 ? "relatorio_ganhos.txt" : "relatorio_gastos.txt";

  FILE *arquivo;
  arquivo = fopen(nome_arquivo, "w");

  if(tipo == 1)
    fprintf(arquivo, "=========== GANHOS =========\n\n");
  
  if(tipo == 2)
    fprintf(arquivo, "=========== GASTOS =========\n\n");

  int i = 0;
  for(i = 0;i < db.qtd_registros;i++) {
    registro reg = db.dados[i];

    if(reg.tipo == tipo) {
      fprintf(arquivo, "%20s %100s %10.2f\n", reg.data, reg.descricao, reg.valor);
    }
  }
  fclose(arquivo);

  printf("Arquivo %s salvo com sucesso!", nome_arquivo);
  getchar();
}

void salvarDb(save_data db) {
  FILE *arquivo;

  arquivo = fopen("banco.dat", "w");
  fwrite(&db, sizeof(save_data), 1, arquivo);
  fclose(arquivo);
}

save_data carregarDb() {

  save_data db;

  FILE *arquivo;

  arquivo = fopen("banco.dat", "r");
  if(arquivo != NULL) {
    fread(&db, sizeof(save_data), 1, arquivo);
    fclose(arquivo);
  }else{
    db.qtd_registros = 0;
  }

  return db;
}

void geraRelatorioTotal(save_data db) {
  FILE *arquivo;

  arquivo = fopen("relatorio_total.txt", "w");

  float total_ganhos = 0;
  float total_gastos = 0;

  int i = 0;
  for(i = 0; i < db.qtd_registros; i++) {
    registro res = db.dados[i];
    if(res.tipo == 1) {
      fprintf(arquivo, "%20s %100s %10.2f\n", res.data, res.descricao, res.valor);
      total_ganhos += res.valor;
    } else {
      fprintf(arquivo, "%20s %100s (%10.2f)\n", res.data, res.descricao, res.valor);
      total_gastos += res.valor;
    }
  }

  fprintf(arquivo, "Saldo: %.2f\n", total_ganhos - total_gastos);

  fclose(arquivo);
}

int main() {
  setlocale(LC_ALL, "Portuguese");

  save_data db = carregarDb();

  int opcao = 0;

  do{
    mostraMenu();

    opcao = lerInt("Informe a opção: ");

    switch (opcao)
    {
        case 0: break;

        case 1: db.dados[db.qtd_registros] = adicionaRegistro(1);
                db.qtd_registros++;
                salvarDb(db);
                break;

        case 2: db.dados[db.qtd_registros] =adicionaRegistro(2);
                db.qtd_registros++;
                salvarDb(db);
                break;

        case 3: geraRelatorioRegistro(1, db);
                break;
        
        case 4: geraRelatorioRegistro(2, db);
                break;

        case 5: geraRelatorioTotal(db);
                break;

    }

  }while(opcao != 0);

}
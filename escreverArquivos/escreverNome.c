#include <stdio.h>
#include <stdlib.h>

int main() {
 char quer;
 printf("Quer adicionar um novo nome? (S/N)");
 scanf(" %c", &quer);

 if (quer == 'S') {
  char nome[26];
  printf("Digite o nome: ");
  scanf("%s", &nome);

  FILE* f;
  f = fopen("nomes.txt", "r+");

  if (f == 0) {
   printf("Desculpe o banco de dados esta com problemas :P");
   exit(1);
  }

  // Primeiro pega a quantidade de palavras no arquivo
  int qtd;
  // r+ leitura e escrita
  fscanf(f, "%d", &qtd); // vai ler a primeira linha que deve conter no arquivo que deve ser a quantidade de nomes;  
  qtd++;

  // Vai para o começo do arquivo e coloca a quantidade de nomes no arquivo
  fseek(f, 0, SEEK_SET);
  fprintf(f, "%d", qtd);

  // Vai para o final e coloca o nome que a gente quer colocar
  fseek(f, 0, SEEK_END);
  fprintf(f, "\n%s", nome);

  // Fecha o arquivo
  fclose(f);
 }

 return 0;
}
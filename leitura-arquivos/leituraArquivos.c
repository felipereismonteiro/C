#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

int main() {
 FILE* f;
 // assim ele le o arquivo por causa do r que no caso é read
 f = fopen("nomes.txt", "r");

 if (f == 0) {
  printf("Desculpe banco de dados nao disponivel");
  // terminar o programa
  exit(1);
 }

 int quantidadeDePalavras;
 fscanf(f, "%d", &quantidadeDePalavras);

 srand(time(0));
 int indiceRandomico = rand() % quantidadeDePalavras;

 char nome[20];

 for(int i = 0; i < indiceRandomico; i++) {
  fscanf(f, "%s", nome);
 }
 printf("%s\n", nome);
 
 fclose(f);

 return 0;
}
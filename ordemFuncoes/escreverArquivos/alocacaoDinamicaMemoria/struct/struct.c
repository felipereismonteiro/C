#include <stdio.h>

struct variaveis {
 int idade;
 char nomeLetra;
 char cidadeLetra
};

// apelido
typedef struct variaveis VARIAVEIS;

int main() {
 struct variaveis pessoa;

 pessoa.idade = 21;

 printf("%d", pessoa.idade);

 return 0;
}
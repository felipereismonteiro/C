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

 // um jeito de fazer o ponteiro tbm é assim p->x = 1;

 printf("%d", pessoa.idade);

 return 0;
}
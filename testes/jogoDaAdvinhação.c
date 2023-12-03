#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMERO_TENTATIVAS 5

int main() {
 int soma = 0;

 for (int i = 0; i <= 100; i++) {
  soma += i;

  printf("Soma: %d\n", soma);
 }

 return 0;
}
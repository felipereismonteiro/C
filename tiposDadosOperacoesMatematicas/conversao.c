#include <stdio.h>;

int main() {
  int inteiro = 10;
  int inteiro2 = 2;

  double divisao = inteiro / inteiro2;
  // devia voltar 5.0

  double divisao2 = inteiro / (double)inteiro2;
  // pode ser qualquer tipo 

  printf("%1.f\n%.1f", divisao, divisao);
  
  return 0;
}  
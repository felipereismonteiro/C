#include <stdio.h>;

int main() {
  char letra1 = 'f';
  char letra2 = 'e';
  char letra3 = 'l';
  char letra4 = 'i';
  char letra5 = 'p';
  char letra6 = 'e';

  int notas[10];

  notas[0] = 10;
  notas[1] = 20;
  notas[2] = 30;
  notas[3] = 40;

  char palavra[7];

  palavra[0] = 'f';
  palavra[1] = 'e';
  palavra[2] = 'l';
  palavra[3] = 'i';
  palavra[4] = 'p';
  palavra[5] = 'e';
  palavra[6] = '\0'; // para parar quando tiver esse barra 0 o sprintf

  printf("%c%c%c%c%c%c", palavra[0],palavra[1],palavra[2],palavra[3],palavra[4],palavra[5]);

  printf("%c%c%c%c%c%c", letra1, letra2, letra3, letra4, letra5, letra6);

  //  printf de string
  //  no caso seria um array q tenha essa palavra entao ele imprime tudo e n precisa fazer esse printf grande
  sprintf(palavra, "felipe");

  
  // jeito mais facil de fazer uma string
  char nome[6];
  sprintf(nome, "Felipe");

  return 0;
}
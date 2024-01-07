#include <stdio.h>
#include <string.h>

int main() { 
  char palavraSecreta[20];

  sprintf(palavraSecreta, "MELANCIA");

  int enforcou = 0;
  int acertou = 0;
  
  do {
  for(int i = 0; i < strlen(palavraSecreta); i++) {
    printf("_ ");
  } 
    printf("\n");

    char chute;

    // se nao coloar o epaço antes ele simplesmente considera a letra e o enter entao ele imprime duas vezes o loop
    scanf(" %c", &chute);
  } while(!acertou && !enforcou);

  
  return 0;
}

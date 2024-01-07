#include <stdio.h>
#include <string.h>

int main() { 
  char palavraSecreta[20];

  sprintf(palavraSecreta, "MELANCIA");

  for(int i = 0; i < strlen(palavraSecreta); i++) {
    printf("%c", palavraSecreta[i]);
  } 
  
  return 0;
}

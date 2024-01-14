#include <stdio.h>
#include <string.h>

int main() {
  char palavraSecreta[6] = "felipe";

  int enforcou = 0;
  int acertou = 0;
  int jogoFinalizado = 0;

  char chutes[26];
  int tentativas = 0;
  int acertos = 0;

  do {
    char chute;
    printf("\nDigite seu chute: ");
    scanf(" %c", &chute);
    chutes[tentativas] = chute;
    tentativas++;

    acertos = 0;

    for (int i = 0; i < strlen(palavraSecreta); i++) {
      acertou = 0;
      for (int j = 0; j < strlen(chutes); j++) {
        if (chutes[j] == palavraSecreta[i]) {
          printf("%c", palavraSecreta[i]);

          acertos++;

          acertou = 1;
          break;
        }
      }

      if (acertos >= strlen(palavraSecreta)) {
        jogoFinalizado = 1;
        break;
      }
      if (acertou) {
        continue;
      }
      printf("_ ");
    }
  } while (!enforcou && !jogoFinalizado);

  printf("\nVocê ganhou!!!");

  return 0;
}

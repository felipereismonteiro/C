#include <stdio.h>
#include <string.h>

/**
 * Se colocar o * antes do tentativas para ser como ponteiro, agora no array de chutes não se aplica, porque
 * o nome de um array em C, quando usado como argumento de uma função, já é um ponteiro para o primeiro elemento do array.
 *
 * Então, ao declarar com &, estou apontando para a variável que eu quero (chuteFunction(chutes, &tentativas, &chute)); 
 * e ao pegar na função com *, estou usando o valor dessa variável.
 */
void chuteFunction(char chutes[26], int *tentativas) {
  char chute;
  printf("\nDigite seu chute: ");
  scanf(" %c", &chute);

  chutes[*tentativas] = chute;
  (*tentativas)++;
}

int main() {
  char palavraSecreta[6] = "felipe";

  int enforcou = 0;
  int acertou = 0;
  int jogoFinalizado = 0;

  char chutes[26];
  int tentativas = 0;
  int acertos = 0;

  do {
    chuteFunction(chutes, &tentativas);

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

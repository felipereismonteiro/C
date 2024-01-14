#include <stdio.h>
#include <string.h>

/** Se coloca o * antes do tentativas para ser como ponteiro, agora no array de chutes nao se aplica pq 
 * Isso ocorre porque o nome de um array em C, quando usado como argumento de uma função, já é um ponteiro para o primeiro elemento do array.
 */

/**Entao ao declarar com & eu estou apontando para a variavel q eu quero  chuteFunction(chutes, &tentativas, &chute); e ao pegar na funcao com o * eu estou usando o valor dessa variavel*/
void chuteFunction(char chutes[26], int *tentativas, char *chute) {
  printf("\nDigite seu chute: ");
  scanf(" %c", chute);

  printf("\n%c", chute);

  chutes[*tentativas] = *chute;
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
    char chute;
    chuteFunction(chutes, &tentativas, &chute);

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

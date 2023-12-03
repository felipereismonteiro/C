#include <stdio.h>

int main() {

 printf("Bem vindo ao jogo de advinhação\n");

 int numeroJogo = 42;

 int chute;
 printf("Digite seu chute: ");
 scanf("%d", &chute);

 while (chute != numeroJogo) {
  printf("Você errou!!! tente novamente\n");
  printf("Digite outro número: ");

  scanf("%d", &chute);
 }
 printf("Você acertou!!! o número era %d\n", numeroJogo);

 return 0;
}
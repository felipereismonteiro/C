#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMERO_TENTATIVAS 5

int main() {
 // Inicializa a semente do gerador de números aleatórios
 srand(time(NULL));

 printf("Seja bem vindo ao jogo da advinhação!!!\n");
 int chute;
 int numeroAleatorio = rand() % (10 - 0 + 1) + 0;

 printf("Digite o seu chute: ");
 scanf("%d", &chute);

 while (chute != numeroAleatorio) {
  if (chute > numeroAleatorio) {
   printf("Seu chute foi maior que o número\n");
   printf("Digite outro número: ");
   scanf("%d", &chute);
  } else {
   printf("Seu chute foi menor que o número\n");
   printf("Digite outro número: ");
   scanf("%d", &chute);
  }
 }


 printf("Você acertou!! o número era: %d\n", numeroAleatorio);

 return 0;
}
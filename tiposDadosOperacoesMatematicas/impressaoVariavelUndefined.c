#include <stdio.h>;

int main() {
  int inteiro, inteiroSomado;

  printf("%d", inteiro);
  // caso imprima qualquer uma dessas variavel ele vai voltar um numero aleatorio
  // as vezes a ocupacao de memoria do programa anterior ou qualquer outra coisa 
  // depende do compilador 

  inteiro = 5;
  inteiroSomado = inteiro + 13;
  
  printf("%d", inteiroSomado); 

  return 0;
}
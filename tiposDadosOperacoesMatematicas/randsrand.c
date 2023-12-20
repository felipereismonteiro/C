#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
  int segundos = time(0);
  int randomico = rand();
  srand(segundos); // desse jeito fica certo 
  // mas esse rand depois da primeira inicialização o numero nunca vai mudar, por causa da seed que sempre eh mesma
  // resto da divisão tipo entre 0 e 100
  
 printf("%d, %d\n", randomico, segundos);

 return 0;
}
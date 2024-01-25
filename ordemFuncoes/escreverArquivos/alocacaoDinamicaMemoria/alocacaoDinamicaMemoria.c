#include <stdlib.h>
#include <stdio.h>

int main() {
 // quando vc declara uma variavel com tipo ele aloca em tempo de compilação o espaço necessario
 // para aquela variavel 

 /*
  Agora usando o malloc ele aloca em tempo de execução
 */

 /** aloca o espaço em tempo de compilção*/
 int numero = 0;

 /** aloca o espaço em tempo de execução*/

 int* numeroDinamico = malloc(4);
 // declarando primeiro ele vai como 0 q eh false

 printf("%d\n", *numeroDinamico);
 /** assim ele vai declarar ao valor o 5 e se passar sem o * ele nao consegue declarar*/
 *numeroDinamico = 5;
 

 printf("%d", *numeroDinamico);
 /** Sempre que alocar de forma dinamica assim precisamos liberar esse espaço depois de usado*/ 
 free(numeroDinamico);

 return 0;
}
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

 /** precisamos passar certinho o numero de bytes que a variavel vai precisar
  * se for um int vai precisar de 4 se for um char vai precsar de 1
  * e assim por diante,
  * se passar o numeros de bytes a variavel ele simplesmente nao aloca
  * 
  * ou tambem dependendo de onde for rodar vc pode colocar sizeof(int) por exemplo
  * nisso ele vai calcular automaticamente o tamanho pra vc
 */
 // int* numeroDinamico = malloc(1);

 int* numeroDinamico = malloc(sizeof(int));
 // declarando primeiro ele vai como 0 q eh false

 /** assim ele vai declarar ao valor o 5 e se passar sem o * ele nao consegue declarar*/
 *numeroDinamico = 5;
 

 printf("%d", sizeof("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"));
 // cada caractere é 1 byte

 /** Sempre que alocar de forma dinamica assim precisamos liberar esse espaço depois de usado*/ 
 free(numeroDinamico);

 /** alocando de forma dinamica um array assim int[] com 5 posições + 1 usando de exemplo se por acaso
  * fosse um char
 */
 int** matriz = malloc(sizeof(int) * (5 + 1));
 // + 1 se caso for um char pq ele precisa imprimir o \0 no final que diz o final da string

 /** Liberando de cada matriz pq se imprimiros o primeiro apenas e mostra toda a linha matriz
  * entao se dermos o free ele libera toda aquela linha da matriz
 */
 for (int i = 0; i < 5; i++) {
  free(matriz[i]);
 }

 free(matriz);
 
 return 0;
}
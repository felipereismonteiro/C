#include <stdio.h>
#include <string.h>

int main() {
 int arrayDeA[26];
 /** A função memset() é uma função da biblioteca padrão de C, <string.h>, usada para preencher um bloco de memória com um byte específico. Aqui está a assinatura da função memset():*/
 memset(arrayDeA,'A', sizeof(arrayDeA));

 printf("%c", arrayDeA[20]);

 return 0;
}
#include <stdio.h>

int main() {
 char matriz[5][10];

 matriz[0][1] = 'a';

 // devolve o array se passa apenas a primeira posição;
 printf("%c", matriz[1]);
 
 return 0;
}
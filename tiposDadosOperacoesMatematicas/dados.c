#include <stdio.h>

int main() {
 short inteiroMenor;
 // 2bytes
 int inteiro = 1; // Guarda 4 bytes que equivale a 32 bits ou seja consegue guardar
 // 4bytes = 32bits = 2 elevado a 32 números diferentes
 long inteiroLongo;
 // 8bytes = 64bits = 2 elevadoi a 64 numeros diferentes

 double pi = 3.1415;
 // 8bytes = 64bits = 2 elevadoi a 64 numeros diferentes
 float pi;
 // 4bytes
 
 char caractere = 'f';

 printf("%d\n", inteiro);
 printf("%f\n", pi)

 return 0;
}
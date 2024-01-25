#include <stdio.h>
// Declarando assim o compilador nao vai se importar com a ordem das funcoes
// Ele ja vai saber q ela existe
void printNumero(int numero);
void printLetra(char letra);


void printNumero(int numero) {
 printf("%d", numero);
}

void printLetra(char letra) {
 printf("%c", letra);
}

int main() {

 printLetra('f');
 printNumero(2);


 return 0;
}
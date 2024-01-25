#include <stdio.h>
#include <math.h>

int numeroPrincipal = 2;
int numeroPotencializado = 3;

int potencia() {
 int resultado = pow(numeroPrincipal, numeroPotencializado);
 return resultado;
}

int main() {
 int resultado = potencia();

 printf("%d\n", resultado);

 return 0;
}
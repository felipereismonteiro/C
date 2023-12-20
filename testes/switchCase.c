#include <stdio.h>

int main() {
 int numero = 0;

 switch(numero) {
  case 2: 
   numero = 2;
   break;
  case 3:
   numero = 5;
   break;
  default:
   numero = 0;
   break;
 }

 return 0;
}
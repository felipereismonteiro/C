#include <stdio.h>

int main() {
 int inteiro = 2;
 double dobro = 2.0;

 double soma = (inteiro + dobro) / 2; 
 // se fizer assim ele vai voltar um int
 // porque o programa ele faz a operação primeiro e depois guarda a variável

 // RESOLUÇÃO 1
 double soma = (inteiro + dobro) / 2.0;
 // porque agora ele ta fazendo a divisão por um double e não por inteiro  

  // RESOLUÇÃO 2
 double soma = (inteiro + dobro) / (double)2;
 // Conversão de tipos CASTING

 return 0;
}
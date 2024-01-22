#include <stdio.h>
/**Assim usando o * depois do tipo da variável eu passo o endereço da memoria*/
void calcula(int* soma) {
 // E nisso eu pego o valor usando o (*variavel) para resolver o endereço 
 printf("%d \n %d\n", (*soma), soma);

}


int main() {
 int numero = 0;

 printf("%d\n %d", numero, &numero);

 /**Usando o * eu passo o endereço na memória como mostrado no printf acima*/
 calcula(&numero);

 return 0;
}
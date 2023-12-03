#include <stdio.h>

int main() {
	int x,y;
	
	printf("Digite primeiro numero: ");
	scanf("%d",&x);
	
	printf("Digite o segundo numero a ser multiplicado: ");
	scanf("%d",&y);
	
	int resultado = x * y;
	
	printf("O resultado da multiplicação dos numeros é: %d", resultado);
}
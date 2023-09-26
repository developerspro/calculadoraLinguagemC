#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero1;
	int numero2;
	int total;
	printf("Programa para calcular a soma de 2 numeros.\n");
	printf("Digite um valor para o numero1:");
	scanf("%d",&numero1);
	printf("Digite um valor para o numero2:");
	scanf("%d",&numero2);
	
	total = numero1+numero2; 
	if(total>10){
	 printf("Valor da soma maior que 10\n");
	} else {
		if(total<0){
			printf("Valor negativo");
		} else {
			printf("Valor menor ou igual a 10\n");
			printf("Porem maior que zero!");
		}
	 	
	}
	
	printf(" A soma de %d + %d , resultado: %d", numero1, numero2, total);
	return 0;
}

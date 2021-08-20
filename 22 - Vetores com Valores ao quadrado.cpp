/*Exercicio 03*/
#include<stdio.h>
int main (){
	int vet[9], quad[9], i, x;
	for(i=0;i<10;i++){
		printf("Digite o valor %d:" ,i);
		scanf("%d", &x);
		vet[i] = x;
		quad[i] = x*x;
	}
	for(i=0; i<10; i++){
		printf("\n");
		printf("O resultado do %d: %d\n", i, quad[i]);
	}
}

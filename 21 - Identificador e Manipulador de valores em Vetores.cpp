/*Exercicio 05*/
#include<stdio.h>
int main (){
	float vet[10];
	int i, x, y, neg=0, soma;
	
	for(i=0; i<10; i++){
		printf("Digite o valor %d:",i);
		scanf("%d", &y);
		vet[i]= y;
		if(vet[i]<0){
			neg++;
		}else{
			soma = soma + vet[i];
		}
	}
	printf("\nO vetor possui %d numeros negativos", neg);
	printf("\nA soma dos positivos e: %d", soma);
}

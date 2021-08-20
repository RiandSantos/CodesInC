#include<stdio.h>
#include<conio.h>
int main (){
	int x;
	printf("Quantos números serão digitados: ");
	scanf("%d", &x);
	
	int vet[x], i;
	for(i=0;i<x;i++){
		printf("Digte o valor %d:", i);
		scanf("%d", &vet[i]);
	}
	for(x=x-1;x>=0;x--){
		printf("%d \n", vet[x]);
	}
}

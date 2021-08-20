#include<stdio.h>
#include<string.h>
int main (){
	int qtd;
	char nome[30];
	printf("Digite uma palavra:\t");
	fgets(nome, 30, stdin);
	qtd = strlen(nome);
	printf("A palavra %s tem %d letras!",nome, qtd-1);
}

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<conio.h>
int main (){
	setlocale(LC_ALL, "portuguese");
	int ini, fin, cont, soma, esc;
	printf("----------Tab�ada----------\n\n");
	printf("Digite uma tab�ada inicial e uma final(ex: do 1 ao 10(Digite '1 10')): ");
	scanf("%d%d", &ini, &fin);
	do{
		for(cont = 0; cont <= 10; cont++){
			soma = ini * cont;
			printf("%d X %d = %d\n", ini, cont, soma);
		}
		ini++;
		printf("\n==================================================================\n");
	}while(ini < fin+1);
	printf("Deseja salvar em um arquivo texto? // Do you wish save the result in a archive .txt?\n1 - Sim\n2 - N�o\nR:");
	scanf("%i", &esc);
	if(esc == 1){
		printf("\nDigite novamente os valores que voc� escolheu:\n");
		system("Tabuada.exe > tabuada.txt");
	}
}

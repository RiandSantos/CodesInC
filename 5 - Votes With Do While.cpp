#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main (){
	int white = 0, vote1 = 0, vote2 = 0, vote3 = 0, vote, conti;
	do{
		system("cls");
		printf("Choose one of the political parties: \nWind - 18\nGale - 22\nStorm - 26\nWhite Vote - 0\n\n");
		scanf("%i", &vote);
		if (vote == 0)
			white++;
		else if(vote == 1){
			vote1++;
		}else if(vote == 2){
			vote2++;
		}else if(vote == 3){
			vote3++;
		}else{
			printf("\n\aValor inválido\a");
		}
		printf("\n\nDeseja votar denovo? \n1 - Sim \n2 - Não \nR:");
		scanf("%i", &conti);
	}while(conti == 1);
	sleep(1);
	while(conti < 50){
		system("cls");
		printf("Computando votos...");
		conti++;
	}
	sleep(1);
	printf("\nVotos para Huguinho: %i \nVotos para Zezinho: %i \nVotos para Luizinho: %i \nVotos em branco: %i", vote1, vote2, vote3, white);
}

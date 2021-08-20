#include<stdio.h>
#include<conio.h>
int main()
{
	int cont=1, vote, win=0, gal=0, sto=0, null=0, whi=0;
	
	printf("Choose one of the political parties: \nWind - 18\nGale - 22\nStorm - 26\nWhite Vote - 0\n\n");
	
	while(cont<=10){
		printf("Voter vote %d: ", cont);
		scanf("%d",&vote);
		if(vote == 18){
			win++;
		}
		else if(vote == 22){
			gal++;
		}
		else if(vote == 26){
			sto++;
		}else if(vote == 0){
			whi++;
		}
		else{
			null++;
		}
		cont++;
	}
	printf("\n\n%d votes for Sr. Wind", win);
	printf("\n%d votes for Sra. Gale", gal);
	printf("\n%d votes for Sr. Storm", sto);
	printf("\n%d votes in white", whi);
	printf("\n%d null votes", null);
}

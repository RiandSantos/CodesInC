#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	float spent, sv;
	
	printf("Whats is the amount spent?\nR: ");
	scanf("%f",&spent);
	if (spent <= 0){
		printf("Invalid Value");
	}else{
		if(spent < 100){
			printf("\nYou can split up to 2 times.\n");
			sv = spent / 2;
			printf("Will get 2 installments of %.2f", sv);
		}else if (spent >= 100 && spent <=300){
			printf("\nYou can split up to 3 times.\n");
			sv = spent / 3;
			printf("Will get 3 installments of %.2f", sv);
		}else{
			printf("\nYou can split up to 4 times.\n");
			sv = spent / 4;
			printf("Will get 4 installments of %.2f", sv);
		}
	}
}

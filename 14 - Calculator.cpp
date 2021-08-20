#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	float n1, n2, aswr, type, chc = 1;
	while(chc == 1){
		system("cls");
		printf("First Number: ");
		scanf("%f", &n1);
		printf("Second Number ");
		scanf("%f", &n2);
		printf("\nChoice the Operation Type:\n1 - Addiction\n2 - Subtraction\n3 - Multiplication\n4 - Division\n\nA: ");
		scanf("%f", &type);
		if(type == 1){
			aswr = n1 + n2;
			printf("\nThe Result is %.2f", aswr);
		}else if(type == 2){
			aswr = n1 - n2;
			printf("\nThe Result is %.2f", aswr);
		}else if(type == 3){
			aswr = n1 * n2;
			printf("\nThe Result is %.2f", aswr);
		}else if(type == 4){
			aswr = n1 / n2;
			printf("\nThe Result is %.2f", aswr);
		}else{
			printf("Invalid Number");
		}
		printf("\n\nDo you want make a new operation:\n1 - Yes\n2 - No\nR:");
		scanf("%f", &chc);
	}
}

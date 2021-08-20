#include<stdio.h>
int main (){
	float n1, n2;
	printf("Enter Value 1: ");
	scanf("%f", &n1);
	printf("\nEnter Value 2: ");
	scanf("%f", &n2);
	n1 = n1 + n2;// Add the 2 variables                              ex: 1 + 2 = n1  = 3
	n2 = n2 + n1;// Add the 2 variables                              ex: 2 + 3 = n2  = 5
	n1 = n2 - n1;// Subtraction of summed values                     ex: 5 - 3 = n1  = 2
	n2 = n2-2*n1;// Multiplication and subtraction of summed values  ex:5 - 2*2 = n2 = 1
	
	printf("\n\n\nValue 1:  %.0f \nValue 2:  %.0f", n1, n2);
}

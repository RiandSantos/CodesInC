#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	int l1, l2, l3;
	printf("Digite o primeiro lado do triangulo: ");
	scanf("%d",&l1);
	printf("Digite o segundo lado do triangulo: ");	
	scanf("%d",&l2);
	printf("Digite o terceiro lado do traingulo: ");
	scanf("%d",&l3);
	if (l1 > l2 + l3 || l2 > l1 + l3 || l3 > l1 +l2){//Condi��o para ser um triangulo
		printf("Triangulo inv�lido.");
	}else
	{
	if (l1 == l2 && l2==l3){
	printf("� um triangulo equilatero!");
	}
	else if ((l1 != l2) && (l2 != l3) && (l1 != l3)){
		printf("� um triangulo escaleno!");
	}
	else{
		printf("� um triangulo is�sceles");
       }
	}
}

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
	if (l1 > l2 + l3 || l2 > l1 + l3 || l3 > l1 +l2){//Condição para ser um triangulo
		printf("Triangulo inválido.");
	}else
	{
	if (l1 == l2 && l2==l3){
	printf("É um triangulo equilatero!");
	}
	else if ((l1 != l2) && (l2 != l3) && (l1 != l3)){
		printf("É um triangulo escaleno!");
	}
	else{
		printf("É um triangulo isósceles");
       }
	}
}

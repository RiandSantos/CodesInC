#include<stdio.h>
#include<conio.h>
int main(){
	int cont = 1, n,impar=0, par=0;
	while(cont <= 6){
		printf("Digite um numero: ");
		scanf("%d", &n);
			if(n%2==0){
	    	par = par + 1;
			}else{
			impar = impar + 1;
			}
		cont = cont+1;
	}
	printf("%d desses numeros sao pares", par);
	printf("\n%d desses numeros sao impares", impar);
	getch();
}

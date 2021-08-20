#include<stdio.h>
#include<conio.h>
int main()
{
	int cont=1,n,maiores=0;
	
	while(cont<=10){
		printf("Numero %d:",cont);
		scanf("%d",&n);
	
			if(n>10){
			maiores=maiores+1;}
		cont=cont+1;
	}
	printf("Foram digitados %d números acima de 10.",maiores);
}

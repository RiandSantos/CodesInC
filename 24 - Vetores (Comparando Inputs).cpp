#include<stdio.h>
#include<conio.h>
int main()
{
	int vet[5],i,maior=0,menor=0,igual=0;
	for(i=0;i<5;i++){
		printf("Posicao %d:",i);
		scanf("%d",&vet[i]);}
	for(i=1;i<5;i++){
		if(vet[i]>vet[0])
			maior++;
		if(vet[i]<vet[0])
			menor++;
		if(vet[i]==vet[0])
			igual++;}
		printf("Quantidade maiores que o primeiro=%d\n",maior);
		printf("Quantidade menores que o primeiro=%d\n",menor);
		printf("Quantidade iguais ao primeiro=%d\n",igual);
	getch();
}

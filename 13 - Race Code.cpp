#include<stdio.h>
#include<conio.h>
int main()
{
	int cont;
	float volta,rapida=9000,lenta,media,acum=0;
	for(cont=1;cont<=7;cont++)
	{
		printf("Volta %d:", cont);
		scanf("%f",&volta);
		acum=acum+volta;
		if(volta<rapida)
			rapida=volta;
		if(volta>lenta)
			lenta=volta;
	}
	media= acum / 7;
	printf("\nTempo médio = %.2f\n", media);
	printf("Tempo volta mais rapida = %.2f\n", rapida);
	printf("Tempo volta mais lenta = %.2f", lenta);
}

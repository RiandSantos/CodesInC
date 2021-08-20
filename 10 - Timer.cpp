#include<stdio.h>
#include<windows.h>
int main(){
	float n1, temp;
	printf("Enter a Value: ");
	scanf("%f", &n1);
	for(temp = n1; temp!=-1; temp-- ){
		printf("%.0f\n", temp);
		Sleep(100);
	}
	printf("Bomb has been planted...\n");
	Sleep(2000);
	printf("pi...\n\a");
	Sleep(1000);
	printf("pipi...\n\a");
	Sleep(1000);
	printf("pipipi...\n\a");
	Sleep(1000);
	printf("pipipipi...\n\a");
	Sleep(1000);
	printf("pipipipipiiiiiiiii...\n\a");
	Sleep(1000);
	printf("BOOOOOOOOOOOOMMMMMMMMMMMMMMMMMMMMMMMMMMMMM!!!!!!!");
	
}

#include <stdio.h>
#include <conio.h>
int main()
{
	/*Declara��o das Variaveis*/
	char password[10], username[10], ch;
	int i, j;
	/*Inputs da aplica��o*/
	printf("Username: ");
	gets(username);
	printf("Password: ");
	for(i = 0;i < 100;i++) {
		ch = getch();
		if(ch == 13)
		break;
	password[i] = ch;
	ch = '*' ;
	printf("%c ", ch);
	}

	password[i] = '\0';
	printf("\n\nYour password is hacked : ");
	for(j = 0;j < i;j++)
		printf("%c", password[j]);
	return 0;
}

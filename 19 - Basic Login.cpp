#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<conio.h>
#include<unistd.h>
#include<string.h>
int main(){
	setlocale(LC_ALL, "portuguese");//Alogritmo para aceitar acentua��es
	int esc, rept, rept1, rept2, i;
	char user[20], pass[20], vuser[20], vpass[20], crip;

	//LOGIN	
	do{
		system("cls");
		printf("Voc� j� possui uma conta? \n1 - Sim \n2 - N�o \nR:");
		scanf("%i", &esc);
		if(esc == 1){
			do{
				printf("Username: ");
				scanf("%s", vuser);
				if(strcmp(vuser, user) == 0){
					rept1 = 0;//Sai do DO...WHILE do username:
					system("cls");
				}else{
					printf("\aUsuario n�o encontrado");
					sleep(1);
					system("cls");
					rept1 = 1;//retorna pro username:
				}
			}while(rept1 == 1);
			do{
				printf("Username: %s", vuser);
				printf("\nSenha: ");
									for(i = 0;i < 100;i++) {
									crip = getch();
									if(crip == 13)
									break;
									vpass[i] = crip;
									crip = '*' ;
									printf("%c ", crip);
									}
				if(strcmp(vpass, pass) == 0){
					printf("\nCorreto!\n");
					sleep(1);
					rept = 0;//Avan�a para a tela p�s cadastro.
					rept2 = 0;//Sai do DO...WHILE da senha:
				}else{
					printf("\n\aSenha incorreta!");
					sleep(1);
					system("cls");
					rept2 = 1;//retorna pra senha:
					memset (&vpass, 0, sizeof (vpass) );//limpa o Valor da variavel VPASS para receber um novo valor!
				}
			}while(rept2 == 1);
		}else if(esc == 2){
			printf("_______________________\n  Crie sua conta\n_______________________\n\n");
			printf("Username:");
			scanf("%s",user);
			printf("Senha:");
			scanf("%s", pass);
			printf("*Contra criada com sucesso*");
			sleep(1);
			rept = 1;//Retorna para a tela de Login ap�s a cria��o.
		}else{
			printf("\aValor inv�lido!");
			rept = 1;//Retorna para a primeira pergunta.
		}
	}while(rept == 1);//Enquanto rept == 1 ele sempre perguntar� se possui cadastro.
	
	//ACESSO A APLICA��O
	system("color 2");
	printf("\nConectado...\nBem Vindo(a) %s!", user);
}

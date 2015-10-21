/*
https://en.wikipedia.org/wiki/Hangman_%28game%29
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char secret [100];
	char word [100];
	unsigned len ;

	printf("jogo da forca, (C) 2015\n");

	printf("informe a palavra:\n");

	scanf("%s", secret);
	
	//FIXME: deve ficar no inicio da tela 
	//int i
	//for (i = 0 ; i < 20 ; i++)
	//	prinf("\n");

	printf("a palavra informada tem : [%s]\n", secret);

	len = strlen(secret);

	printf("informe a palavra secreta");
	scanf("%s", secret);
	
	int j;
	for ( j = 0 ; j ; j++){
		word [ j ] = '-';
	
	}

	printf("a palavra apresentada é: [%s]\n", word);	
	
	printf("*FIM*\n");

	return 0;
}

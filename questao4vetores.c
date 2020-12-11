/*
Vetores
Questao 4
Felipe
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");

	char L[10];
	int letra;
	int vogal = 0;
	int cons = 0;
	float perc_c;

	for (letra = 0; letra < 10; letra++)
	{
		printf("forneca a letra %d do vetor: ", letra);
		scanf(" %c", &L[letra]);
	}
	for (letra = 0; letra < 10; letra++)
	{
		if (L[letra] == 'a' || L[letra] == 'e' || L[letra] == 'i' || L[letra] == 'o' || L[letra] == 'u')
		{
			vogal = vogal + 1;
		}
		else //se na� for vogal � consoante
			cons = cons + 1;
	}

	printf("quantidade de vogais no vetor: %d \n", vogal);
	perc_c = (float)cons / 10 * 100;
	printf("percentual de consoantes %.2f\n", perc_c);

	system("PAUSE");
	return 0;
}

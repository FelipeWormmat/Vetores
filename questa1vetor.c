/*
Vetores
Questao 1
Felipe
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");

	float VN[10];
	int n;
	float maior;
	float menor;
	int posimaior;
	int posimenor;

	for (n = 0; n < 10; n++)
	{
		printf("Forneca um numero pata posicao %d: ", n);
		scanf("%f", &VN[n]);
	}
	maior = VN[4];
	posimaior = 4;
	menor = VN[4];
	posimenor = 4;

	for (n = 0; n < 10; n++)
	{
		if (VN[n] > maior)
		{
			maior = VN[n];
			posimaior = n;
		}
		if (VN[n] < menor)
		{
			menor = VN[n];
			posimenor = n;
		}
	}

	printf("Maior valor do vetor %.f  na posicao %d\n", maior, posimaior);
	printf("Menor valor do vetor %.f  na posicao %d \n", menor, posimenor);

	system("PAUSE");
	return 0;
}

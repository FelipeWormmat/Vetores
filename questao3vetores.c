/*
Vetores
Questao 3
Felipe
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 20

int main()
{
	setlocale(LC_ALL, "");

	int quantidade[N];
	float preco[N];
	float fat[N]; //vetor que guarda o faturamento por produto
	int prod;
	float fat_total = 0;

	for (prod = 0; prod < N; prod++)
	{
		printf("forneca a quantidade do produto %d:", prod);
		scanf("%d", &quantidade[prod]);
		printf("forneca o preco do produto %d:", prod);
		scanf("%f", &preco[prod]);
		fat[prod] = quantidade[prod] * preco[prod];
		printf("Valor por item %0.2f reais\n\n", fat[prod]);
		fat_total = fat_total + fat[prod];
		printf("faturamento parcial %0.2f reais\n\n", fat_total);
	}

	printf("faturamento total %0.2f reais\n\n", fat_total);

	system("PAUSE");
	return 0;
}

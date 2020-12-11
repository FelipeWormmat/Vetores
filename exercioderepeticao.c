/*
Lista 3 - Repeticao
Questao 2a
Felipe
*/

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "");
	int numero;
	int maior;
	int menor;
	int n;
	
	printf("forneca o primeiro numero: ");
	scanf("%d", &numero);
	maior=numero;
	menor=numero;
	
	for(n=0; n<9; n++){
		printf("Forneca outro numero: ");
		scanf("%d", &numero);
		if(numero>maior){
			maior=numero;
			
		}
		
		if(numero<menor){
			menor=numero;
		}
		
	}	

printf("Maior numero da sequencia %d\n", maior);
printf("Menor numero da sequencia %d\n", menor);

system ("PAUSE");
return 0;
}


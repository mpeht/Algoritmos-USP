/* 3.  Tentando descobrir se um dado era viciado, um dono de cassino honesto (ha! ha! ha! ha!) o lançou n vezes. 
Dados os n resultados dos lançamentos, determinar o número de ocorrências de cada face. */

#include <stdlib.h>
#include <math.h>
#include <stdio.h>


 
int main(){

int n, i, vetor[6], lado;

printf("Digite o nº de vezes que o dado foi lançado:");
scanf("%d", &n);

	for(i = 1; i <= 6; i++)
	{
	vetor[i] = 0;	
	}

	for(i = 1; i <= n; i++)
	{
	printf("Digite a face do dado:");
	scanf("%d", &lado);
	vetor[lado]++;
	}

	for(i = 1; i <= sizeof(vetor); i++)
	{
	if(vetor[i] != 0) { printf("A face %d caiu %d vezes. \n", i, vetor[i]); }	
	} 

return 0;	
}

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void contaN(int inicio, int fim, int *contador) // Função Recursiva
{
	if (inicio < fim)
	{
		*contador = *contador + 1;
		contaN(inicio + 1, fim, contador);
	}
}

int main()
{
	int inicio, fim, contador, i;

	// Pede ao usuário que informe os dois números
	do
	{
		system("cls");
		inicio = 1;
		fim = 0;
		printf("==== FUNCAO ITERATIVA E RECURSIVA ====");
		printf("\nRU do aluno: 2547518");
		printf("\n\nInforme o primeiro numero: ");
		scanf_s("%d", &inicio);
		printf("Informe o segundo numero: ");
		scanf_s("%d", &fim);
	} while (inicio > fim);

	// Cálculo usando uma função iterativa FOR
	printf("\n\n==== FUNCAO ITERATIVA ====\n");
	contador = 0;
	for (i = inicio; i < fim; i++)
	{
		contador = contador + 1;
	}
	printf("O numero de elementos entre %d e %d eh: %d\n\n", inicio, fim, contador);

	// Cálculo usando uma função recursiva
	printf("\n\n==== FUNCAO RECURSIVA ====\n");
	contador = 0;
	// Chama a função recursiva. A passagem de parâmetro do contador é feita por referência, porque
	// queremos descobrir quantas vezes essa função foi chamada. O número de vezes em que a função
	// foi chamada indica a distância entre o número início e o número fim.
	contaN(inicio, fim, &contador);
	printf("O numero de elementos entre %d e %d eh: %d\n\n", inicio, fim, contador);

    getchar();
	return 0;
}
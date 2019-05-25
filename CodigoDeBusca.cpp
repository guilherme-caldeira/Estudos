#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int BuscaSequencial(int vetor[], int ValorBuscado);
constexpr auto TAMANHOVETOR = 10;

int main()
{
	int vetor[TAMANHOVETOR] = { 0 };
	int ValorBuscado = 0, Achou = 0;
	srand(time(NULL)); // Gera a semente aleatória

	// Inserção de dados
	for (int i = 0; i < TAMANHOVETOR; i++)
		vetor[i] = rand() % 100; // Gera valores aleatórios entre 0 e 99
	printf_s("Vetor nao ordenado\n");
	for (int i = 0; i < TAMANHOVETOR; i++)
		printf_s("%d\t", vetor[i]);
	printf_s("\nIndique um valor para buscar: \n");
	scanf_s("%d", &ValorBuscado);

	Achou = BuscaSequencial(vetor, ValorBuscado);
	if (Achou == -1)
		printf_s("\nValor nao encontrado\n");
	else
		printf_s("Valor encontrado na posicao %d\n", Achou);

	system("pause");
	return 0;
}

int BuscaSequencial(int vetor[], int ValorBuscado)
{
	int Achou = 0, i = 0;

	while ((i <= TAMANHOVETOR) && (Achou == 0))
	{
		if (vetor[i] == ValorBuscado)
			Achou = 1;
		else
			i++;
	}
	if (Achou == 0)
		return -1;
	else
		return i + 1;

}
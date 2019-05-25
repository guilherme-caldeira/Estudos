// OrdenacaoPorTroca.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

constexpr auto TAMANHOVETOR = 10;
void OrdenaBubbleSort(int vetor[]);

int main()
{
	int vetor[TAMANHOVETOR] = { 0 };
	srand(time(NULL)); // Gera a semente aleatória

	// Inserção de dados
	for (int i = 0; i < TAMANHOVETOR; i++)
		vetor[i] = rand() % 100; // Gera valores aleatórios entre 0 e 99
	printf_s("Vetor nao ordenado\n");
	for (int i = 0; i < TAMANHOVETOR; i++)
		printf_s("%d\t", vetor[i]);

	OrdenaBubbleSort(vetor);

	printf_s("\nVetor ordenado crescente\n");
	for (int i = 0; i < TAMANHOVETOR; i++)
		printf_s("%d\t", vetor[i]);

	printf_s("\nPrograma Finalizado!\n");
	system("pause");
	return 0;
}

void OrdenaBubbleSort(int vetor[])
{
	int auxiliar = 0;
	for (int m = 1; m <= TAMANHOVETOR; m++)
	{
		for (int n = 0; n < TAMANHOVETOR - 1; n++)
		{
			if (vetor[n] > vetor[n + 1]) // Ordenação crescente, uso do sinal >
			{
				auxiliar = vetor[n];
				vetor[n] = vetor[n + 1];
				vetor[n + 1] = auxiliar;
			}
		}
	}
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln

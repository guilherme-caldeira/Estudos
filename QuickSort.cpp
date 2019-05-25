// QuickSort.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

constexpr auto TAMANHOVETOR = 10;
void OrdenaQuickSort(int vetor[], int PosicaoInicial, int PosicaoFinal);
int Particao(int vetor[], int PosicaoInicial, int PosicaoFinal);
void TrocaPosicao(int Vetor[], int i, int j);

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

	OrdenaQuickSort(vetor, 0, TAMANHOVETOR - 1);

	printf_s("\nVetor ordenado crescente\n");
	for (int i = 0; i < TAMANHOVETOR; i++)
		printf_s("%d\t", vetor[i]);

	printf_s("\nPrograma Finalizado!\n");
	system("pause");
	return 0;
}

void OrdenaQuickSort(int vetor[], int PosicaoInicial, int PosicaoFinal)
{
	int Divide;

	if (PosicaoInicial < PosicaoFinal) // Condição de parada. Quando verdadeiro, as funções recursivas são fechadas
	{
		Divide = Particao(vetor, PosicaoInicial, PosicaoFinal);
		OrdenaQuickSort(vetor, PosicaoInicial, Divide); // Itens a esquerda do pivô
		OrdenaQuickSort(vetor, Divide + 1, PosicaoFinal); // Itens a direita do pivô
	}
}

int Particao(int Vetor[], int PosicaoInicial, int PosicaoFinal)
{
	int Pivo, PosicaoPivo, i, j;

	PosicaoPivo = (PosicaoInicial + PosicaoFinal) / 2;
	Pivo = Vetor[PosicaoPivo];

	i = PosicaoInicial - 1;
	j = PosicaoFinal + 1;

	while (i<j)
	{
		do // Testa se os itens a direita do pivo são maiores que ele
		{
			j--;
		} while (Vetor[j] > Pivo);
		do // Testa se os itens a esquerda do pivo são menores que ele
		{
			i++;
		} while (Vetor[i] < Pivo);
		if (i < j)
			TrocaPosicao(Vetor, i, j);
	}

	return j; // Retorna a posição onde o lado direito parou.
}

void TrocaPosicao(int Vetor[], int i, int j)
{
	int Auxiliar;

	Auxiliar = Vetor[i];
	Vetor[i] = Vetor[j];
	Vetor[j] = Auxiliar;
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

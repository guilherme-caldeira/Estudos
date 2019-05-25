// BubbleSort.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

constexpr auto TAMANHOVETOR = 10;
// void OrdenaBubbleSort(int vetor[]);
void OrdenaQuickSort(int vetor[], int primeiraPosicao, int ultimaPosicao);
int Particao(int vetor[], int primeiraPosicao, int ultimaPosicao);
void Troca(int vetor[], int Esquerda, int Direita);

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

	/* OrdenaBubbleSort(vetor);

	printf_s("\nVetor ordenado crescente\n");
	for (int i = 0; i < TAMANHOVETOR; i++)
		printf_s("%d\t", vetor[i]); */

	OrdenaQuickSort(vetor, 0, TAMANHOVETOR);

	printf_s("\nVetor ordenado crescente\n");
	for (int i = 0; i < TAMANHOVETOR; i++)
		printf_s("%d\t", vetor[i]);

	system("pause");
	return 0;
}

/*
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
*/

void OrdenaQuickSort(int vetor[], int primeiraPosicao, int ultimaPosicao)
{
	int pivo;
	if (primeiraPosicao < ultimaPosicao)
	{
		pivo = Particao(vetor, primeiraPosicao, ultimaPosicao);
		OrdenaQuickSort(vetor, primeiraPosicao, pivo); // Itens do lado esquerdo do pivo
		OrdenaQuickSort(vetor, pivo + 1, ultimaPosicao); // Itens do lado direito do pivo
	}
}

int Particao(int vetor[], int primeiraPosicao, int ultimaPosicao)
{
	int PivoFuncao, PosicaoPivo, Esquerda, Direita;

	PosicaoPivo = ((primeiraPosicao + ultimaPosicao) / 2);
	PivoFuncao = vetor[PosicaoPivo];
	Esquerda = primeiraPosicao - 1;
	Direita = ultimaPosicao + 1;

	while (Esquerda < Direita)
	{
		do // Testa lado direito
		{
			Direita--;
		} while (vetor[Direita] > PivoFuncao);

		do // Testa lado esquerdo
		{
			Esquerda++;
		} while (vetor[Esquerda] < PivoFuncao);

		if (Esquerda < Direita)
		{
			Troca(vetor, Esquerda, Direita);
		}
	}
	return Direita;
}

void Troca(int vetor[], int Esquerda, int Direita)
{
	int Auxiliar;

	Auxiliar = vetor[Esquerda];
	vetor[Esquerda] = vetor[Direita];
	vetor[Direita] = vetor[Esquerda];
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

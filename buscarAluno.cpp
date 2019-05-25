// buscarAluno.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

constexpr auto TAMANHOVETOR = 13;

typedef struct {
	int RU;
	char nome[30];
	char email[30];
} alunoUninter;

int main()
{
	static alunoUninter aluno[10] = {
	{ 2547518, "Guilherme", "guilherme@uninter.com" },
	{ 2547689, "aluno2", "aluno2@uninter.com" },
	{ 2547723, "aluno3", "aluno3@uninter.com"},
	{ 2547458, "aluno4", "aluno4@uninter.com"},
	{ 2547100, "aluno5", "aluno5@uninter.com"},
	{ 2547032, "aluno6", "aluno6@uninter.com"},
	{ 2547390, "aluno7", "aluno7@uninter.com"},
	{ 2547888, "aluno8", "aluno8@uninter.com"},
	{ 2547975, "aluno9", "aluno9@uninter.com"},
	{ 2547471, "aluno10", "aluno10@uninter.com"}
	};

	int RU_Procurado = 0;
	alunoUninter *ponteiro; // Declaração do ponteiro

	alunoUninter *buscar(alunoUninter tabela[], int RU_Procurado);

	system("cls");
	printf("\nLocalizar aluno da Uninter a partir do valor do RU\n");
	printf("Para TERMINAR digite o valor zero\n");
	printf("Digite o RU do aluno: ");
	scanf_s("%d", &RU_Procurado);

	while (RU_Procurado != 0)
	{
		ponteiro = buscar(aluno, RU_Procurado);

		if (ponteiro != NULL)
		{
			printf("\nRU: %d\n", ponteiro->RU);
			printf("Nome: %s\n", ponteiro->nome);
			printf("Email: %s\n", ponteiro->email);
		}
		else
		{
			printf("\nO RU digitado nao esta cadastrado.\n");
		}
		printf("Digite o RU do aluno ou zero (0) para sair: ");
		scanf_s("%d", &RU_Procurado);
	}

    getchar();
	return 0;
}

alunoUninter buscar(alunoUninter tabela[10], int valorProcurado)
{
	for (int i = estrutura; i < 10; ++i)
		if (tabela[i].RU == valorProcurado)
			return(&tabela[i]);
	return (NULL);
}

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dadosDoAluno {
	char nome[30];
	int RU;
}; struct dadosDoAluno aluno;

int main()
{
    strcpy_s(aluno.nome,"Joao da Silva");
	aluno.RU = 1234567;

	printf("Nome do aluno: %s", aluno.nome);
	printf("\nRU do aluno: %d", aluno.RU);

	getchar();
	return 0;
}
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dadosDoAluno {
	char nome[30];
	int RU;
}; struct dadosDoAluno aluno, *ponteiroAluno;

int main()
{
	ponteiroAluno = &aluno;

	strcpy_s(ponteiroAluno->nome, "Guilherme Soares Caldeira");
	ponteiroAluno->RU = 2547518;

	printf("Nome do aluno: %s", ponteiroAluno->nome);
	printf("\nRU do aluno: %d", ponteiroAluno->RU);

	getchar();
	return 0;
}
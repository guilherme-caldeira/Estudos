// exercicio1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

constexpr auto RU = 2547518;

int main()
{
	int inteiro = 18, *ponteiroInteiro;
	// float decimal, *ponteiroDecimal;
	// char caractere, * ponteiroCaractere;

	printf("Valor da variavel inteiro ANTES da modificacao: %d\n", inteiro);
	ponteiroInteiro = &inteiro; // ponteiroInteiro aponta para inteiro
	*ponteiroInteiro = 0; // Altera o valor da variavel inteiro
	printf("Valor da variavel inteiro APOS a modificacao: %d\n", inteiro);

	system("pause");
	return 0;
}
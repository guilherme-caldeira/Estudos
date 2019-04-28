// exercicio1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

constexpr auto RU = 2547518;

int main()
{
	int inteiro = 18, *ponteiroInteiro;
	float decimal = 75.18, *ponteiroDecimal;
	// char caractere, * ponteiroCaractere;

	printf("Valor da variavel inteiro ANTES da modificacao: %d\n", inteiro);
	ponteiroInteiro = &inteiro; // ponteiroInteiro aponta para inteiro
	*ponteiroInteiro = 0; // Altera o valor da variavel inteiro
	printf("Valor da variavel inteiro APOS a modificacao: %d\n\n", inteiro);

	printf("Valor da variavel decimal ANTES da modificacao: %.2f\n", decimal);
	ponteiroDecimal = &decimal; // ponteiroDecimal aponta para decimal
	*ponteiroDecimal = 0.53; // Altera o valor da variavel decimal
	printf("Valor da variavel decimal APOS a modificacao: %.2f\n\n", decimal);

	system("pause");
	return 0;
}
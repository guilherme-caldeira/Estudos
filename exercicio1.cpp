// exercicio1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

constexpr auto RU = 2547518;

int main()
{
	int inteiro = 0, *ponteiroInteiro;
	float decimal = 0.0, *ponteiroDecimal;
	char caractere = 'A', *ponteiroCaractere;

	printf("Valor da variavel inteiro ANTES da modificacao: %d\n", inteiro);
	ponteiroInteiro = &inteiro; // ponteiroInteiro aponta para inteiro
	*ponteiroInteiro = 18; // Altera o valor da variavel inteiro
	printf("Valor da variavel inteiro APOS a modificacao: %d\n\n", inteiro);

	printf("Valor da variavel decimal ANTES da modificacao: %.2f\n", decimal);
	ponteiroDecimal = &decimal; // ponteiroDecimal aponta para decimal
	*ponteiroDecimal = 75.18; // Altera o valor da variavel decimal
	printf("Valor da variavel decimal APOS a modificacao: %.2f\n\n", decimal);

	printf("Valor da variavel caractere ANTES da modificacao: %c\n", caractere);
	ponteiroCaractere = &caractere; // ponteiroCaractere aponta para caractere
	*ponteiroCaractere = 'G'; // Altera o valor da variavel caractere
	printf("Valor da variável caractere APOS a modificacao: %c\n\n", caractere);

	getchar();
	return 0;
}
// exercicio2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Declaração das variáveis.
	int primeiroRU = 0, segundoRU = 0;
	int *ponteiroRU1, *ponteiroRU2;

	// Leitura dos RUs à partir do teclado.
	printf("Digite o valor do primeiro RU: ");
	scanf_s("%d", &primeiroRU);
	printf("Digite o valor do segundo RU: ");
	scanf_s("%d", &segundoRU);
	
	// Atribuição das variáveis inteiras às variáveis ponteiro.
	ponteiroRU1 = &primeiroRU;
	ponteiroRU2 = &segundoRU;

	// Mostra na tela o conteúdo dos RUs usando as variáveis ponteiro.
	printf("\nO valor do primeiro RU eh: %d\n", *ponteiroRU1);
	printf("O valor do segundo RU eh: %d\n", *ponteiroRU2);

	// Compara o valor dos dois RUs e imprime na tela
	if (*ponteiroRU1 > *ponteiroRU2)
		printf("\nO RU %d eh maior que o RU %d\n", *ponteiroRU1, *ponteiroRU2);
	else
		printf("\nO RU %d eh maior que o RU %d\n", *ponteiroRU2, *ponteiroRU1);

	getchar();
	return 0;
}
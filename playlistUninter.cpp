// Playlist de músicas
// Lista encadeada simples não circular

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Criação da estrutura. Lista encadeada simples.
struct Musicas {
	// Dados das músicas na Playlist.
	char nome[30];
	char artista[30];
	int duracao;
	// Ponteiro para a próxima música.
	struct Musicas *prox;
} *Head;

// Procedimento para inserir música no início da lista.
void inserirMusicaNoInicio(char *nome, char *artista, int duracao)
{
	Musicas *novaMusica; // Nova variável do tipo Musicas.
	novaMusica = (struct Musicas *)malloc(sizeof(struct Musicas)); // Alocação dinâmica da memória do tamanho da estrutura Musicas.

	strcpy_s(novaMusica->nome, nome); // Copia o conteúdo da variável "nome" para a estrutura Musicas no espaço que foi alocado.
	strcpy_s(novaMusica->artista, artista);
	novaMusica->duracao = duracao;

	// Se o Head for nulo significa que a música passada é a primeira a ser incluída na lista.
	if (Head == NULL) {
		Head = novaMusica;
		Head->prox = NULL;
	}
	// Se já tem alguma música na lista, a nova música é colocada na primeira posição
	else
	{
		// O ponteiro da nova música aponta para o Head.
		novaMusica->prox = Head;
		// Transforma a nova música no novo Head da lista.
		Head = novaMusica;
	}
}

// Procedimento para inserir música no fim da lista.
void inserirMusicaNoFim(char *nome, char *artista, int duracao)
{
	Musicas *novaMusica; // Nova variável do tipo Musicas.
	novaMusica = (struct Musicas *)malloc(sizeof(struct Musicas)); // Alocação dinâmica da memória do tamanho da estrutura Musicas.
	Musicas *elementoVarredura;
	elementoVarredura = (struct Musicas *)malloc(sizeof(struct Musicas));

	strcpy_s(novaMusica->nome,nome); // Copia o conteúdo da variável "nome" para a estrutura Musicas no espaço que foi alocado.
	strcpy_s(novaMusica->artista,artista);
	novaMusica->duracao = duracao;

	// Se o Head for nulo significa que a música passada é a primeira a ser incluída na lista.
	if (Head == NULL) {
		Head = novaMusica;
		Head->prox = NULL;
	}
	// Se já tem alguma música na lista, o elemento de varredura percorre toda a lista até encontrar o último elemento.
	else {
		elementoVarredura = Head;
		while (elementoVarredura->prox != NULL)
			elementoVarredura = elementoVarredura->prox;
		// Quando o último elemento da lista é encontrado, a nova música é colocada na última posição.
		elementoVarredura->prox = novaMusica;
		// A nova música passa a apontar para o NULL (nulo).
		novaMusica->prox = NULL;
	}
}

// Procedimento para mostrar as músicas da lista.
void mostrarMusicas()
{
	system("cls");

	Musicas *elementoVarredura;
	elementoVarredura = (struct Musicas *)malloc(sizeof(struct Musicas));
	elementoVarredura = Head;

	// Se não tem nenhum elemento na lista.
	if (elementoVarredura == NULL)
	{
		printf("\nA lista esta vazia!\n");
		getchar();
		return;
	}
	
	// Quando existem elementos na lista, apresenta os mesmos na tela. Até encontrar o último elemento.
	while (elementoVarredura != NULL) {
		printf("\nO nome da musica eh: %s", elementoVarredura->nome);
		printf("\nO nome do artista eh: %s", elementoVarredura->artista);
		printf("\nA duracao da musica eh: %d\n", elementoVarredura->duracao);
		// Aponta para o próximo elemento da lista e o mesmo é exibido depois disso.
		elementoVarredura = elementoVarredura->prox;
	}
	
	getchar();
}

// Função Main.
int main()
{
	int opcaoUsuario = 0;
	char nome[30];
	char artista[30];
	int duracao = 0, c;
	Head = NULL;

	do
	{
		// Apresenta o menu na tela para o usuário selecionar uma opção.
		system("cls"); // Limpar a tela
		printf("\n-------------\n");
		printf("PLAYLIST UNINTER\n");
		printf("MENU - Opcoes disponiveis\n");
		printf("0 - Encerrar o programa\n");
		printf("1 - Inserir uma musica na primeira posicao da playlist\n");
		printf("2 - Inserir uma musica na ultima posicao da playlist\n");
		printf("3 - Listar todas as musicas da playlist\n");
		printf("\n-------------\n");
		printf("\nDigite a sua opcao: ");
		scanf_s("%d", &opcaoUsuario);
		while ((c = getchar()) != '\n' && c != EOF) {} // sempre limpe o buffer do teclado.
		system("cls");

		// De acordo com a opção do usuário, uma ação é feita.
		switch (opcaoUsuario)
		{
		case 0:
			printf("\nO programa sera encerrado!\n");
			getchar();
			break;
		case 1:
			printf("\nDigite o nome da musica: ");
			gets_s(nome);
			printf("Digite o nome do artista: ");
			gets_s(artista);
			printf("Digite a duracao da musica: ");
			scanf_s("%d", &duracao);
			while ((c = getchar()) != '\n' && c != EOF) {} // sempre limpe o buffer do teclado.
			inserirMusicaNoInicio(nome, artista, duracao);
			break;
		case 2:
			printf("\nDigite o nome da musica: ");
			gets_s(nome);
			printf("Digite o nome do artista: ");
			gets_s(artista);
			printf("Digite a duracao da musica: ");
			scanf_s("%d", &duracao);
			while ((c = getchar()) != '\n' && c != EOF) {} // sempre limpe o buffer do teclado.
			inserirMusicaNoFim(nome, artista, duracao);
			break;
		case 3:
			mostrarMusicas();
			break;
		default:
			printf("\nA opcao digitada eh invalida. Por favor, digite um numero valido.\n");
			getchar();
		}
	} while (opcaoUsuario != 0);

	return 0;
}
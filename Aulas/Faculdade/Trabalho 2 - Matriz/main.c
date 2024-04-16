#include "matriz.h"

int	main(void)
{
	// Variáveis usadas no programa
	int	linhas;
	int	colunas;
	int	**matriz;

	printf("Escreva o numero de linhas: ");		// Pedir ao usuário o número de linhas
	scanf("%d", &linhas);

	if (linhas <= 0)							// Se o número de linhas for inválido
	{
		printf("Numero de linhas menor igual a 0!\n");		// Mostra mensagem de erro
		return (1);											// Sai do programa
	}

	printf("Escreva o número de colunas: ");	// Pedir ao usuário o número de linhas
	scanf("%d", &colunas);

	if (colunas <= 0)							// Se o número de calunas for inválido
	{
		printf("Numero de colunas menor igual a 0!\n");		// Mostra mensagem de erro
		return (1);											// Sai do programa
	}

	matriz = criar_matriz(linhas, colunas);		// Aloca a matriz

	preencher_matriz(matriz, linhas, colunas);	// Preenche a matriz

	print_matriz(matriz, linhas, colunas);		// Imprime toda a matriz

	free_matriz(matriz, linhas, colunas);		// Da free free em toda a matriz

	return (0);
}

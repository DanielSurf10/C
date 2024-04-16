#include "matriz.h"

/**
 * Função que aloca uma matriz de inteiros
 *
 * @param linhas Número de linhas da matriz
 * @param colunas Número de colunas da matriz
 * @return int** Ponteiro para a matriz alocada
 */
int	**criar_matriz(int linhas, int colunas)
{
	int	y;
	int	**matriz;

	matriz = malloc(linhas * sizeof(int *));

	for (y = 0; y < linhas; y++)
		matriz[y] = malloc(colunas * sizeof(int));

	return (matriz);
}

/**
 * Função que preenche uma matriz de inteiros
 *
 * @param matriz Matriz a ser preenchida
 * @param linhas Número de linhas da matriz
 * @param colunas Número de colunas da matriz
 */
void	preencher_matriz(int **matriz, int linhas, int colunas)
{
	int	x;
	int	y;
	int	valor_recebido;

	printf("Digite os valores: ");
	for (y = 0; y < linhas; y++)
		for (x = 0; x < colunas; x++)
		{
			scanf("%d", &valor_recebido);
			matriz[y][x] = valor_recebido;
		}
}

/**
 * Função que imprime uma matriz de inteiros
 *
 * @param matriz Matriz a ser impressa
 * @param linhas Número de linhas da matriz
 * @param colunas Número de colunas da matriz
 */
void	print_matriz(int **matriz, int linhas, int colunas)
{
	int	x;
	int	y;

	printf("Valores: \n\t");
	for (y = 0; y < linhas; y++)
	{
		for (x = 0; x < colunas; x++)
			printf("%d ", matriz[y][x]);
		printf("\n\t");
	}
}

/**
 * Função que libera a memória alocada para uma matriz de inteiros
 *
 * @param matriz Matriz a ser liberada
 * @param linhas Número de linhas da matriz
 * @param colunas Número de colunas da matriz
 */
void	free_matriz(int **matriz, int linhas, int colunas)
{
	int	x;
	int	y;

	for (y = 0; y < linhas; y++)
		free(matriz[y]);
	free(matriz);
}

#ifndef MATRIZ_H
# define MATRIZ_H

# include <stdio.h>
# include <stdlib.h>

int		**criar_matriz(int linhas, int colunas);
void	preencher_matriz(int **matriz, int linhas, int colunas);
void	print_matriz(int **matriz, int linhas, int colunas);
void	free_matriz(int **matriz, int linhas, int colunas);

#endif

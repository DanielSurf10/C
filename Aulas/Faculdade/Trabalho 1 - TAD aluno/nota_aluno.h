#ifndef NOTA_ALUNO_H
# define NOTA_ALUNO_H

#include <stdio.h>
#include <stdlib.h>

// Estrutura de dados para o cadastro de alunos
typedef struct cadastro
{
	int		ID;
	float	nota_P1;
	float	nota_P2;
	float	media;
}	cadastro;

// Funções
cadastro	*criar_alunos(int n);
void		modificar_nota(cadastro *aluno, int n, int ID, int P);
void		calcular_media(cadastro *aluno, int ID);
void		maior_media(cadastro *aluno, int n);

#endif

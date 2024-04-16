#include "nota_aluno.h"

/**
 * Função que aloca um vetor de alunos
 *
 * @param n Número de alunos
 * @return cadastro* Ponteiro para o vetor de alunos alocado
 */
cadastro	*criar_alunos(int n)
{
	int			i;
	cadastro	*aluno;

	i = 0;
	aluno = calloc(n, sizeof(cadastro));
	while (i < n)
	{
		aluno[i].ID = i + 1;
		i++;
	}
	return (aluno);
}

/**
 * Função que modifica a nota de um aluno
 *
 * @param aluno Vetor de alunos
 * @param n Nova nota
 * @param ID ID do aluno
 * @param P Prova
 */
void	modificar_nota(cadastro *aluno, int n, int ID, int P)
{
	if (P == 1)
		aluno[ID - 1].nota_P1 = n;
	else if (P == 2)
		aluno[ID - 1].nota_P2 = n;
}

/**
 * Função que calcula a média de um aluno
 *
 * @param aluno Vetor de alunos
 * @param ID ID do aluno
 */
void	calcular_media(cadastro *aluno, int ID)
{
	float	media;

	media = (aluno[ID - 1].nota_P1 + aluno[ID - 1].nota_P2) / 2;
	aluno[ID - 1].media = media;
}

/**
 * Função que imprime o aluno com a maior média
 *
 * @param aluno Vetor de alunos
 * @param n Número de alunos
 */
void	maior_media(cadastro *aluno, int n)
{
	int			i;
	cadastro	aluno_maior_nota;

	i = 1;
	aluno_maior_nota = aluno[0];
	while (i < n)
	{
		if (aluno_maior_nota.media < aluno[i].media)
			aluno_maior_nota = aluno[i];
		i++;
	}
	printf("O aluno %d tem a maior media, com: %.2f\n", aluno_maior_nota.ID, aluno_maior_nota.media);
}

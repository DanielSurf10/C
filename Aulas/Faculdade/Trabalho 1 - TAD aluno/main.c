#include "nota_aluno.h"

int	main(void)
{
	// Variáveis
	int			ID;
	int			nota_P;
	int			numero_de_alunos;
	float		nota_valor;
	cadastro	*aluno;

	numero_de_alunos = 0;
	printf("Digite a quantidade de alunos: ");		// Recebe o número de alunos
	scanf("%d", &numero_de_alunos);

	if (numero_de_alunos < 1)						// Verifica se o número de alunos é válido
	{
		printf("Número de alunos invalido!\n");			// Se não for, imprime uma mensagem de erro
		return (1);										// E finaliza o programa
	}

	aluno = criar_alunos(numero_de_alunos);			// Aloca a memória para os alunos
	ID = 1;

	while (ID != 0)									// Loop principal
	{
		printf("\nDigite 2 numeros (<ID> <1 ou 2>): ");	// Recebe o ID e a nota P
		scanf("%d %d", &ID, &nota_P);

		if (ID == 0)									// Imprime a maior média e finaliza o programa
			maior_media(aluno, numero_de_alunos);
		else if (ID <= 0 || ID > numero_de_alunos)		// Verifica se o ID é válido
		{
			printf("ID invalido!\n");
			continue;
		}
		else if (nota_P < 1 || nota_P > 2)				// Verifica se a nota P é válida
		{
			printf("Nota P invalida!\n");
			continue;
		}
		else											// Recebe a nota e modifica a média
		{
			printf("Digite a nota do aluno %d para alterar a nota P%d: ", ID, nota_P);
			scanf("%f", &nota_valor);

			modificar_nota(aluno, nota_valor, ID, nota_P);
			calcular_media(aluno, ID);

			printf("A media do aluno %d eh: %.2f\n", ID, aluno[ID - 1].media);
		}
	}

	free(aluno);									// Libera a memória alocada para os alunos
	return (0);										// Finaliza o programa
}

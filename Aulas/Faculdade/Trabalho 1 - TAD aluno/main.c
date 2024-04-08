#include "nota_aluno.h"

int	main(void)
{
	int			ID;
	int			nota_P;
	int			numero_de_alunos;
	float		nota_valor;
	cadastro	*aluno;

	numero_de_alunos = 0;
	printf("Digite a quantidade de alunos: ");
	scanf("%d", &numero_de_alunos);

	if (numero_de_alunos < 1)
	{
		printf("Número de alunos invalido!\n");
		return (1);
	}

	aluno = criar_alunos(numero_de_alunos);
	ID = 1;

	while (ID != 0)
	{
		printf("\nDigite 2 numeros (<ID> <1 ou 2>): ");
		scanf("%d %d", &ID, &nota_P);

		if (ID == 0)
			maior_media(aluno, numero_de_alunos);
		else if (ID <= 0 || ID > numero_de_alunos)
		{
			printf("ID invalido!\n");
			continue;
		}
		else if (nota_P < 1 || nota_P > 2)
		{
			printf("Nota P invalida!\n");
			continue;
		}
		else
		{
			printf("Digite a nota do aluno %d para alterar a nota P%d: ", ID, nota_P);
			scanf("%f", &nota_valor);

			modificar_nota(aluno, nota_valor, ID, nota_P);
			calcular_media(aluno, ID);

			printf("A media do aluno %d eh: %.2f\n", ID, aluno[ID - 1].media);
		}
	}

	free(aluno);
}

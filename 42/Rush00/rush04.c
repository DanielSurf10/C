/* ************************************************************************** */
/*			                                                                */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:13:00 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/06 15:20:20 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_table(int x, int y)
{
	int	linha;
	int	coluna;

	linha = 1;
	coluna = 1;
	while (linha != y + 1)
	{
		if ((linha == 1 && coluna == 1) || 
			(linha == y && coluna == x && x != 1 && y != 1))
			ft_putchar('A');
		else if ((linha == 1 && coluna == x) || (linha == y && coluna == 1))
			ft_putchar('C');
		else if ((linha == 1) || (linha == y))
			ft_putchar('B');
		else if (coluna == 1 || coluna == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		if (++coluna > x)
		{
			coluna = 1;
			linha++;
			ft_putchar('\n');
		}
	}
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	print_table(x, y);
}

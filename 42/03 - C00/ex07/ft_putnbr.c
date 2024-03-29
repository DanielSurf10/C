/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:44:32 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/23 15:59:32 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnum(char c)
{
	c += '0';
	write(1, &c, 1);
}

int	get_size_number(int nb)
{
	int	counter_size;

	if (nb < 0)
		nb *= -1;
	counter_size = 10;
	while (nb / counter_size > 9)
	{
		counter_size *= 10;
	}
	return (counter_size);
}

void	ft_putnbr(int nb)
{
	int	size_number;
	int	number;

	size_number = get_size_number(nb);
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_putnum(nb);
		return ;
	}
	while (size_number != 0)
	{
		number = nb / size_number;
		nb -= number * size_number;
		size_number /= 10;
		ft_putnum(number);
	}
}

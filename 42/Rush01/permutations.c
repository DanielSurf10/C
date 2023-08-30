/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:47:34 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/30 13:14:16 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tuple.h"

void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	permute(int *a, int l, int r, struct s_perm *list)
{
	int	i;

	if (l == r)
	{
		add_value(list, a);
	}
	else
	{
		i = l;
		while (i <= r)
		{
			swap((a + l), (a + i));
			permute(a, l + 1, r, list);
			swap((a + l), (a + i));
			i++;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tuple.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:58:39 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/27 17:56:08 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tuple.h"
#include <stdlib.h>

struct s_perm	*create_perm(int size)
{
	int				size_line;
	int				size_perm;
	int				**list;
	struct s_perm	*perm;

	size_line = size;
	size_perm = size;
	while (--size > 0)
		size_perm *= size;
	perm = (struct s_perm *) malloc(sizeof(struct s_perm));
	list = (int **) malloc(sizeof(int *) * size_perm);
	perm->size = size_line;
	perm->count = 0;
	perm->list = list;
	return (perm);
}

void	delete(struct s_perm *list)
{
	int	i;

	i = list->count;
	while (i > 0)
	{
		free(list->list[i - 1]);
		i--;
	}
	free(list);
}

int	*get_value_tuple(struct s_perm *list, int index)
{
	int	*item;

	item = list->list[index];
	return (item);
}

int	compare(int *line1, int *line2, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (line1[i] != line2[i])
			return (0);
		i++;
	}
	return (1);	
}

void	add_value(struct s_perm *list, char *value)
{
	int	*line;
	int i;

	i = 0;
	line = (int *) malloc(sizeof(int) * list->size);
	while (i < list->size)
	{
		line[i] = value[i] - '0';
		i++;
	}
	list->list[list->count] = line;
	list->count++;
}

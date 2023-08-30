/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tuple.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:58:39 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/30 15:05:15 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tuple.h"
#include <stdlib.h>

struct s_perm	*create_perm(int size)
{
	// int				size_line;
	// int				size_perm;
	// int				**list;
	struct s_perm	*perm;

	// size_line = size;
	// size_perm = size;
	// while (--size > 0)
	// 	size_perm *= size;
	perm = (struct s_perm *) malloc(sizeof(struct s_perm));
	// list = (int **) malloc(sizeof(int *) * size_perm);
	perm->size = size;
	perm->count = 0;
	perm->first = NULL;
	perm->last = NULL;
	return (perm);
}

void	delete(struct s_perm *list)
{
	int				i;
	struct s_case	*node;
	struct s_case	*next_node;

	node = list->first;
	while (node != NULL)
	{
		next_node = node->next;
		free(node->line);
		free(node);
		node = next_node;
	}
	free(list);
}

int	*get_value_tuple(struct s_perm *list, int index)
{
	struct s_case	*node;

	node = list->first;
	while (index > 0 && node != NULL)
		node = node->next;
	return (node->line);
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

void	add_value(struct s_perm *list, int *value)
{
	int				i;
	int				*line;
	struct s_case	*last;
	struct s_case	*previous;

	i = 0;
	last = list->last;
	previous = list->first;
	if (previous != NULL)
		while (previous->next != last)
			previous = previous->next;
	last = (struct s_case *) malloc(sizeof(struct s_case));
	line = (int *) malloc(sizeof(int) * list->size);
	while (i < list->size)
	{
		line[i] = value[i];
		i++;
	}
	last->line = line;
	last->next = NULL;
	if (list->first == NULL)
		list->first = last;
	else
		previous->next = last;
	list->count++;
	list->last = last;
}

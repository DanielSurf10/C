/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor-g <victor-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:13:00 by victor-g          #+#    #+#             */
/*   Updated: 2023/07/06 15:20:20 by victor-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

struct	s_tuple
{
	int	n1;
	int	n2;
	int	n3;
	int	n4;
};

struct	s_tuple_head
{
	int	count;
	struct s_tuple	*list;
};

struct s_tuple_head	*create_list(int size)
{
	struct s_tuple_head	*head;
	struct s_tuple	*list;

	head = (struct s_tuple_head *) malloc(sizeof(struct s_tuple_head) * size);
	list = (struct s_tuple *) malloc(sizeof(struct s_tuple) * size);
	head->count = 0;
	head->list = list;
	return (head);
}

void	delete(int *list)
{
	free(list);
}

struct s_tuple	get_value(struct s_tuple_head *list, int index)
{
	struct s_tuple	*list_vector;
	struct s_tuple	item;

	list_vector = list->list;
	item = list_vector[index];
	return (item);
}

void	set_value(struct s_tuple_head *list, struct s_tuple item, int index)
{
	struct s_tuple	*list_vector;

	list_vector = list->list;
	list_vector[index] = item;
}

void	add_value(struct s_tuple_head *list, struct s_tuple item)
{
	struct s_tuple	*list_vector;

	list_vector = list->list;
	list_vector[list->count] = item;
	list->count++;
}

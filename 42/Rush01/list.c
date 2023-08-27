// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   list.c                                             :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2023/08/27 16:05:17 by danbarbo          #+#    #+#             */
// /*   Updated: 2023/08/27 16:05:21 by danbarbo         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include <stdlib.h>

// struct	s_tuple
// {
// 	int	n1;
// 	int	n2;
// 	int	n3;
// 	int	n4;
// };

// // struct	s_tuple_head
// // {
// // 	int				count;
// // 	struct s_tuple	*list;
// // };

// struct	s_perm_head
// {
// 	int				count;
// 	struct s_tuple	*list;
// };

// struct s_tuple	*create_table(int size)
// {
// 	struct s_tuple	*list;

// 	list = (struct s_tuple *) malloc(sizeof(struct s_tuple) * size * size);
// 	return (list);
// }

// /*
// 	size só para 4, que fica 24
// 	para maiores deve fazer a conta da permutação (n!)
// */
// struct s_perm_head	*create_permutation_list(int size)
// {
// 	int					size_perm;
// 	struct s_tuple		*list;
// 	struct s_perm_head	*perm;

// 	size_perm = size;
// 	while (--size > 0)
// 		size_perm *= size;
// 	perm = (struct s_perm_head *) malloc(sizeof(struct s_perm_head));
// 	list = (struct s_tuple *) malloc(sizeof(struct s_tuple) * size_perm);
// 	return (list);
// }

// void	delete(int *list)
// {
// 	free(list);
// }

// struct s_tuple	get_value(struct s_tuple_head *list, int index)
// {
// 	struct s_tuple	*list_vector;
// 	struct s_tuple	item;

// 	list_vector = list->list;
// 	item = list_vector[index];
// 	return (item);
// }

// void	set_value(struct s_tuple_head *list, struct s_tuple item, int index)
// {
// 	struct s_tuple	*list_vector;

// 	list_vector = list->list;
// 	list_vector[index] = item;
// }

// void	add_value(struct s_tuple_head *list, struct s_tuple item)
// {
// 	struct s_tuple	*list_vector;

// 	list_vector = list->list;
// 	list_vector[list->count] = item;
// 	list->count++;
// }

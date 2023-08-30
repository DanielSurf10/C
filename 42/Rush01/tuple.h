/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tuple.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:59:32 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/30 13:16:41 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TUPLE_H
# define TUPLE_H

struct	s_tuple
{
	int	n1;
	int	n2;
	int	n3;
	int	n4;
};

struct s_case
{
	int				*line;
	struct s_case	*next;
};

struct	s_perm
{
	int				size;
	int				count;
	struct s_case	*first;
	struct s_case	*last;
};

struct s_perm	*create_perm(int size);

void			delete(struct s_perm *list);

int				*get_value_tuple(struct s_perm *list, int index);

int				compare(int *line1, int *line2, int size);

void			add_value(struct s_perm *list, int *value);

#endif

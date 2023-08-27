/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:08:15 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/27 17:14:15 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TABLE_H
# define TABLE_H

# include "tuple.h"

struct s_tuple	*create_table(int size);

int				get_value(int *list, int x, int y);

void			set_value(int *list, int x, int y, int value);

int				compare_line(int *list, int line_index, struct s_tuple line);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutations.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:47:25 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/27 18:26:08 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERMUTATIONS_H
# define PERMUTATIONS_H

int	    *covert_to_array(char *s);

void	swap(char *x, char *y);

void	permute(char *a, int l, int r, struct s_perm *list);

#endif

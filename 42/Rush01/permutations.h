/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutations.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:47:25 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/30 13:14:46 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERMUTATIONS_H
# define PERMUTATIONS_H

void	swap(int *x, int *y);

void	permute(int *a, int l, int r, struct s_perm *list);

#endif

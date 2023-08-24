/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:18:26 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/21 11:41:49 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_numeric.c"

int main() {
    char lista1[] = {"1234"};
	char lista2[] = {"12a4"};
	char lista3[] = {""};

	printf("%d\n", ft_str_is_numeric(lista1));
	printf("%d\n", ft_str_is_numeric(lista2));
	printf("%d\n", ft_str_is_numeric(lista3));


    return 0;
}

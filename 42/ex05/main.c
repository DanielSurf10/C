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

#include "ft_str_is_uppercase.c"
#include <stdio.h>

int main() {
    char str1[] = {"Bom dia"};
    char str2[] = {"BANANA"};
    char str3[] = {""};

    printf("%d\n", ft_str_is_uppercase(str1));
    printf("%d\n", ft_str_is_uppercase(str2));
    printf("%d\n", ft_str_is_uppercase(str3));


    return 0;
}

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
#include "ft_str_is_alpha.c"

int main() {
    char str1[] = {"Ola!"};
    char str2[] = {"Ola"};
    char str3[] = {""};

    printf("%d\n", ft_str_is_alpha(str1));
    printf("%d\n", ft_str_is_alpha(str2));
    printf("%d\n", ft_str_is_alpha(str3));


    return 0;
}

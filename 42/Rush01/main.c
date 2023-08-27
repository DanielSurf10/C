/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danbarbo <danbarbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:05:28 by danbarbo          #+#    #+#             */
/*   Updated: 2023/08/27 18:30:15 by danbarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include "list.c"
#include "table.h"
#include "tuple.h"
#include "permutations.h"

int main(int argv, char **argc) {
    // struct s_tuple_head *tupla = create_list(24);

    // struct s_tuple item1 = {1, 2, 3, 4};
    // struct s_tuple item2 = {2, 1, 3, 1};

    // add_value(tupla, item1);
    // add_value(tupla, item2);

    // struct s_tuple item3 = get_value(tupla, 0);
    // struct s_tuple item4 = get_value(tupla, 1);

    // printf("%d %d %d %d\n", item3.n1, item3.n2, item3.n3, item3.n4);
    // printf("%d %d %d %d\n", item4.n1, item4.n2, item4.n3, item4.n4);

    // free(tupla);

    // if (argv == 2) {
    //     printf("%s\n", argc[0]);
    //     printf("%s\n", argc[1]);
    // }

    struct s_perm   *permutations = create_perm(4);

    struct s_tuple	ret;

    char a[] = {"1234"};

    permute(a, 0, 3, permutations);

    for (int i = 0; i < 24; i++) {
        ret = get_value_tuple(permutations, i);
        printf("%d %d %d %d\n", ret.n1, ret.n2, ret.n3, ret.n4);
    }

    delete(permutations);

    return 0;
}

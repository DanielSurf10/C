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
#include <stdlib.h>
// #include "list.c"
// #include "table.h"
#include "tuple.h"
#include "permutations.h"

int main(int argv, char **argc) {
    // if (argv == 2) {
    //     printf("%s\n", argc[0]);
    //     printf("%s\n", argc[1]);
    // }

    int tamanho = 5;

    struct s_perm   *permutations = create_perm(tamanho);
    char *numbers = (char *) malloc(sizeof(char) * tamanho);
    for (int i = 0; i < tamanho; i++)
        numbers[i] = i + 1 + '0';
    permute(numbers, 0, tamanho - 1, permutations);
    free(numbers);

    int *ret;
    for (int i = 0; i < permutations->count; i++) {
        ret = get_value_tuple(permutations, i);
        for (int size = 0; size < permutations->size; size++)
            printf("%d ", permutations->list[i][size]);
        printf("\n");
    }

    delete(permutations);
    return 0;
}

#include <stdio.h>
#include "list.c"

int main() {
    struct s_tuple_head *tupla = create_list(24);

    struct s_tuple item1 = {1, 2, 3, 4};
    struct s_tuple item2 = {2, 1, 3, 1};

    add_value(tupla, item1);
    add_value(tupla, item2);

    struct s_tuple item3 = get_value(tupla, 0);
    struct s_tuple item4 = get_value(tupla, 1);

    printf("%d %d %d %d\n", item3.n1, item3.n2, item3.n3, item3.n4);
    printf("%d %d %d %d\n", item4.n1, item4.n2, item4.n3, item4.n4);

    free(tupla);

    return 0;
}

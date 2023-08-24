
#include <stdio.h>
#include "ft_str_is_printable.c"

int main() {
    char str1[] = {"Banana 123!"};
    char str2[] = {28, 32, 44};
    char str3[] = {""};

    printf("%d\n", ft_str_is_printable(str1));
    printf("%d\n", ft_str_is_printable(str2));
    printf("%d\n", ft_str_is_printable(str3));

    return 0;
}

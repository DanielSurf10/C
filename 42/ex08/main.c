
#include "ft_strlowcase.c"
#include <stdio.h>

int main() {
    char str1[] = {"bANANA 123!"};
    char str2[] = {"BeRiNgELa"};
    char str3[] = {""};

    printf("%s\n", ft_strlowcase(str1));
    printf("%s\n", ft_strlowcase(str2));
    printf("%s\n", ft_strlowcase(str3));


    return 0;
}

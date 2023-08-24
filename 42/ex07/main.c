
#include "ft_strupcase.c"
#include <stdio.h>

int main() {
    char str1[] = {"Banana 123!"};
    char str2[] = {"BeRiNgELa"};
    char str3[] = {""};

    printf("%s\n", ft_strupcase(str1));
    printf("%s\n", ft_strupcase(str2));
    printf("%s\n", ft_strupcase(str3));


    return 0;
}

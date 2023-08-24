
#include "ft_strcapitalize.c"
#include <stdio.h>

int main() {
    char str1[] = {"oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um"};
    char str2[] = {"A oi, de,da,di."};
    char str3[] = {""};

    printf("%s\n", ft_strcapitalize(str1));
    printf("%s\n", ft_strcapitalize(str2));
    printf("%s\n", ft_strcapitalize(str3));


    return 0;
}

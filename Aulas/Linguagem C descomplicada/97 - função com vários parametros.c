#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int soma(int n, ...);

int main() {
    int res = 0;
    res = soma(2, 4, 6);
    printf("Soma 2 parametros: %i\n", res);
    res = soma(3, 5, 8, 7);
    printf("Soma 3 parametros: %i\n", res);
    res = soma(4, 7, 6, 1, 3);
    printf("Soma 4 parametros: %i\n", res);


    return 0;
}

int soma(int n, ...) {
    va_list lista;
    int i, s = 0;
    va_start(lista, n);

    for (i = 0; i < n; i++) {
        s = s + va_arg(lista, int);
    }
    va_end(lista);
    return s;
}

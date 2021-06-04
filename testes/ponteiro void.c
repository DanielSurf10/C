#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 12;
    void *b = &a;

    printf("%i\n", *(int *)b);

    char letra = 'g';
    b = &letra;

    printf("%c\n", *(char *)b);


    return 0;
}

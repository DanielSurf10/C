#include <stdio.h>

int main() {
    int a, b;

    scanf("%i", &a);

    for (int i = 0; i < a; i++) {

        scanf("%i", &b);
        printf("%i\n", b % 2 == 0 ? 0 : 1);
    }


    return 0;
}

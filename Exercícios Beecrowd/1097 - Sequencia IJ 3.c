#include <stdio.h>

int main() {
    int i = 1, j = 7;

    while (i <= 9) {
        for (int a = 0; a < 3; a++) {
            printf("I=%i ", i);
            printf("J=%i\n", j--);
        }

        j += 5;
        i += 2;
    }


    return 0;
}

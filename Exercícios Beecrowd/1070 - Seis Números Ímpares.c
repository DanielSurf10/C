#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;

    scanf("%i", &num);


    if (num % 2 == 0)
        num++;


    for (int i = 0; i < 12; i += 2)
        printf("%i\n", num + i);



    return 0;
}

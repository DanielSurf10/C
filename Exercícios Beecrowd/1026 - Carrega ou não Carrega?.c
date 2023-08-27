#include <stdio.h>
 
int main() {
 
    unsigned int a, b;


    while (scanf("%i %i", &a, &b) == 2) 
        printf("%i\n", a ^ b);

 
    return 0;
}

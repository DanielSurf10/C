#include <stdio.h>

int main() {
    FILE* arq = fopen("a.txt", "r");
    char linha[101];

    for (int i = 0; i < 150; i++) {
        fgets(linha, 100, arq);
        printf("%s", linha);
    }


    return 0;
}

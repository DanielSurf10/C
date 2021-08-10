#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncadDupla.h"

int main() {
    Lista *lista = cria_Lista();

    for (int i = 0; i < 6; i++) {
        insere_lista_final(lista, i * i);
    }

    insere_lista_indice(lista, 25, -3);

    remove_lista_indice(lista, 10);

    printaLista(lista);

    libera_Lista(lista);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncadDupla.h"

int main() {
    Lista *lista = cria_Lista();

    struct aluno nome[6];
    char nomes[][10] = {"Alguém", "Ninguém", "Você", "Eles ", "Nós"};

    for (int i = 0; i < 6; i++) {
        nome[i].matricula = i * i;
        nome[i].nome      = nomes[i];
    }

    for (int i = 0; i < 6; i++) {
        insere_lista_indice(lista, nome[i], i);
    }

    struct aluno outro = {.matricula=25,.nome="Jota "};
    insere_lista_indice(lista, outro, -3);

    remove_lista_indice(lista, 10);

    printaLista(lista);


    return 0;
}

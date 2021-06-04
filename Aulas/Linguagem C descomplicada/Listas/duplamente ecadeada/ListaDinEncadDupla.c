#include "ListaDinEncadDupla.h"
#include <stdlib.h>

// Estrutura elemento
typedef struct elemento {
    struct elemento *ant;
    struct aluno dados;
    struct elemento *prox;
} Elem;

// Função de Criação e Remoção
// Criação
Lista* cria_Lista() {
    Lista* li = (Lista*) malloc(sizeof(Lista)); // Inicializa lista

    // Se não for Nula aponta pra NULL
    if (li != NULL)
        *li = NULL;
    
    // Retorna o ponteiro da lista
    return li;
}

// Remoção
void libera_Lista(Lista* li) {
    // Se a lista não for Nula tem o que apagar
    if (li != NULL) {
        Elem* no;

        // Enquanto a lista não apontar em NULL
        while ((*li) != NULL) {
            no  = *li;          // "no" recebe o que a lista está apontando
            *li = (*li)->prox;  // li recebe o próximo elemento da lista
            free(no);           // memória do "no" é liberada
        }
        free(li);               // Memória da cabeça da lista é liberada
    }
}

// Informações da lista
// Lista vazia
int lista_Vazia(Lista* li) {
    // Se lista é Nula ou aponta na em NULL é vazia
    if ((li == NULL) || (*li == NULL))
        return 1;       // Retorna 1 é vazia
    
    return 0;           // Retorna 0 não é vazia
}

// Tamanho da lista
int tamanho_Lista(Lista* li) {
    // Se a lista é nula retorna 0
    if (li == NULL) return 0;

    int cont = 0;       // Contador de elementos
    Elem* no = *li;     // Ponteiro auxiliar recebe o primeiro elemento da lista

    // Enquanto "no" não for igual a NULL
    while (no != NULL) {
        cont++;
        no = no->prox;
    }
    
    // Retorna o valor contado
    return cont;
}

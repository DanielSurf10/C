#include "ListaDinEncadDupla.h"
#include <stdlib.h>
#include <stdio.h>

// Estruturas

// Estrutura elemento
// typedef struct elemento {
//     struct elemento *ant;
//     int num;
//     struct elemento *prox;
// } Elem;


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
    Elem* no = *li;     // Ponteiro auxiliar que recebe o primeiro elemento da lista

    // Enquanto "no" não for igual a NULL
    while (no != NULL) {
        cont++;
        no = no->prox;
    }
    
    // Retorna o valor contado
    return cont;
}


// Inserção da lista
// Inserção no começo
int insere_lista_inicio(Lista* li, int num) {

    if (li == NULL) return 0;                   // Se a lista é nula, retorna 0 (falhou)
    Elem* no = (Elem*) malloc(sizeof(Elem));    // Aloca a memória para o nó
    if (no == NULL) return 0;                   // Se o nó é nulo, retorna 0 (falhou)

    no->num   = num;        // Coloca o dado no nó
    no->ant   = NULL;       // Aponta o ant para NULL
    no->prox  = *li;        // Aponta o prox pra quem a lista apontava

    if (*li != NULL)        // Se a lista não estava vazia
        (*li)->ant = no;        // Aponta o ant de quem a lista apontava pra o novo nó
    
    *li = no;               // Novo nó para o primeiro da lista
    
    return 1;               // Inserção feita
}

// Inserção no final
int insere_lista_final(Lista* li, int num) {

    if (li == NULL) return 0;                   // Se a lista é nula, retorna 0 (falhou)
    if ((*li) == NULL)                          // Se o a lista é vazia
        return insere_lista_inicio(li, num);        // Insere no começo e inerção feita
    
    Elem* no = (Elem*) malloc(sizeof(Elem));    // Aloca a memória para o nó
    if (no == NULL) return 0;                   // Se o nó é nulo, retorna 0 (falhou)

    no->num   = num;        // Coloca o dado no nó
    no->prox  = NULL;       // Aponta o prox pra NULL

    Elem* aux = *li;            // aux recebe no que a lista aponta
    while (aux->prox != NULL)   // Enquanto o próximo nó de aux não apontar em NULL
        aux = aux->prox;            // aux recebe o próximo nó
    aux->prox = no;             // próximo nó de aux recebe o novo nó
    no->ant   = aux;            // nó anteiror do novo nó receve aux

    return 1;                   // Inserção feita
}

// Inserção por índice da lista
int insere_lista_indice(Lista* li, int num, int indice) {

    if (li == NULL) return 0;                                // Se a lista é nula, retorna 0 (falhou)

    if ((*li) == NULL || indice == 0)                        // Se a lista é vazia OU o indice == 0
        return insere_lista_inicio(li, num);                    // Insere no começo e inerção feita

    if (indice >= tamanho_Lista(li) - 1 || indice == -1)    // Se o indice for >= (tamanho da lista - 1) ou indice == -1
        return insere_lista_final(li, num);                     // Insere no final e inserção feita

    if (indice < 0) {                                       // Se o indice for menor que 0
        indice = (tamanho_Lista(li)) + indice;                  // Descobre o indice real da lista
        if (indice <= 0)                                        // Se o indice ainda for <= 0
            return insere_lista_inicio(li, num);                    // Insere no começo e inserção feita
    }
    
    Elem* no = (Elem*) malloc(sizeof(Elem));    // Aloca a memória para o nó
    if (no == NULL) return 0;                   // Se o nó é nulo, retorna 0 (falhou)

    no->num = num;                  // Coloca o dado no nó

    int count = indice;             // Contador iniciado com valor de indice
    Elem* aux = *li;                // aux recebe o que a lista aponta
    for (; count > 0; count--) {    // Varredura até count ser == 0
        aux = aux->prox;                // aux recebe o próximo nó
    }
    
    Elem *anterior = aux->ant;      // Nó antes de aux
    
    no->prox = aux;                 // prox do novo nó é aux
    no->ant  = anterior;            // ant do novo nó é "anterior"

    anterior->prox = no;            // prox de "anterior" é o novo nó
    aux->ant   = no;                // ant de aux é o novo nó

    return 1;                       // Inserção feita
}


// Remoção da lista
// Remoção no começo
int remove_lista_inicio(Lista* li) {

    if (li == NULL || *li == NULL) return 0;        // Lista vazia, retorna 0 (falhou)

    Elem* no = *li;                                 // no recebe o que a lista aponta
    *li = no->prox;                                 // lista vai apontar no próximo nó

    if (no->prox != NULL)                           // se o próximo nó não for NULL, a lista não é vazia
        no->prox->ant = NULL;                           // ant do próximo nó recebe NULL
    
    free(no);                                       // Libera a memória de no

    return 1;                                       // Remoção feita
}

// Remoção no final
int remove_lista_final(Lista* li) {
    if (li == NULL || *li == NULL) return 0;        // Lista vazia, retorna 0 (falhou)

    Elem* no = *li;                                 // no recebe o que a lista aponta

    while (no->prox != NULL)                        // Enquanto prox de nó não for NULL
        no = no->prox;                                  // no recebe o próximo nó para percorrer a lista
    
    no->ant->prox = NULL;                           // prox do nó anterior recebe NULL

    free(no);                                       // Libera a memória de no

    return 1;                                       // Remoção feita
}

// Remoção por índice da lista
int remove_lista_indice(Lista* li, int indice) {
    
    if (li == NULL || (*li) == NULL) return 0;              // Se a lista é nula OU aponta em NULL, retorna 0 (falhou)

    if (indice == 0)                                        // Se o indice == 0
        return remove_lista_inicio(li);                         // Remove no começo e remoção feita

    if (indice >= tamanho_Lista(li) - 1 || indice == -1)    // Se o indice for >= (tamanho da lista - 1) ou indice == -1
        return remove_lista_final(li);                          // Remove no final e remoção feita

    if (indice < 0) {                                       // Se o indice for menor que 0
        indice = (tamanho_Lista(li)) + indice;                  // Descobre o indice real da lista
        if (indice <= 0)                                        // Se o indice ainda for <= 0
            return remove_lista_inicio(li);                         // Remove no final e remoção feita
    }
    
    int count = indice;             // Contador iniciado com valor de indice
    Elem* no = *li;                 // no recebe o que a lista aponta
    for (; count > 0; count--) {    // Varredura até count ser == 0
        no = no->prox;                  // no recebe o próximo nó
    }
    
    no->prox->ant = no->ant;        // ant do próximo nó recece o nó anterior
    no->ant->prox = no->prox;       // prox do nó anterior recebe o próximo nó

    return 1;                       // Remoção feita
}


// Consulta da lista
// Consulta por índice
int consulta_lista_indice(Lista* li, int* num, int indice) {
    
    if (li == NULL || *li == NULL) return 0;        // Se a lista está vazia, retorna 0 (falhou)
    if (tamanho_Lista(li) - 1 < indice) return 0;   // Se o índice for maior que a lista

    Elem* aux = *li;                                // aux recebe o que a lista aponta

    while (aux != NULL && indice > 0) {             // Enquanto aux != NULL E indice > 0 : Varre a lista
        aux = aux->prox;                                // aux recebe o próximo nó
        indice--;                                       // indice é decrementado
    }
    
    *num = aux->num;                               // al recebe o valor do nó correspondente ao índice da lista

    return 1;                                      // Consulta bem sucedida
}


// Printa lista
void printaLista(Lista* li) {
    Elem* aux = *li;
    char c;
    for (int i = 0; aux != NULL; i++) {
        if (i < 10) c = '0';
        else c = '\0';
        printf("%c%d | %d\n", c, i, aux->num);
        aux = aux->prox;
    }
}

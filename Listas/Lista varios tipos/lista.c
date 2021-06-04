#include "lista.h"

// Criação e Apaga lista
// Cria a lista
lista* CriaLista() {
    lista* cabeca = (lista *) malloc(sizeof(lista));

    if (cabeca == NULL) {
        return NULL;
    }

    cabeca->quantidade = 0;
    cabeca->primeiro   = NULL;
    cabeca->ultimo     = NULL;

    return cabeca;
}

// Apaga lista
void ApagaLista(lista* cabeca) {
    // Se a lista é NULA
    if (cabeca == NULL) {
        return;
    }

    // Se tem 0 elementos
    if (cabeca->quantidade == 0) {
        free(cabeca);
    }

    // Se tem 1 ou mais elementos
    while (cabeca->quantidade > 0) {

    }
    
}


// Informações da lista
// Quantidade de elementos
int TamanhoLista(lista* cabeca) {
    return cabeca->quantidade;
}


// Inserção Lista
// Insere Começo
void InsereComeco(lista* cabeca, void *valor) {
    // Se a lista é nula para a inserção
    if (cabeca == NULL)
        return;
    
    // Cria o nó
    elemento* elem = (elemento *) malloc(sizeof(elemento));

    // Se o nó é nulo para a inserção
    if (elem == NULL)
        return;
    
    // prox do novo nó recebe o primeiro elemento da lista
    elem->prox = cabeca->primeiro;
    
    // ant do novo nó recebe NULL, porque não tem elementos anterior a ele
    elem->ant = NULL;

    // primeiro da cabeça recebe o novo nó
    cabeca->primeiro = elem;

    // Se for o primeiro elemento também é o último
    if (cabeca->ultimo == NULL) {
        cabeca->ultimo = elem;
    } 
    // Se não for o primeiro esse nó é o anterior do próximo
    else {
        if (!(elem->prox == NULL)){
            (elem->prox)->ant = elem;
        }
    }

    // valor do novo nó recebe o valor informado como parâmetro
    elem->valor = valor;

    // Incrementa o contador da lista
    cabeca->quantidade++;

    // Finaliza inserção
    return;
}

// Insere Meio - Índice
void InsereIndice(lista* cabeca, const unsigned int indice, void *valor) {
    // Se a lista é nula para a inserção
    if (cabeca == NULL)
        return;
    
    // Cria o nó
    elemento *elem = (elemento *) malloc(sizeof(elemento)),
             *aux  = cabeca->primeiro;

    // Se o nó é nulo para a inserção
    if (elem == NULL)
        return;
    
    // Se o índice for 0 insere no começo
    if (indice == 0) {
        InsereComeco(cabeca, valor);
    }

    // Chega até o índice com o aux
    for (int i = indice - 1; i > 0; i--) {
        // O próximo é NULL? Se sim break
        if (aux->prox == NULL) {
            break;
        }
        
        // Pula para o próximo nó
        aux = aux->prox;
    }

    // O proximo do nó novo recebe o próximo de aux
    elem->prox = aux->prox;

    // O próximo de aux recebe o novo nó
    aux->prox = elem;

    // Se o próximo não for Nulo então o novo nó é o anterior do próximo
    if (!(elem->prox == NULL)) {
        (elem->prox)->ant = elem;
    }

    // ant do novo nó recebe o aux
    elem->ant = aux;

    // valor do novo nó recebe o valor informado como parâmetro
    elem->valor = valor;

    // Incrementa o contador da lista
    cabeca->quantidade++;

    // Finaliza inserção
    return;
}

// Insere Final
void InsereFinal(lista* cabeca, void *valor) {
    // Se a lista é nula para a inserção
    if (cabeca == NULL)
        return;
    
    // Cria o nó
    elemento *elem = (elemento *) malloc(sizeof(elemento)),
             *aux  = cabeca->ultimo;

    // Se o nó é nulo para a inserção
    if (elem == NULL)
        return;

    // Último da cabeça recebe o novo nó
    cabeca->ultimo = elem;

    // próximo do novo nó recebe NULL
    elem->prox = NULL;

    // proximo do aux recebe o novo nó
    aux->prox = elem;

    // ant do novo nó recebe o aux
    elem->ant = aux;
}

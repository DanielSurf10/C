#include <stdlib.h>

#ifndef __Lista_Varios_Elementos__
#define __Lista_Varios_Elementos__


// Declação da struct
// Elementos
typedef struct {
    void *valor;
    elemento *ant;
    elemento *prox;
} elemento;

// Cabeça
typedef struct {
    int quantidade;
    elemento *primeiro;
    elemento *ultimo;
} lista;


// Criação e Apaga lista
// Cria a lista
lista* CriaLista();

// Apaga lista
void ApagaLista(lista* cabeca);


// Informações da lista
// Quantidade de elementos
int TamanhoLista(lista* cabeca);


// Inserção Lista
// Insere Começo
void InsereComeco(lista* cabeca, void *valor);

// Insere Meio - Índice
void InsereIndice(lista* cabeca, const unsigned int indice, void *valor);

// Insere Final
void InsereFinal(lista* cabeca, void *valor);


// Remoção Lista
// Remove Começo
void RemoveComeco(lista* cabeca);

// Remove Meio - Índice
void RemoveIndice(lista* cabeca, int indice);

// Remove Meio - Valor
void RemoveValor(lista* cabeca, void *valor);

// Remove Final
void RemoveFinal(lista* cabeca);


// Leitura Lista
// Por Índice
void LeituraIndice(lista* cabeca, int indece, void *valor);

#endif

// Definição do elemento da lista
typedef struct elemento* Lista;

// Estrutura elemento
typedef struct elemento {
    struct elemento *ant;
    int num;
    struct elemento *prox;
} Elem;

// Funções de implementação
// Criação
Lista* cria_Lista();

// Remoção
void libera_Lista(Lista* li);

// Informações da lista
// Lista vazia
int lista_Vazia(Lista* li);

// Tamanho da lista
int tamanho_Lista(Lista* li);


// Inserção da lista
// Inserção no começo
int insere_lista_inicio(Lista* li, int num);

// Inserção no final
int insere_lista_final(Lista* li, int num);

// Inserção por índice da lista
int insere_lista_indice(Lista* li, int num, int indice);


// Remoção da lista
// Remoção no começo
int remove_lista_inicio(Lista* li);

// Remoção no final
int remove_lista_final(Lista* li);

// Remoção por índice da lista
int remove_lista_indice(Lista* li, int indice);


// Consulta da lista
// Consulta por índice
int consulta_lista_indice(Lista* li, int* num, int indice);



// Printa lista
void printaLista(Lista* li);

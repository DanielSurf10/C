// Definição do elemento da lista
typedef struct elemento* Lista;

// Estrutura Aluno
struct aluno {
    int matricula;
    char* nome;
    float n1, n2, n3;
};

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
int insere_lista_inicio(Lista* li, struct aluno al);

// Inserção no final
int insere_lista_final(Lista* li, struct aluno al);

// Inserção por índice da lista
int insere_lista_indice(Lista* li, struct aluno al, int indice);


// Remoção da lista
// Remoção no começo
int remove_lista_inicio(Lista* li);

// Remoção no final
int remove_lista_final(Lista* li);

// Remoção por índice da lista
int remove_lista_indice(Lista* li, int indice);


// Consulta da lista
// Consulta por índice
int consulta_lista_indice(Lista* li, struct aluno* al, int indice);

// Consulta por número
int consulta_lista_num(Lista* li, struct aluno* al, int num);



// Printa lista
void printaLista(Lista* li);

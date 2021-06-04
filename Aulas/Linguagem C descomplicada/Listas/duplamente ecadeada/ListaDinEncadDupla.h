// Estrutura Aluno
struct aluno {
    int matricula;
    char nome;
    float n1, n2, n3;
};

// Definição do elemento da lista
typedef struct elemento* Lista;

// Função de Criação e Remoção
// Criação
Lista* cria_Lista();

// Remoção
void libera_Lista(Lista* li);

// Informações da lista
// Lista vazia
int lista_Vazia(Lista* li);

// Tamanho da lista
int tamanho_Lista(Lista* li);

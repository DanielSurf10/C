#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ListaDinEncadDupla.h"

#define PI 3.14159265

Lista* concatena_lista(Lista* li_frente, Lista* li_traz);
Elem* cria_no(int num, Elem* ant, Elem* prox);

int main() {

    // Lista frente
    Lista* lista_frente = cria_Lista();
    for (int i = 0; i <= 90; i++) {
        insere_lista_final(lista_frente, sin(i * PI / 180) * 100);
    }

    // Lista traz
    Lista* lista_traz = cria_Lista();
    for (int i = 91; i <= 180; i++) {
        insere_lista_final(lista_traz, sin(i * PI / 180) * 100);
    }

    // Concatenar 
    Lista* novaLista = concatena_lista(lista_frente, lista_traz);

    // Printar
    puts("");
    printaLista(lista_frente);
    puts("");
    printaLista(lista_traz);
    puts("");
    printaLista(novaLista);


    // Liberar a lista
    libera_Lista(lista_frente);
    libera_Lista(lista_traz);
    libera_Lista(novaLista);

    return 0;
}

Lista* concatena_lista(Lista* li_frente, Lista* li_traz) {

    // Verificação se é lista válida
    if (li_frente == NULL || li_traz == NULL)           // Se um das listas é nula : deu erro
        return NULL;                                        // retorna NULL
    

    // Criação da lista
    Lista* liNova = cria_Lista();                       // Cria a lista
    if (liNova == NULL) return NULL;                    // Se a lista é nula : retorna NULL


    // Ponteiros para o uso na criação de nós
    Elem *aux_frente = *li_frente,                      // aux_frente recebe o que a li_frente aponta
         *aux_traz   = *li_traz,                        // aux_traz recebe o que a li_traz aponta
         *no_novo, *no_ant, *aux;                       // aux é um auxiliar para usar 2 listas no mesmo código


    // Determinação para qual lista usar
    if (aux_frente == NULL) {                           // Se a aux_frente for NULL : li frente está vazia
        if (aux_traz == NULL)                               // Se aux_traz também é NULL : li traz está vazia
            return liNova;                                     // Retorna a lista vazia
        aux = aux_traz;                                     // Se aux_traz não é NULL : aux recebe aux_traz
    } else {                                            // Senão
        aux = aux_frente;                                   // aux recebe aux_frente : porque não tem nada em li_frente
    }


    // Criação do primeiro nó
    no_novo = cria_no(aux->num, NULL, NULL);            // no_novo recebe um novo nó
    if (no_novo == NULL) {                              // Se no_novo é nulo : Deu erro
        libera_Lista(liNova);                               // Libera a lista
        return NULL;                                        // Retorna NULL
    }
    *liNova = no_novo;                                  // A nova lista aponta para o primeiro elemento da lista

    if (aux_frente == NULL) {                           // Se aux_frente é NULL : se li_frente está vazia
        aux_traz = aux_traz->prox;                          // aux_traz vai pro próximo nó da sua lista
    } else {                                            // Senão : li_frente não está vazia
        aux_frente = aux_frente->prox;                      // aux_frente vai pro próximo nó da sua lista
    }
    aux = aux->prox == NULL ? aux_traz : aux->prox;     // Se o próximo elemento de aux for NULL : aux rececebe aux_traz, senão, aux recebe o próximo nó
                                                            // Mesmo aux_traz->prox seja justamente o valor dessa condição, aux vai continuar como aux_traz


    // Colocando na lista nova os valores das 2 listas
    while (aux != NULL) {                               // Enquanto aux != NULL
        no_ant = no_novo;                                   // no_ant  recebe o  no_novo : Fica como memória para depois apontar nesse nó
        no_novo = cria_no(aux->num, no_ant, NULL);          // no_novo recebe um outro nó, e tem o seu valor e nó anterior colocados
        if (no_novo == NULL) {                              // Se o no_novo for NULL : Deu erro
            libera_Lista(liNova);                               // Libera a lista
            return NULL;                                        // Retorna NULL
        }    
        no_ant->prox = no_novo;                             // no_ant tem como seu próximo o no_novo
        
        if (aux_frente != NULL) {                           // se aux_frete != NULL
            aux_frente = aux_frente->prox;                      // aux_frente vai para o próximo nó

            if (aux_frente != NULL) {                           // se aux_frente ainda não for NULL : ainda tem nós a se percorrer
                aux = aux_frente;                                   // aux recebe aux_frente
            } else {                                            // senão : não tem mais nós para percorrer
                aux = aux_traz;                                     // aux recebe aux_traz : começa a segunda lista
            }
        } else {                                            // senão : aux_frente já foi totalmente percorrida
            aux_traz = aux_traz->prox;                          // aux_traz vai para o próximo nó : o while verifica se aux_traz virou NULL ou não
            aux = aux_traz;                                     // aux recebe aux_traz
        }
    }


    return liNova;                                      // Retorna a lista nova depois receber os valores das 2 listas 
}

Elem* cria_no(int num, Elem* ant, Elem* prox) {
    
    Elem *no = (Elem*) malloc(sizeof(Elem));    // Aloca a memória para nó
    if (no == NULL) return NULL;                // Se a alocação falhar retorna NULL

    no->num  = num;         // dado de no recebe num
    no->ant  = ant;         // ant de no recebe ant
    no->prox = prox;        // prox de no recebe prox

    return no;              // retorna o no
}

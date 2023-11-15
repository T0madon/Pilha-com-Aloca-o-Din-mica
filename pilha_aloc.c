pilha_aloc.c : 

#include <stdio.h>
#include <stdlib.h>
#include "pilha_aloc.h"

struct no{
    int valor;
    struct no *prox;
 };

 int quantidade=0;

struct no *topo = NULL;


void push(int numero){

    struct no *p = NULL;

    p = (struct no*)malloc(sizeof(struct no));

    p -> valor = numero;

    p -> prox = topo;

    topo = p;

    printf("O numero %d foi alocado na pilha\n", numero);

    quantidade++;
}

void pop(){

    struct no *p;
    int num;

    if(topo == NULL){
        printf("A pilha esta vazia!\n");
        return;
    }

    num = topo ->valor;
    p = topo;
    topo = topo ->prox;
    printf("O valor %d foi removido da pilha!\n", num);
    quantidade--;
    free(p);
}


void topo_pilha(){

    struct no* num = topo;

    if(topo == NULL){
        printf("A pilha esta vazia\n");
        return;
    }
    printf("Elemento no topo da fila: %d\n", num ->valor);
}


void vazia(){

    struct no* num = topo;

    if(topo == NULL){
        printf("A pilha esta vazia!\n");
        return;
    }
    printf("A pilha nao esta vazia!\n");
}


void imprime(){

    struct no* aux = topo;
    int i = quantidade;


    if(topo == NULL){
        printf("A pilha esta vazia!\n");
        return;
    }

    while(aux != NULL){
        printf("pilha[%d] = %d\n", i,aux ->valor);
        aux = aux ->prox;
        i--;
    }
    printf("\n");
}

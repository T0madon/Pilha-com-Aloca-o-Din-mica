#include <stdio.h>
#include <stdlib.h>
#include "pilha_aloc.h"

int main(){

    int caminho=0, valor,x=0;

    while(x==0){

     printf("1 - PUSH\n2 - POP\n3 - TOPO DA PILHA\n4 - VAZIA\n5 - IMPRIME\n6 - SAIR\nEscolha a acao: ");
     scanf("%d", &caminho);

     switch(caminho){

        case 1:
            printf("Digite um valor para ser inserido: ");
            scanf("%d", &valor);
            push(valor);
            system("pause");
            system("cls");
            break;

        case 2:
            pop();
            system("pause");
            system("cls");
            break;

        case 3:
            topo_pilha();
            system("pause");
            system("cls");
            break;

        case 4:
            vazia();
            system("pause");
            system("cls");
            break;

        case 5:
            imprime();
            system("pause");
            system("cls");
            break;

        case 6:
            x = 1;
            break;

        default:
            printf("Valor incorreto! Tente novamente\n");
            system("pause");
            system("cls");
            break;
     }
    }
    return 0;
}

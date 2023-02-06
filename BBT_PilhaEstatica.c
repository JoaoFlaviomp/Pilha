#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAMP 26
typedef struct sPilha{
    char itens[TAMP];
    int topo;

}Pilha;

void inicializar (Pilha*ptrP){
    ptrP->topo=-1;
}

int pilhavazia(Pilha*ptrP){
    if(ptrP->topo == -1)
        return 1;
    return 0;
}

int pilhacheia(Pilha*ptrP){
    if(ptrP->topo == TAMP-1)
        return 1;
    return 0;
}

void empilhar(Pilha*ptrP, char elem){
    if(pilhacheia(ptrP)==1){
        printf("ERRO: pilha cheia!\n");
            return;
    }else{
        (ptrP->topo)++;
            ptrP->itens[ptrP->topo]=elem;
    }
}

void desempilhar(Pilha*ptrP){
    char elemento;
        if(pilhavazia(ptrP)==1){
            printf("ERRO: pilha vazia!\n");
                return 1;
    }else{
        elemento = ptrP->itens[ptrP->topo];
            (ptrP->topo)--;
                return elemento;
    }
}

int retornartopo(Pilha*ptrP){
    if(pilhavazia(ptrP)==1){
        printf("ERRO: pilha vazia!\n");
            return -1;
    }else{
        return ptrP->itens[ptrP->topo];
    }
}

void exibirelementos(Pilha *ptrP)
{
    int i;
    if(pilhavazia(ptrP)){
        printf("Pilha vazia!\n");
        }else{
        for(i = ptrP -> topo; i >= 0; i--)
                printf("%c\n", ptrP->itens[i]);
        }
}

Menu()
{
    printf("\n|Bem Vindo!\n");
    printf("\n|  Digite 1 se deseja inserir um elemento \n");
    printf("\n|  Digite 2 se deseja remover um elemento \n");
    printf("\n|  Digite 3 se deseja retornar o elemento do topo da pilha sem remove-lo \n");
    printf("\n|  Digite 4 se deseja exibir os elementos da pilha usando representacao classica \n");

}








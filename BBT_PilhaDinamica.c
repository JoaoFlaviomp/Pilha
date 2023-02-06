#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct sPratos{
    char cor[10];
    int tamanho;
    char tipo[10];
}Pratos;

typedef struct sNo{
    Pratos info;
    struct sNo*prox;
}NO;

int pilha_vazia(NO*topo)
{
    if(topo == NULL)
        return 1;
    return 0;
}

NO* alocarNo(){
    return (NO*) malloc(sizeof(NO));
}

void desalocarNo(NO* q)
{
    free(q);
}

void inicializar(NO** topo){
    *topo = NULL;
}

void empilhar(NO** topo, Pratos elem){
    NO *novo;
    novo = alocarNo();
        if(novo != NULL){
            novo -> info = elem;
            novo -> prox = *topo;
            *topo = novo;
            printf(" Prato empilhado com sucesso.\n");
        }else{
            printf("ERRO na alocacao do no.\n");
        }
}

Pratos desempilhar(NO** topo){
    if(pilha_vazia(topo) == 1){
        printf("ERRO:pilha vazia\n.");
            return;
    }else{
        NO* aux;
        aux = *topo;
        *topo = aux -> prox;
        desalocarNo(aux);
    }
}

Pratos retornartopo(NO* topo)
{
    if(!pilha_vazia(topo)){
        return topo->info;
    }
        else{
            printf("Pilha vazia\n");
            return;
        }
}

void exibirelementos(NO* topo){
    NO* aux;
    aux = topo;
    while(aux != NULL)
    {
        printf("Exibindo a pilha de Pratos : %s,%d, %s \n", topo->info.cor , topo->info.tamanho, topo->info.tipo);
        topo = topo->prox;

        desalocarNo(aux);
        aux = topo;

    }
}

Menu ()
{
        printf("1- Inserir um prato no topo da pilha\n");
        printf("2- Remover um elemento do topo da pilha\n");
        printf("3- Exibir o topo da pilha\n");
        printf("4- Exibir os pratos da pilha\n");
}

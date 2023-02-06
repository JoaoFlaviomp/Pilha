#include<stdio.h>
#include<stdlib.h>
#include "BBT_PilhaEstatica.c"
int main (){
    char letra;
    int opcao;
    Pilha s;

    inicializar(&s);

    do{
    Menu();

    printf("Digite uma opcao valida: \n");
    scanf("%d",&opcao);

    switch(opcao){
    case 1:
        fflush(stdin);
        printf("Digite a letra: ");
        scanf("%c",&letra);
        empilhar(&s,letra);
        break;

    case 2:
        desempilhar(&s);
        printf("O ultimo elemento da pilha foi desempilhado com sucesso!\n\n");

    break;

    case 3:
        letra=retornartopo(&s);
        printf("Topo: %c",letra);

    break;

    case 4:
        exibirelementos(&s);

    break;


        }

    }while(opcao!=5);

return 0;

}


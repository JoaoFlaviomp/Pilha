#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "BBT_PilhaDinamica.c"
int main (){
    NO* Pilha;
    int opcao;
    Pratos elem;
    Pratos P;
    inicializar(&Pilha);

    do{
        Menu();
        printf("Selecione uma opcao valida: \n");
        scanf("%d", &opcao);
        fflush(stdin);

            switch(opcao){
            case 1:
                    fflush(stdin);
                    printf("Digite a cor do prato: \n");
                    gets(&elem.cor);
                    fflush(stdin);
                    printf("Digite o tamanho do prato: \n");
                    scanf("%d", &elem.tamanho);
                    fflush(stdin);
                    printf("Digite o tipo do prato: \n");
                    gets(&elem.tipo);
                    fflush(stdin);
                        empilhar(&Pilha, elem);
                    break;
            case 2:
                    P = desempilhar(&Pilha);
                    printf("A pilha de livros foi desempilhada com sucesso\n");
                    break;
            case 3:
                    retornartopo(&Pilha);
                    if(pilha_vazia(&Pilha)!= 1){
                        printf("TOPO: %s, %d, %s \n", elem.cor, elem.tamanho, elem.tipo);
                    }
                    break;
            case 4:
                    exibirelementos(Pilha);
                    break;

            default: printf("Saindo\n");
                    break;
            }
    }while(opcao!=5);
        return 0;
}

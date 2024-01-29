#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(){

int opcao;

do{
    printf("digite uma opcao: \n");
    printf("1 - Insertion Sort\n");
    printf("2 - Selection Sort\n");
    printf("3 - Bubble Sort\n");
    printf("4 - Shell Sort\n");
    printf("5 - sair\n");

    scanf("%d", &opcao);
    fflush(stdin);

    switch(opcao){
        case 1:
            printf("Insertion Sort\nDigite o tipo de ordenacao:\n");
            ordenacao(1);
            break;
        case 2:
            printf("Selection Sort\nDigite o tipo de ordenacao:\n");
            ordenacao(2);
            break;
        case 3:
            printf("Bubble Sort\nDigite o tipo de ordenacao:\n");
            ordenacao(3);

            break;
        case 4:
            printf("Shell Sort\nDigite o tipo de ordenacao:\n");
            ordenacao(4);

        case 5:
            printf("saindo\n");
            break;

    }

}while(opcao!=5);

return 0;
}


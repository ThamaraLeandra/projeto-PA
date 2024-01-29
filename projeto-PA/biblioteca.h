#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int ordenacao(int tipo){
    int op, entrada = 0, quantidade = 0;
    FILE *ptrArq, *ptrArq2;
    char arqv[5];
    do{
        printf("1 - Crescente\n");
        printf("2 - Decresente\n");
        printf("3 - Randomico\n");
        printf("4 - Voltar\n");

        scanf("%d", &op);
        fflush(stdin);


    switch(op){
        case 1:
            //Insertion Sort cresente
            if(tipo == 1){
                ptrArq = fopen("insertion_sort/entrada/arq_entrada_crescente/entrada_cresc_10.txt", "w");
                if(ptrArq == NULL){
                    printf("Erro na abertura do arquivo!");
                    return 0;
                }
                 qnt(10, ptrArq, 1, 1);
                 fclose(ptrArq);

                ptrArq = fopen("insertion_sort/entrada/arq_entrada_crescente/entrada_cresc_100.txt", "w");
                if(ptrArq == NULL){
                    printf("Erro na abertura do arquivo!");
                    return 0;
                }
                 qnt(100, ptrArq, 1, 1);
                 fclose(ptrArq);

                 ptrArq = fopen("insertion_sort/entrada/arq_entrada_crescente/entrada_cresc_1000.txt", "w");
                if(ptrArq == NULL){
                    printf("Erro na abertura do arquivo!");
                    return 0;
                }
                 qnt(1000, ptrArq, 1, 1);
                 fclose(ptrArq);

                 ptrArq = fopen("insertion_sort/entrada/arq_entrada_crescente/entrada_cresc_10000.txt", "w");
                if(ptrArq == NULL){
                    printf("Erro na abertura do arquivo!");
                    return 0;
                }
                 qnt(10000, ptrArq, 1, 1);
                 fclose(ptrArq);

                 ptrArq = fopen("insertion_sort/entrada/arq_entrada_crescente/entrada_cresc_100000.txt", "w");
                if(ptrArq == NULL){
                    printf("Erro na abertura do arquivo!");
                    return 0;
                }
                 qnt(100000, ptrArq, 1, 1);
                 fclose(ptrArq);

                 ptrArq = fopen("insertion_sort/entrada/arq_entrada_crescente/entrada_cresc_1000000.txt", "w");
                if(ptrArq == NULL){
                    printf("Erro na abertura do arquivo!");
                    return 0;
                }
                 qnt(1000000, ptrArq, 1, 1);
                 fclose(ptrArq);
            }else if (tipo == 2){
                //Selection Sort Crescente
                ptrArq = fopen("selection_sort/entrada/arq_entrada_crescente/entrada_cresc_10.txt", "w");
                if(ptrArq == NULL){
                    printf("Erro na abertura do arquivo!");
                    return 0;
                }
                 qnt(10, ptrArq, 1, 2);
                 fclose(ptrArq);

                ptrArq = fopen("selection_sort/entrada/arq_entrada_crescente/entrada_cresc_100.txt", "w");
                if(ptrArq == NULL){
                    printf("Erro na abertura do arquivo!");
                    return 0;
                }
                 qnt(100, ptrArq, 1, 2);
                 fclose(ptrArq);

                 ptrArq = fopen("selection_sort/entrada/arq_entrada_crescente/entrada_cresc_1000.txt", "w");
                if(ptrArq == NULL){
                    printf("Erro na abertura do arquivo!");
                    return 0;
                }
                 qnt(1000, ptrArq, 1, 2);
                 fclose(ptrArq);

                 ptrArq = fopen("selection_sort/entrada/arq_entrada_crescente/entrada_cresc_10000.txt", "w");
                if(ptrArq == NULL){
                    printf("Erro na abertura do arquivo!");
                    return 0;
                }
                 qnt(10000, ptrArq, 1, 2);
                 fclose(ptrArq);

                 ptrArq = fopen("selection_sort/entrada/arq_entrada_crescente/entrada_cresc_100000.txt", "w");
                if(ptrArq == NULL){
                    printf("Erro na abertura do arquivo!");
                    return 0;
                }
                 qnt(100000, ptrArq, 1, 2);
                 fclose(ptrArq);

                 ptrArq = fopen("selection_sort/entrada/arq_entrada_crescente/entrada_cresc_1000000.txt", "w");
                if(ptrArq == NULL){
                    printf("Erro na abertura do arquivo!");
                    return 0;
                }
                 qnt(1000000, ptrArq, 1, 2);
                 fclose(ptrArq);
                }else if(tipo == 3){
                    //Bubble Sort
                    ptrArq = fopen("bubble_sort/entrada/arq_entrada_crescente/entrada_cresc_10.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                     qnt(10, ptrArq, 1, 3);
                     fclose(ptrArq);

                    ptrArq = fopen("bubble_sort/entrada/arq_entrada_crescente/entrada_cresc_100.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                     qnt(100, ptrArq, 1, 3);
                     fclose(ptrArq);

                     ptrArq = fopen("bubble_sort/entrada/arq_entrada_crescente/entrada_cresc_1000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                     qnt(1000, ptrArq, 1, 3);
                     fclose(ptrArq);

                     ptrArq = fopen("bubble_sort/entrada/arq_entrada_crescente/entrada_cresc_10000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                     qnt(10000, ptrArq, 1, 3);
                     fclose(ptrArq);

                     ptrArq = fopen("bubble_sort/entrada/arq_entrada_crescente/entrada_cresc_100000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                     qnt(100000, ptrArq, 1, 3);
                     fclose(ptrArq);

                     ptrArq = fopen("bubble_sort/entrada/arq_entrada_crescente/entrada_cresc_1000000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                     qnt(1000000, ptrArq, 1, 3);
                     fclose(ptrArq);

                }else if(tipo ==4){
                    //Shell_sort
                    ptrArq = fopen("shell_sort/entrada/arq_entrada_crescente/entrada_cresc_10.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                     qnt(10, ptrArq, 1, 4);
                     fclose(ptrArq);

                    ptrArq = fopen("shell_sort/entrada/arq_entrada_crescente/entrada_cresc_100.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                     qnt(100, ptrArq, 1, 4);
                     fclose(ptrArq);

                     ptrArq = fopen("shell_sort/entrada/arq_entrada_crescente/entrada_cresc_1000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                     qnt(1000, ptrArq, 1, 4);
                     fclose(ptrArq);

                     ptrArq = fopen("shell_sort/entrada/arq_entrada_crescente/entrada_cresc_10000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                     qnt(10000, ptrArq, 1, 4);
                     fclose(ptrArq);
                     ptrArq = fopen("shell_sort/entrada/arq_entrada_crescente/entrada_cresc_100000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                     qnt(100000, ptrArq, 1, 4);
                     fclose(ptrArq);

                     ptrArq = fopen("shell_sort/entrada/arq_entrada_crescente/entrada_cresc_1000000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                     qnt(1000000, ptrArq, 1, 4);
                     fclose(ptrArq);


                }
            break;

        case 2://decrescente

                if( tipo == 1){
                    //insertion sort
                        ptrArq = fopen("insertion_sort/entrada/arq_entrada_decrescente/entrada_decresc_10.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(10, ptrArq, 2, 1);
                        fclose(ptrArq);

                        ptrArq = fopen("insertion_sort/entrada/arq_entrada_decrescente/entrada_decresc_100.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(100, ptrArq, 2, 1);
                        fclose(ptrArq);

                        ptrArq = fopen("insertion_sort/entrada/arq_entrada_decrescente/entrada_decresc_1000.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(1000, ptrArq, 2, 1);
                        fclose(ptrArq);

                        ptrArq = fopen("insertion_sort/entrada/arq_entrada_decrescente/entrada_decresc_10000.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(10000, ptrArq, 2, 1);
                        fclose(ptrArq);

                        ptrArq = fopen("insertion_sort/entrada/arq_entrada_decrescente/entrada_decresc_100000.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(100000, ptrArq, 2, 1);
                        fclose(ptrArq);

                        ptrArq = fopen("insertion_sort/entrada/arq_entrada_decrescente/entrada_decresc_1000000.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(1000000, ptrArq, 2, 1);
                        fclose(ptrArq);
                }else
                    if (tipo == 2){
                        //selection sort
                        ptrArq = fopen("selection_sort/entrada/arq_entrada_decrescente/entrada_decresc_10.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(10, ptrArq, 2, 2);
                        fclose(ptrArq);

                        ptrArq = fopen("selection_sort/entrada/arq_entrada_decrescente/entrada_decresc_100.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(100, ptrArq, 2, 2);
                        fclose(ptrArq);

                        ptrArq = fopen("selection_sort/entrada/arq_entrada_decrescente/entrada_decresc_1000.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(1000, ptrArq, 2, 2);
                        fclose(ptrArq);

                        ptrArq = fopen("selection_sort/entrada/arq_entrada_decrescente/entrada_decresc_10000.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(10000, ptrArq, 2, 2);
                        fclose(ptrArq);

                        ptrArq = fopen("selection_sort/entrada/arq_entrada_decrescente/entrada_decresc_100000.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(100000, ptrArq, 2, 2);
                        fclose(ptrArq);

                        ptrArq = fopen("selection_sort/entrada/arq_entrada_decrescente/entrada_decresc_1000000.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(1000000, ptrArq, 2, 2);
                        fclose(ptrArq);
                    }else if(tipo == 3){
                        //Bubble Sort
                        ptrArq = fopen("bubble_sort/entrada/arq_entrada_decrescente/entrada_decresc_10.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(10, ptrArq, 2, 3);
                        fclose(ptrArq);

                        ptrArq = fopen("bubble_sort/entrada/arq_entrada_decrescente/entrada_decresc_100.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(100, ptrArq, 2, 3);
                        fclose(ptrArq);

                        ptrArq = fopen("bubble_sort/entrada/arq_entrada_decrescente/entrada_decresc_1000.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(1000, ptrArq, 2, 3);
                        fclose(ptrArq);

                        ptrArq = fopen("bubble_sort/entrada/arq_entrada_decrescente/entrada_decresc_10000.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(10000, ptrArq, 2, 3);
                        fclose(ptrArq);

                        ptrArq = fopen("bubble_sort/entrada/arq_entrada_decrescente/entrada_decresc_100000.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(100000, ptrArq, 2, 3);
                        fclose(ptrArq);

                        ptrArq = fopen("bubble_sort/entrada/arq_entrada_decrescente/entrada_decresc_1000000.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(1000000, ptrArq, 2, 3);
                        fclose(ptrArq);

                    }else if(tipo == 4){
                        //Shell Sort
                        ptrArq = fopen("shell_sort/entrada/arq_entrada_decrescente/entrada_decresc_10.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(10, ptrArq, 2, 4);
                        fclose(ptrArq);

                        ptrArq = fopen("shell_sort/entrada/arq_entrada_decrescente/entrada_decresc_100.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(100, ptrArq, 2, 4);
                        fclose(ptrArq);

                        ptrArq = fopen("shell_sort/entrada/arq_entrada_decrescente/entrada_decresc_1000.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(1000, ptrArq, 2, 4);
                        fclose(ptrArq);

                        ptrArq = fopen("shell_sort/entrada/arq_entrada_decrescente/entrada_decresc_10000.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(10000, ptrArq, 2, 4);
                        fclose(ptrArq);

                        ptrArq = fopen("shell_sort/entrada/arq_entrada_decrescente/entrada_decresc_100000.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(100000, ptrArq, 2, 4);
                        fclose(ptrArq);

                        ptrArq = fopen("shell_sort/entrada/arq_entrada_decrescente/entrada_decresc_1000000.txt", "w");
                        if(ptrArq == NULL){
                            printf("Erro na abertura do arquivo!");
                            return 0;
                        }
                        qnt(1000000, ptrArq, 2, 4);
                        fclose(ptrArq);

                    }


            break;
        case 3:
            //Random
            if(tipo ==1){
                //Insertion Sort
                ptrArq = fopen("insertion_sort/entrada/arq_entrada_random/entrada_rand_10.txt", "w");
                if(ptrArq == NULL){
                    printf("Erro na abertura do arquivo!");
                    return 0;
                }
                qnt(10, ptrArq, 3, 1);
                fclose(ptrArq);

                ptrArq = fopen("insertion_sort/entrada/arq_entrada_random/entrada_rand_100.txt", "w");
                if(ptrArq == NULL){
                    printf("Erro na abertura do arquivo!");
                    return 0;
                }
                qnt(100, ptrArq, 3, 1);
                fclose(ptrArq);

                ptrArq = fopen("insertion_sort/entrada/arq_entrada_random/entrada_rand_1000.txt", "w");
                if(ptrArq == NULL){
                    printf("Erro na abertura do arquivo!");
                    return 0;
                }
                qnt(1000, ptrArq, 3, 1);
                fclose(ptrArq);

                ptrArq = fopen("insertion_sort/entrada/arq_entrada_random/entrada_rand_10000.txt", "w");
                if(ptrArq == NULL){
                    printf("Erro na abertura do arquivo!");
                    return 0;
                }
                qnt(10000, ptrArq, 3, 1);
                fclose(ptrArq);

                ptrArq = fopen("insertion_sort/entrada/arq_entrada_random/entrada_rand_100000.txt", "w");
                if(ptrArq == NULL){
                    printf("Erro na abertura do arquivo!");
                    return 0;
                }
                qnt(100000, ptrArq, 3, 1);
                fclose(ptrArq);

                ptrArq = fopen("insertion_sort/entrada/arq_entrada_random/entrada_rand_1000000.txt", "w");
                if(ptrArq == NULL){
                    printf("Erro na abertura do arquivo!");
                    return 0;
                }
                qnt(1000000, ptrArq, 3, 1);
                fclose(ptrArq);


            }else if( tipo ==2){
                    //Selection Sort
                    ptrArq = fopen("selection_sort/entrada/arq_entrada_random/entrada_rand_10.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                    qnt(10, ptrArq, 3, 2);
                    fclose(ptrArq);

                    ptrArq = fopen("selection_sort/entrada/arq_entrada_random/entrada_rand_100.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                    qnt(100, ptrArq, 3, 2);
                    fclose(ptrArq);

                    ptrArq = fopen("selection_sort/entrada/arq_entrada_random/entrada_rand_1000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                    qnt(1000, ptrArq, 3, 2);
                    fclose(ptrArq);

                    ptrArq = fopen("selection_sort/entrada/arq_entrada_random/entrada_rand_10000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                    qnt(10000, ptrArq, 3, 2);
                    fclose(ptrArq);

                    ptrArq = fopen("selection_sort/entrada/arq_entrada_random/entrada_rand_100000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                    qnt(100000, ptrArq, 3, 2);
                    fclose(ptrArq);

                    ptrArq = fopen("selection_sort/entrada/arq_entrada_random/entrada_rand_1000000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                qnt(1000000, ptrArq, 3, 2);
                fclose(ptrArq);
            }else if(tipo == 3){
                //Bubble Sort
                ptrArq = fopen("bubble_sort/entrada/arq_entrada_random/entrada_rand_10.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                    qnt(10, ptrArq, 3, 3);
                    fclose(ptrArq);

                    ptrArq = fopen("bubble_sort/entrada/arq_entrada_random/entrada_rand_100.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                    qnt(100, ptrArq, 3, 3);
                    fclose(ptrArq);

                    ptrArq = fopen("bubble_sort/entrada/arq_entrada_random/entrada_rand_1000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                    qnt(1000, ptrArq, 3, 3);
                    fclose(ptrArq);

                    ptrArq = fopen("bubble_sort/entrada/arq_entrada_random/entrada_rand_10000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                    qnt(10000, ptrArq, 3, 3);
                    fclose(ptrArq);

                    ptrArq = fopen("bubble_sort/entrada/arq_entrada_random/entrada_rand_100000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                    qnt(100000, ptrArq, 3, 3);
                    fclose(ptrArq);

                    ptrArq = fopen("bubble_sort/entrada/arq_entrada_random/entrada_rand_1000000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                    qnt(1000000, ptrArq, 3, 3);
                    fclose(ptrArq);

            }else if(tipo ==4){
                // Shell Sort
                    ptrArq = fopen("shell_sort/entrada/arq_entrada_random/entrada_rand_10.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                    qnt(10, ptrArq, 3, 4);
                    fclose(ptrArq);

                    ptrArq = fopen("shell_sort/entrada/arq_entrada_random/entrada_rand_100.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                    qnt(100, ptrArq, 3, 4);
                    fclose(ptrArq);

                    ptrArq = fopen("shell_sort/entrada/arq_entrada_random/entrada_rand_1000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                    qnt(1000, ptrArq, 3, 4);
                    fclose(ptrArq);

                    ptrArq = fopen("shell_sort/entrada/arq_entrada_random/entrada_rand_10000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                    qnt(10000, ptrArq, 3, 4);
                    fclose(ptrArq);

                    ptrArq = fopen("shell_sort/entrada/arq_entrada_random/entrada_rand_100000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                    qnt(100000, ptrArq, 3, 4);
                    fclose(ptrArq);

                    ptrArq = fopen("shell_sort/entrada/arq_entrada_random/entrada_rand_1000000.txt", "w");
                    if(ptrArq == NULL){
                        printf("Erro na abertura do arquivo!");
                        return 0;
                    }
                    qnt(1000000, ptrArq, 3, 4);
                    fclose(ptrArq);


            }
            break;

         case 4:
            printf("voltando\n");
            break;
    }

    }while(op!=4);

};

void qnt(int quantidade, FILE *ptr, int ordem, int tipo){

    FILE *ptrAr;
    int entrada = 0;
    int *vetor = malloc(quantidade * sizeof(int));

    printf("Digite um numero de entrada:\n");
    scanf("%d", &entrada);

    fprintf(ptr, "%d", quantidade);
    fprintf(ptr, "%s", "\n");
    for(int i = 0; i < quantidade ; i++){
        fprintf(ptr, "%d", entrada);
        fprintf(ptr, "%s", "\n");
        vetor[i] = entrada;

        if(ordem == 1){
            entrada++;
        }else if(ordem ==2){
            entrada--;
        }else if(ordem == 3){
            entrada = rand() %  1000;
        }

    }


    algoritmos(vetor,quantidade, tipo, ordem);



};
void algoritmos(int vet[], int quantidade, int tipo, int ordem){

    double time_spent = 0.0;
    if(tipo == 1){
        //Insertion Sort
        clock_t begin = clock();
        insertion_sort(vet, quantidade);


        clock_t end = clock();
        time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
        abrir_arq_tempo(tipo, quantidade, time_spent, ordem);

    }else if(tipo == 2){
        //selection sort
        clock_t begin = clock();

        selection_sort(vet, quantidade);
        clock_t end = clock();
        time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
        abrir_arq_tempo(tipo, quantidade, time_spent, ordem);

    }else if(tipo == 3){
        //Bubble Sort
        clock_t begin = clock();
        bubble_sort(vet, quantidade);
        clock_t end = clock();
        time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
        abrir_arq_tempo(tipo, quantidade, time_spent, ordem);

    }else if(tipo ==4){
        //shell sort
        clock_t begin = clock();
        shell_sort(vet, quantidade);
        clock_t end = clock();
        time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
        abrir_arq_tempo(tipo, quantidade, time_spent, ordem);
    }


    abrir_arq_saida(tipo, quantidade, vet, ordem);

}




void insertion_sort(int vet[], int quantidade){
    int j, x;
    for (int i=1; i<= quantidade -1; i++){
        x = vet[i];
        j=i-1;

        while (j >= 0 && x < vet[j]){
            vet[j+1] = vet[j];
            j--;
        }
    vet[j+1] = x;
    }
}

void selection_sort(int vet[], int quantidade){
    int i, j, mi, aux;
    for(i = 0; i < quantidade-1; i++){
        mi = i;
        for (j = i+1; j < quantidade; j++) {
            if(vet[j] < vet[mi])
                mi = j;
        }
        if (vet[i] != vet[mi]) {
            aux = vet[i];
            vet[i] = vet[mi];
            vet[mi] = aux;
        }
    }

}


void bubble_sort(int vet[], int quantidade){
    int i, fim, aux;
    for (fim = quantidade-1; fim > 0; --fim) {
        for (i = 0; i < fim; ++i)  {
            if (vet[i] > vet[i+1]) {
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = aux;
            }
        }
    }
}

void shell_sort(int vet[], int quantidade){
 int i , j , value;
    int gap = 1;

    do{
        gap = 3*gap+1;
    }
    while(gap < quantidade);

    do{
        gap /= 3;
        for(i = gap; i < quantidade; i++) {
            value = vet[i];
            j = i - gap;

            while (j >= 0 && value < vet[j]) {
                vet[j + gap] = vet[j];
                j -= gap;
            }
            vet[j + gap] = value;
        }
    }while(gap > 1);

}


void abrir_arq_saida(int tipo, int quantidade, int vet[], int ordem){
    FILE *ptrArqc;
    switch (tipo){
        case 1: //arquivos de saida insertion sort
            if(ordem== 1){//crescente
                if(quantidade == 10)
                    ptrArqc = fopen("insertion_sort/saida/saida_cresc/10", "w");
                else if (quantidade == 100)
                        ptrArqc = fopen("insertion_sort/saida/saida_cresc/100", "w");
                else if (quantidade ==1000)
                        ptrArqc = fopen("insertion_sort/saida/saida_cresc/1000", "w");
                else if (quantidade == 10000)
                        ptrArqc = fopen("insertion_sort/saida/saida_cresc/10000", "w");
                else if (quantidade == 100000)
                        ptrArqc = fopen("insertion_sort/saida/saida_cresc/100000", "w");
                else if (quantidade == 1000000)
                        ptrArqc = fopen("insertion_sort/saida/saida_cresc/1000000", "w");
        }else if (ordem == 2){
            //decrescente
                if(quantidade == 10)
                    ptrArqc = fopen("insertion_sort/saida/saida_decresc/10", "w");
                else if (quantidade == 100)
                        ptrArqc = fopen("insertion_sort/saida/saida_decresc/100", "w");
                else if (quantidade ==1000)
                        ptrArqc = fopen("insertion_sort/saida/saida_decresc/1000", "w");
                else if (quantidade == 10000)
                        ptrArqc = fopen("insertion_sort/saida/saida_decresc/10000", "w");
                else if (quantidade == 100000)
                        ptrArqc = fopen("insertion_sort/saida/saida_decresc/100000", "w");
                else if (quantidade == 1000000)
                        ptrArqc = fopen("insertion_sort/saida/saida_decresc/1000000", "w");

        }else if( ordem == 3){
            //random
                if(quantidade == 10)
                    ptrArqc = fopen("insertion_sort/saida/saida_random/10", "w");
                else if (quantidade == 100)
                        ptrArqc = fopen("insertion_sort/saida/saida_random/100", "w");
                else if (quantidade ==1000)
                        ptrArqc = fopen("insertion_sort/saida/saida_random/1000", "w");
                else if (quantidade == 10000)
                        ptrArqc = fopen("insertion_sort/saida/saida_random/10000", "w");
                else if (quantidade == 100000)
                        ptrArqc = fopen("insertion_sort/saida/saida_random/100000", "w");
                else if (quantidade == 1000000)
                        ptrArqc = fopen("insertion_sort/saida/saida_random/1000000", "w");
             }
             break;
        case 2:
        //arquivos de saida selection sort
        //crescente
            if(ordem== 1){
                if(quantidade == 10)
                    ptrArqc = fopen("selection_sort/saida/saida_cresc/10", "w");
                else if (quantidade == 100)
                        ptrArqc = fopen("selection_sort/saida/saida_cresc/100", "w");
                else if (quantidade ==1000)
                        ptrArqc = fopen("selection_sort/saida/saida_cresc/1000", "w");
                else if (quantidade == 10000)
                        ptrArqc = fopen("selection_sort/saida/saida_cresc/10000", "w");
                else if (quantidade == 100000)
                        ptrArqc = fopen("selection_sort/saida/saida_cresc/100000", "w");
                else if (quantidade == 1000000)
                        ptrArqc = fopen("selection_sort/saida/saida_cresc/1000000", "w");
        }else if (ordem == 2){
            //decrescente
                if(quantidade == 10)
                    ptrArqc = fopen("selection_sort/saida/saida_decresc/10", "w");
                else if (quantidade == 100)
                        ptrArqc = fopen("selection_sort/saida/saida_decresc/100", "w");
                else if (quantidade ==1000)
                        ptrArqc = fopen("selection_sort/saida/saida_decresc/1000", "w");
                else if (quantidade == 10000)
                        ptrArqc = fopen("selection_sort/saida/saida_decresc/10000", "w");
                else if (quantidade == 100000)
                        ptrArqc = fopen("selection_sort/saida/saida_decresc/100000", "w");
                else if (quantidade == 1000000)
                        ptrArqc = fopen("selection_sort/saida/saida_decresc/1000000", "w");

        }else if( ordem == 3){
            //random
                if(quantidade == 10)
                    ptrArqc = fopen("selection_sort/saida/saida_random/10", "w");
                else if (quantidade == 100)
                        ptrArqc = fopen("selection_sort/saida/saida_random/100", "w");
                else if (quantidade ==1000)
                        ptrArqc = fopen("selection_sort/saida/saida_random/1000", "w");
                else if (quantidade == 10000)
                        ptrArqc = fopen("selection_sort/saida/saida_random/10000", "w");
                else if (quantidade == 100000)
                        ptrArqc = fopen("selection_sort/saida/saida_random/100000", "w");
                else if (quantidade == 1000000)
                        ptrArqc = fopen("selection_sort/saida/saida_random/1000000", "w");
             }

            break;
        case 3:
            //Bubble Sort
            if(ordem== 1){
                if(quantidade == 10)
                    ptrArqc = fopen("bubble_sort/saida/saida_cresc/10", "w");
                else if (quantidade == 100)
                        ptrArqc = fopen("bubble_sort/saida/saida_cresc/100", "w");
                else if (quantidade ==1000)
                        ptrArqc = fopen("bubble_sort/saida/saida_cresc/1000", "w");
                else if (quantidade == 10000)
                        ptrArqc = fopen("bubble_sort/saida/saida_cresc/10000", "w");
                else if (quantidade == 100000)
                        ptrArqc = fopen("bubble_sort/saida/saida_cresc/100000", "w");
                else if (quantidade == 1000000)
                        ptrArqc = fopen("bubble_sort/saida/saida_cresc/1000000", "w");
        }else if (ordem == 2){
            //decrescente
                if(quantidade == 10)
                    ptrArqc = fopen("bubble_sort/saida/saida_decresc/10", "w");
                else if (quantidade == 100)
                        ptrArqc = fopen("bubble_sort/saida/saida_decresc/100", "w");
                else if (quantidade ==1000)
                        ptrArqc = fopen("bubble_sort/saida/saida_decresc/1000", "w");
                else if (quantidade == 10000)
                        ptrArqc = fopen("bubble_sort/saida/saida_decresc/10000", "w");
                else if (quantidade == 100000)
                        ptrArqc = fopen("bubble_sort/saida/saida_decresc/100000", "w");
                else if (quantidade == 1000000)
                        ptrArqc = fopen("bubble_sort/saida/saida_decresc/1000000", "w");

        }else if( ordem == 3){
            //random
                if(quantidade == 10)
                    ptrArqc = fopen("bubble_sort/saida/saida_random/10", "w");
                else if (quantidade == 100)
                        ptrArqc = fopen("bubble_sort/saida/saida_random/100", "w");
                else if (quantidade ==1000)
                        ptrArqc = fopen("bubble_sort/saida/saida_random/1000", "w");
                else if (quantidade == 10000)
                        ptrArqc = fopen("bubble_sort/saida/saida_random/10000", "w");
                else if (quantidade == 100000)
                        ptrArqc = fopen("bubble_sort/saida/saida_random/100000", "w");
                else if (quantidade == 1000000)
                        ptrArqc = fopen("bubble_sort/saida/saida_random/1000000", "w");
             }
            break;
        case 4:
            //Shell Sort
            if(ordem== 1){
                if(quantidade == 10)
                    ptrArqc = fopen("shell_sort/saida/saida_cresc/10", "w");
                else if (quantidade == 100)
                        ptrArqc = fopen("shell_sort/saida/saida_cresc/100", "w");
                else if (quantidade ==1000)
                        ptrArqc = fopen("shell_sort/saida/saida_cresc/1000", "w");
                else if (quantidade == 10000)
                        ptrArqc = fopen("shell_sort/saida/saida_cresc/10000", "w");
                else if (quantidade == 100000)
                        ptrArqc = fopen("shell_sort/saida/saida_cresc/100000", "w");
                else if (quantidade == 1000000)
                        ptrArqc = fopen("shell_sort/saida/saida_cresc/1000000", "w");
        }else if (ordem == 2){
            //decrescente
                if(quantidade == 10)
                    ptrArqc = fopen("shell_sort/saida/saida_decresc/10", "w");
                else if (quantidade == 100)
                        ptrArqc = fopen("shell_sort/saida/saida_decresc/100", "w");
                else if (quantidade ==1000)
                        ptrArqc = fopen("shell_sort/saida/saida_decresc/1000", "w");
                else if (quantidade == 10000)
                        ptrArqc = fopen("shell_sort/saida/saida_decresc/10000", "w");
                else if (quantidade == 100000)
                        ptrArqc = fopen("shell_sort/saida/saida_decresc/100000", "w");
                else if (quantidade == 1000000)
                        ptrArqc = fopen("shell_sort/saida/saida_decresc/1000000", "w");

        }else if( ordem == 3){
            //random
                if(quantidade == 10)
                    ptrArqc = fopen("shell_sort/saida/saida_random/10", "w");
                else if (quantidade == 100)
                        ptrArqc = fopen("shell_sort/saida/saida_random/100", "w");
                else if (quantidade ==1000)
                        ptrArqc = fopen("shell_sort/saida/saida_random/1000", "w");
                else if (quantidade == 10000)
                        ptrArqc = fopen("shell_sort/saida/saida_random/10000", "w");
                else if (quantidade == 100000)
                        ptrArqc = fopen("shell_sort/saida/saida_random/100000", "w");
                else if (quantidade == 1000000)
                        ptrArqc = fopen("shell_sort/saida/saida_random/1000000", "w");
             }
            break;
    }


    if(ptrArqc == NULL){
        printf("Erro na abertura do arquivo de saida!");
        return 0;
    }
    fprintf(ptrArqc, "%d", quantidade);
    fprintf(ptrArqc, "%s", "\n");
    for(int i = 0; i < quantidade ; i++){
        fprintf(ptrArqc, "%d", vet[i]);
        fprintf(ptrArqc, "%s", "\n");
    }
    fclose(ptrArqc);


}

void abrir_arq_tempo(int tipo, int quantidade, double time_spent, int ordem){
    FILE *ptrArqc;
    switch (tipo){
        case 1:
        //arquivos de tempo insertion sort
            if(ordem== 1){
                if(quantidade == 10)
                    ptrArqc = fopen("insertion_sort/tempo/tempo_cresc/10", "w");
                else if (quantidade == 100)
                        ptrArqc = fopen("insertion_sort/tempo/tempo_cresc/100", "w");
                else if (quantidade ==1000)
                        ptrArqc = fopen("insertion_sort/tempo/tempo_cresc/1000", "w");
                else if (quantidade == 10000)
                        ptrArqc = fopen("insertion_sort/tempo/tempo_cresc/10000", "w");
                else if (quantidade == 100000)
                        ptrArqc = fopen("insertion_sort/tempo/tempo_cresc/100000", "w");
                else if (quantidade == 1000000)
                        ptrArqc = fopen("insertion_sort/tempo/tempo_cresc/1000000", "w");
            }else if (ordem == 2){
                    if(quantidade == 10)
                        ptrArqc = fopen("insertion_sort/tempo/tempo_decresc/10", "w");
                    else if (quantidade == 100)
                            ptrArqc = fopen("insertion_sort/tempo/tempo_decresc/100", "w");
                    else if (quantidade ==1000)
                            ptrArqc = fopen("insertion_sort/tempo/tempo_decresc/1000", "w");
                    else if (quantidade == 10000)
                            ptrArqc = fopen("insertion_sort/tempo/tempo_decresc/10000", "w");
                    else if (quantidade == 100000)
                            ptrArqc = fopen("insertion_sort/tempo/tempo_decresc/100000", "w");
                    else if (quantidade == 1000000)
                            ptrArqc = fopen("insertion_sort/tempo/tempo_decresc/1000000", "w");

            }else if( ordem == 3){
                    if(quantidade == 10)
                        ptrArqc = fopen("insertion_sort/tempo/tempo_random/10", "w");
                    else if (quantidade == 100)
                            ptrArqc = fopen("insertion_sort/tempo/tempo_random/100", "w");
                    else if (quantidade ==1000)
                            ptrArqc = fopen("insertion_sort/tempo/tempo_random/1000", "w");
                    else if (quantidade == 10000)
                            ptrArqc = fopen("insertion_sort/tempo/tempo_random/10000", "w");
                    else if (quantidade == 100000)
                            ptrArqc = fopen("insertion_sort/tempo/tempo_random/100000", "w");
                    else if (quantidade == 1000000)
                            ptrArqc = fopen("insertion_sort/tempo/tempo_random/1000000", "w");
            }
            break;
        case 2 :
            //arquivos de tempo selection sort
            if(ordem== 1){
                if(quantidade == 10)
                    ptrArqc = fopen("selection_sort/tempo/tempo_cresc/10", "w");
                else if (quantidade == 100)
                        ptrArqc = fopen("selection_sort/tempo/tempo_cresc/100", "w");
                else if (quantidade ==1000)
                        ptrArqc = fopen("selection_sort/tempo/tempo_cresc/1000", "w");
                else if (quantidade == 10000)
                        ptrArqc = fopen("selection_sort/tempo/tempo_cresc/10000", "w");
                else if (quantidade == 100000)
                        ptrArqc = fopen("selection_sort/tempo/tempo_cresc/100000", "w");
                else if (quantidade == 1000000)
                        ptrArqc = fopen("selection_sort/tempo/tempo_cresc/1000000", "w");
            }else if (ordem == 2){
                    if(quantidade == 10)
                        ptrArqc = fopen("selection_sort/tempo/tempo_decresc/10", "w");
                    else if (quantidade == 100)
                            ptrArqc = fopen("selection_sort/tempo/tempo_decresc/100", "w");
                    else if (quantidade ==1000)
                            ptrArqc = fopen("selection_sort/tempo/tempo_decresc/1000", "w");
                    else if (quantidade == 10000)
                            ptrArqc = fopen("selection_sort/tempo/tempo_decresc/10000", "w");
                    else if (quantidade == 100000)
                            ptrArqc = fopen("selection_sort/tempo/tempo_decresc/100000", "w");
                    else if (quantidade == 1000000)
                            ptrArqc = fopen("selection_sort/tempo/tempo_decresc/1000000", "w");

            }else if( ordem == 3){
                    if(quantidade == 10)
                        ptrArqc = fopen("selection_sort/tempo/tempo_random/10", "w");
                    else if (quantidade == 100)
                            ptrArqc = fopen("selection_sort/tempo/tempo_random/100", "w");
                    else if (quantidade ==1000)
                            ptrArqc = fopen("selection_sort/tempo/tempo_random/1000", "w");
                    else if (quantidade == 10000)
                            ptrArqc = fopen("selection_sort/tempo/tempo_random/10000", "w");
                    else if (quantidade == 100000)
                            ptrArqc = fopen("selection_sort/tempo/tempo_random/100000", "w");
                    else if (quantidade == 1000000)
                            ptrArqc = fopen("selection_sort/tempo/tempo_random/1000000", "w");
            }

            break;
        case 3:
            //Bubble Sort
            if(ordem== 1){
                if(quantidade == 10)
                    ptrArqc = fopen("bubble_sort/tempo/tempo_cresc/10", "w");
                else if (quantidade == 100)
                        ptrArqc = fopen("bubble_sort/tempo/tempo_cresc/100", "w");
                else if (quantidade ==1000)
                        ptrArqc = fopen("bubble_sort/tempo/tempo_cresc/1000", "w");
                else if (quantidade == 10000)
                        ptrArqc = fopen("bubble_sort/tempo/tempo_cresc/10000", "w");
                else if (quantidade == 100000)
                        ptrArqc = fopen("bubble_sort/tempo/tempo_cresc/100000", "w");
                else if (quantidade == 1000000)
                        ptrArqc = fopen("bubble_sort/tempo/tempo_cresc/1000000", "w");
            }else if (ordem == 2){
                    if(quantidade == 10)
                        ptrArqc = fopen("bubble_sort/tempo/tempo_decresc/10", "w");
                    else if (quantidade == 100)
                            ptrArqc = fopen("bubble_sort/tempo/tempo_decresc/100", "w");
                    else if (quantidade ==1000)
                            ptrArqc = fopen("bubble_sort/tempo/tempo_decresc/1000", "w");
                    else if (quantidade == 10000)
                            ptrArqc = fopen("bubble_sort/tempo/tempo_decresc/10000", "w");
                    else if (quantidade == 100000)
                            ptrArqc = fopen("bubble_sort/tempo/tempo_decresc/100000", "w");
                    else if (quantidade == 1000000)
                            ptrArqc = fopen("bubble_sort/tempo/tempo_decresc/1000000", "w");

            }else if( ordem == 3){
                    if(quantidade == 10)
                        ptrArqc = fopen("bubble_sort/tempo/tempo_random/10", "w");
                    else if (quantidade == 100)
                            ptrArqc = fopen("bubble_sort/tempo/tempo_random/100", "w");
                    else if (quantidade ==1000)
                            ptrArqc = fopen("bubble_sort/tempo/tempo_random/1000", "w");
                    else if (quantidade == 10000)
                            ptrArqc = fopen("bubble_sort/tempo/tempo_random/10000", "w");
                    else if (quantidade == 100000)
                            ptrArqc = fopen("bubble_sort/tempo/tempo_random/100000", "w");
                    else if (quantidade == 1000000)
                            ptrArqc = fopen("bubble_sort/tempo/tempo_random/1000000", "w");
            }


            break;
        case 4:
            //Shell Sort
            if(ordem== 1){
                if(quantidade == 10)
                    ptrArqc = fopen("shell_sort/tempo/tempo_cresc/10", "w");
                else if (quantidade == 100)
                        ptrArqc = fopen("shell_sort/tempo/tempo_cresc/100", "w");
                else if (quantidade ==1000)
                        ptrArqc = fopen("shell_sort/tempo/tempo_cresc/1000", "w");
                else if (quantidade == 10000)
                        ptrArqc = fopen("shell_sort/tempo/tempo_cresc/10000", "w");
                else if (quantidade == 100000)
                        ptrArqc = fopen("shell_sort/tempo/tempo_cresc/100000", "w");
                else if (quantidade == 1000000)
                        ptrArqc = fopen("shell_sort/tempo/tempo_cresc/1000000", "w");
            }else if (ordem == 2){
                    if(quantidade == 10)
                        ptrArqc = fopen("shell_sort/tempo/tempo_decresc/10", "w");
                    else if (quantidade == 100)
                            ptrArqc = fopen("shell_sort/tempo/tempo_decresc/100", "w");
                    else if (quantidade ==1000)
                            ptrArqc = fopen("shell_sort/tempo/tempo_decresc/1000", "w");
                    else if (quantidade == 10000)
                            ptrArqc = fopen("shell_sort/tempo/tempo_decresc/10000", "w");
                    else if (quantidade == 100000)
                            ptrArqc = fopen("shell_sort/tempo/tempo_decresc/100000", "w");
                    else if (quantidade == 1000000)
                            ptrArqc = fopen("shell_sort/tempo/tempo_decresc/1000000", "w");

            }else if( ordem == 3){
                    if(quantidade == 10)
                        ptrArqc = fopen("shell_sort/tempo/tempo_random/10", "w");
                    else if (quantidade == 100)
                            ptrArqc = fopen("shell_sort/tempo/tempo_random/100", "w");
                    else if (quantidade ==1000)
                            ptrArqc = fopen("shell_sort/tempo/tempo_random/1000", "w");
                    else if (quantidade == 10000)
                            ptrArqc = fopen("shell_sort/tempo/tempo_random/10000", "w");
                    else if (quantidade == 100000)
                            ptrArqc = fopen("shell_sort/tempo/tempo_random/100000", "w");
                    else if (quantidade == 1000000)
                            ptrArqc = fopen("shell_sort/tempo/tempo_random/1000000", "w");
            }

    }
    if(ptrArqc == NULL){
        printf("Erro na abertura do arquivo de tempo!");
        return 0;
    }
    fprintf(ptrArqc, "%.5f", time_spent);
    fclose(ptrArqc);
}

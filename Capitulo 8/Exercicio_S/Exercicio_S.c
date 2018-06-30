
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int vetorA[5][6];
    int vetorB[5][6];
    int vetorC[5][6];
    int l, c;
    bool validador;

    for(l = 0; l < 5; l++){
        for(c = 0; c < 6; c++){
            validador = false;
            while(validador == false){
                printf("Informe o valor linha %d coluna %d vetor A: ", l + 1, c + 1);
                scanf("%d", &vetorA[l][c]);
                if(vetorA[l][c] % 2 == 0){
                    validador = true;
                }
                else{
                    printf("O valor a ser digitado na matriz A deve ser par. \n");
                }
            }
        }
    }
    for(l = 0; l < 5; l++){
        for(c = 0; c < 6; c++){
            validador = false;
            while(validador == false){
                printf("Informe o valor linha %d coluna %d vetor B: ", l + 1, c + 1);
                scanf("%d", &vetorB[l][c]);
                if(vetorB[l][c] % 2 == 1){
                    validador = true;
                }
                else{
                    printf("O valor a ser digitado na matriz B deve ser ímpar. \n");
                }
            }
        }
    }
    for(l = 0; l < 5; l++){
        for(c = 0; c < 6; c++){
            vetorC[l][c] = vetorA[l][c] + vetorB[l][c];
        }
    }

    printf("\n\tMatriz A\t\n");
    for(l = 0; l < 5; l++){
        for(c = 0; c < 6; c++){
            printf("%d\t", vetorA[l][c]);
        }
        printf("\n");
    }
    printf("\n\tMatriz B\t\n");
    for(l = 0; l < 5; l++){
        for(c = 0; c < 6; c++){
            printf("%d\t", vetorB[l][c]);
        }
        printf("\n");
    }
    printf("\n\tMatriz C\t\n");
    for(l = 0; l < 5; l++){
        for(c = 0; c < 6; c++){
            printf("%d\t", vetorC[l][c]);
        }
        printf("\n");
    }
    system("Pause");
}

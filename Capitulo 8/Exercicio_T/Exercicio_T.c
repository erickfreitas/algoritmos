
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int vetorA[4][5];
    int vetorB[4][5];
    int vetorC[4][5];
    int l, c;
    bool validador;

    for(l = 0; l < 4; l++){
        for(c = 0; c < 5; c++){
            validador = false;
            while(validador == false){
                printf("Informe o valor linha %d coluna %d vetor A: ", l + 1, c + 1);
                scanf("%d", &vetorA[l][c]);
                if(vetorA[l][c] % 3 == 0 && vetorA[l][c] % 4 == 0){
                    validador = true;
                }
                else{
                    printf("O valor a ser digitado na matriz A deve ser divisivel por 3 e por 4. \n");
                }
            }
        }
    }
    for(l = 0; l < 4; l++){
        for(c = 0; c < 5; c++){
            validador = false;
            while(validador == false){
                printf("Informe o valor linha %d coluna %d vetor B: ", l + 1, c + 1);
                scanf("%d", &vetorB[l][c]);
                if(vetorB[l][c] % 5 == 0 && vetorB[l][c] % 6 == 0){
                    validador = true;
                }
                else{
                    printf("O valor a ser digitado na matriz B deve ser divisivel por 5 e por 6. \n");
                }
            }
        }
    }
    for(l = 0; l < 4; l++){
        for(c = 0; c < 5; c++){
            vetorC[l][c] = vetorB[l][c] - vetorA[l][c];
        }
    }

    printf("\n\tMatriz A\t\n");
    for(l = 0; l < 4; l++){
        for(c = 0; c < 5; c++){
            printf("%d\t", vetorA[l][c]);
        }
        printf("\n");
    }
    printf("\n\tMatriz B\t\n");
    for(l = 0; l < 4; l++){
        for(c = 0; c < 5; c++){
            printf("%d\t", vetorB[l][c]);
        }
        printf("\n");
    }
    printf("\n\tMatriz C\t\n");
    for(l = 0; l < 4; l++){
        for(c = 0; c < 5; c++){
            printf("%d\t", vetorC[l][c]);
        }
        printf("\n");
    }
    system("Pause");
}

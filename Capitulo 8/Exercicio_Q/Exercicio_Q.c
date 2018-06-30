
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int vetorA[4][5];
    int vetorB[4];
    int vetorC[5];
    int l, c;

    for(l = 0; l < 4; l++){
        for(c = 0; c < 5; c++){
            printf("Informe o valor linha %d coluna %d vetor A: ", l + 1, c + 1);
            scanf("%d", &vetorA[l][c]);
        }
    }
    for(l = 0; l < 4; l++){
        vetorB[l] = 0;
        for(c = 0; c < 5; c++){
            vetorB[l]+= vetorA[l][c];
        }
    }
    for(c = 0; c < 5; c++){
        vetorC[c] = 0;
        for(l = 0; l < 4; l++){
            vetorC[c]+= vetorA[l][c];
        }
    }

    printf("\tMatriz A\t\n");
    for(l = 0; l < 4; l++){
        for(c = 0; c < 5; c++){
            printf("%d\t", vetorA[l][c]);
        }
        printf("\n");
    }
    printf("\tMatriz B\t\n");
    for(l = 0; l < 4; l++){
        printf("%d \n", vetorB[l]);
    }
    printf("\tMatriz C\t\n");
    for(l = 0; l < 5; l++){
        printf("%d \t", vetorC[l]);
    }
    system("Pause");
}

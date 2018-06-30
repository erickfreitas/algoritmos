
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int vetorA[8][6];
    int vetorB[8];
    int l, c;
    int soma = 0;

    for(l = 0; l < 8; l++){
        for(c = 0; c < 6; c++){
            printf("Informe o valor linha %d coluna %d vetor A: ", l + 1, c + 1);
            scanf("%d", &vetorA[l][c]);
        }
    }
    for(l = 0; l < 8; l++){
        vetorB[l] = 0;
        for(c = 0; c < 6; c++){
            vetorB[l] = vetorB[l] + vetorA[l][c];
        }
    }
    printf("\tMatriz A\t\n");
    for(l = 0; l < 8; l++){
        for(c = 0; c < 6; c++){
            printf("%d\t", vetorA[l][c]);
        }
        printf("\n");
    }

    printf("\tMatriz B\t\n");
    for(l = 0; l < 8; l++){
        printf("\t%d\t\n", vetorB[l]);
    }
    system("Pause");
}

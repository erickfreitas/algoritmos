
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int vetorA[5][5];
    int vetorB[5][5];
    int l,c;

    for(l = 0; l < 5; l++){
        for(c = 0; c < 5; c++){
            printf("Informe o valor linha %d coluna %d vetor A: ", l + 1, c + 1);
            scanf("%d", &vetorA[l][c]);
        }
    }
    for(l = 0; l < 5; l++){
        for(c = 0; c < 5; c++){
            if(l == c){
                vetorB[l][c] = vetorA[l][c] * 3;
            }
            else{
                vetorB[l][c] = vetorA[l][c] * 2;
            }
        }
    }
    printf("\tMatriz A\t\n");
    for(l = 0; l < 5; l++){
        printf("%d\t%d\t%d\t%d\t%d\n", vetorA[l][0], vetorA[l][1], vetorA[l][2], vetorA[l][3], vetorA[l][4]);
    }
    printf("\n\tMatriz B\t\n");
    for(l = 0; l < 5; l++){
        printf("%d\t%d\t%d\t%d\t%d\n", vetorB[l][0], vetorB[l][1], vetorB[l][2], vetorB[l][3], vetorB[l][4]);
    }
    system("Pause");
}

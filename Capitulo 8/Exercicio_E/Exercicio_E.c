
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int vetorA[4];
    int vetorB[4];
    int vetorC[4][2];
    int l,c;

    for(l = 0; l < 4; l++){
            printf("Informe o %dº valor vetor A: ", l + 1);
            scanf("%d", &vetorA[l]);
    }
    for(l = 0; l < 4; l++){
            printf("Informe o %dº valor vetor B: ", l + 1);
            scanf("%d", &vetorB[l]);
    }
    for(l = 0; l < 4; l++){
        for(c = 0; c < 2; c++){
            if(c == 0){
                vetorC[l][c] = vetorA[l] * 2;
            }
            else{
                vetorC[l][c] = vetorB[l] - 5;
            }
        }
    }
    printf("Coluna:\t1\t2\n");
    for(l = 0; l < 4; l++){
        printf("Linha %d:%d\t%d\n",l + 1, vetorC[l][0], vetorC[l][1]);
    }
    system("Pause");
}

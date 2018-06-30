
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int vetorA[7];
    int vetorB[7];
    int vetorC[7][2];
    int l,c;

    for(c = 0; c < 7; c++){
        printf("Informe o %dº valor do vetor A. \n", c + 1);
        scanf("%d", &vetorA[c]);
    }
    for(c = 0; c < 7; c++){
        printf("Informe o %dº valor do vetor B. \n", c + 1);
        scanf("%d", &vetorB[c]);
    }

    for(l = 0; l < 7; l++){
        for(c = 0; c < 2; c++){
            if(c == 0){
                vetorC[l][c] = vetorA[l];
            }
            else{
                vetorC[l][c] =  + vetorB[l];
            }
            printf("Vetor C linha %d coluna %d: %d. \n", l + 1, c + 1, vetorC[l][c]);
        }
    }
    system("Pause");
}


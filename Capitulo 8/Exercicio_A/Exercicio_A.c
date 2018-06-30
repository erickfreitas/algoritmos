
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int vetorA[5][3];
    int vetorB[5][3];
    int vetorC[5][3];
    int l,c;

    for(l = 0; l < 5; l++){
        for(c = 0; c < 3; c++){
            printf("Informe o valor da linha %d coluna %d do vetor A. \n", l + 1, c + 1);
            scanf("%d", &vetorA[l][c]);
        }
    }
    for(l = 0; l < 5; l++){
        for(c = 0; c < 3; c++){
            printf("Informe o valor da linha %d coluna %d do vetor B. \n", l + 1, c + 1);
            scanf("%d", &vetorB[l][c]);
        }
    }
    for(l = 0; l < 5; l++){
        for(c = 0; c < 3; c++){
            vetorC[l][c] = vetorA[l][c] + vetorB[l][c];
            printf("Vetor C linha %d coluna %d: %d. \n", l + 1, c + 1, vetorC[l][c]);
        }
    }
    system("Pause");
}


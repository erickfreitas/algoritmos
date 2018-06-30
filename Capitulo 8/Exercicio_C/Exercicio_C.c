
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int vetor[4][5];
    int l,c;

    for(l = 0; l < 4; l++){
        for(c = 0; c < 5; c++){
            printf("Informe o valor da linha %d coluna %d do vetor: ", l + 1, c + 1);
            scanf("%d", &vetor[l][c]);
        }
    }
    for(l = 0; l < 4; l++){
        for(c = 0; c < 5; c++){
            printf("Linha %d coluna %d do vetor: %d \n", l + 1, c + 1, vetor[l][c]);
        }
    }
    system("Pause");
}


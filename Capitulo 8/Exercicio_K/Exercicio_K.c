
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int vetorA[4][4];
    int l, c;
    int soma = 0;

    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++){
            printf("Informe o valor linha %d coluna %d vetor A: ", l + 1, c + 1);
            scanf("%d", &vetorA[l][c]);
            if(l == c){
                soma = soma + vetorA[l][c];
            }
        }
    }
    printf("\tMatriz A\t\n");
    for(l = 0; l < 4; l++){
        printf("%d\t%d\t%d\t%d\t\n", vetorA[l][0], vetorA[l][1], vetorA[l][2], vetorA[l][3]);
    }
    printf("Soma da Diagonal Principal: %d \n", soma);
    system("Pause");
}

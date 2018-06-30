
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int vetorA[7][7];
    int l, c;
    int soma = 0;

    for(l = 0; l < 7; l++){
        for(c = 0; c < 7; c++){
            printf("Informe o valor linha %d coluna %d vetor A: ", l + 1, c + 1);
            scanf("%d", &vetorA[l][c]);
            if(vetorA[l][c] % 2 == 0){
                soma = soma + vetorA[l][c];
            }
        }
    }
    printf("\tMatriz A\t\n");
    for(l = 0; l < 7; l++){
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t\n", vetorA[l][0], vetorA[l][1], vetorA[l][2], vetorA[l][3], vetorA[l][4], vetorA[l][5], vetorA[l][6]);
    }
    printf("Soma dos números pares da matriz A: %d \n", soma);
    system("Pause");
}

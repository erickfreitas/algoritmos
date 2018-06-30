
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    float vetorA[15][15];
    int l, c;
    float soma = 0;

    for(l = 0; l < 15; l++){
        for(c = 0; c < 15; c++){
            printf("Informe o valor linha %d coluna %d vetor A: ", l + 1, c + 1);
            scanf("%f", &vetorA[l][c]);
            if(l == c && l % 2 == 0){
                soma = soma + vetorA[l][c];
            }
        }
    }
    printf("Soma dos números com os índices de linha e coluna impares da Diagonal Principal: %.2f \n", soma);
    system("Pause");
}

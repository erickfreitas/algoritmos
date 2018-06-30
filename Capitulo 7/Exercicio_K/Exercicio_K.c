
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int matrizA[10];
    int matrizB[10];
    int matrizC[10];
    int c, i, troca;

    for(c = 0; c < 10; c++){
        printf("Informe o %dº valor da Matriz A. \n", c + 1);
        scanf("%d", &matrizA[c]);
    }
    for(c = 0; c < 10; c++){
        printf("Informe o %dº valor da Matriz B. \n", c + 1);
        scanf("%d", &matrizB[c]);
        matrizC[c] = (matrizA[c] * matrizA[c]) + (matrizB[c] * matrizB[c]);
    }

    for(c = 0; c < 10; c++){
         for(i = 0; i < 10; i++){
            if(matrizC[c] > matrizC[i]){
                troca = matrizC[c];
                matrizC[c] = matrizC[i];
                matrizC[i] = troca;
            }
         }
    }
    for(c = 0; c < 10; c++){
        printf("Matriz A: %d Matriz B: %d Matriz C %dº valor:%d \n", matrizA[c], matrizB[c], c + 1, matrizC[c]);
    }
    system("Pause");
}



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int matrizA[15];
    int matrizB[15];
    int matrizC[15];
    int matrizD[15];
    int c, i, troca, soma, cubo;

    for(c = 0; c < 15; c++){
        printf("Informe o %dº valor da Matriz A. \n", c + 1);
        scanf("%d", &matrizA[c]);
    }
    for(c = 0; c < 15; c++){
        printf("Informe o %dº valor da Matriz B. \n", c + 1);
        scanf("%d", &matrizB[c]);
    }
    for(c = 0; c < 15; c++){
        printf("Informe o %dº valor da Matriz C. \n", c + 1);
        scanf("%d", &matrizC[c]);
    }
    for(c = 0; c < 15; c++){
        soma = matrizA[c] + matrizB[c] + matrizC[c];
        cubo = soma * soma * soma;
        matrizD[c] = cubo;
    }

    for(c = 0; c < 15; c++){
         for(i = 0; i < 15; i++){
            if(matrizD[c] < matrizD[i]){
                troca = matrizD[c];
                matrizD[c] = matrizD[i];
                matrizD[i] = troca;
            }
         }
    }
    for(c = 0; c < 15; c++){
        printf("Matriz D %dº valor:%d \n", c + 1, matrizD[c]);
    }
    system("Pause");
}


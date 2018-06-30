#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int matrizA[12];
    int matrizB[12];
    int matrizC[12];
    int i, c, troca;

    for(i = 0; i < 12; i++){
        printf("Informe o %dº valor da matriz A. \n", i + 1);
        scanf("%d", &matrizA[i]);
    }
    for(i = 0; i < 12; i++){
        printf("Informe o %dº valor da matriz B. \n", i + 1);
        scanf("%d", &matrizB[i]);
    }

    for(i = 0; i < 12; i++){
        for(c = 0; c < 12; c++){
            if(matrizA[i] < matrizA[c]){
                troca = matrizA[i];
                matrizA[i] = matrizA[c];
                matrizA[c] = troca;
            }
        }
    }

    for(i = 0; i < 12; i++){
        for(c = 0; c < 12; c++){
            if(matrizB[i] < matrizB[c]){
                troca = matrizB[i];
                matrizB[i] = matrizB[c];
                matrizB[c] = troca;
            }
        }
    }

    for(i = 0; i < 12; i++){
        matrizC[i] = matrizA[i] + matrizB[i];
    }
    for(i = 0; i < 12; i++){
        for(c = 0; c < 12; c++){
            if(matrizC[i] > matrizC[c]){
                troca = matrizC[i];
                matrizC[i] = matrizC[c];
                matrizC[c] = troca;
            }
        }
    }
    for(i = 0; i < 12; i++){
        printf("Matriz A: %d Matriz B: %d Matriz C: %d \n", matrizA[i], matrizB[i], matrizC[i]);
    }
    system("Pause");
}


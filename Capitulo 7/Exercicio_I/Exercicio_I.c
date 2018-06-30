
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    float matrizA[4];
    float matrizB[4];
    int k, g;
    float troca;

    for(k = 0; k < 4; k++){
        printf("Informe o %dº valor negativo da matriz A. \n", k + 1);
        scanf("%f", &matrizA[k]);
        matrizB[k] = matrizA[k] / 2;
    }

    for(k = 0; k < 4; k++){
        for(g = 0; g < 4; g++){
            if(matrizA[k] > matrizA[g]){
                troca = matrizA[k];
                matrizA[k] = matrizA[g];
                matrizA[g] = troca;
            }
        }
    }

    for(k = 0; k < 4; k++){
        for(g = 0; g < 4; g++){
            if(matrizB[k] > matrizB[g]){
                troca = matrizB[k];
                matrizB[k] = matrizB[g];
                matrizB[g] = troca;
            }
        }
    }

    for(k = 0; k < 4; k++){
        printf("Matriz A:%.2f  Matriz B:%.2f \n", matrizA[k], matrizB[k]);
    }
    system("Pause");
}


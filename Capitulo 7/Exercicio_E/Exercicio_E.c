#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int matrizA[20];
    int matrizB[30];
    int matrizC[50];
    int i, c, troca;

    for(i = 0; i < 20; i++){
        printf("Informe o %dº valor da Matriz A: ", i + 1);
        scanf("%d", &matrizA[i]);
    }
    for(i = 0; i < 30; i++){
        printf("Informe o %dº valor da Matriz B: ", i + 1);
        scanf("%d", &matrizB[i]);
    }
    for(i = 0; i < 20; i++){
        matrizC[i] = matrizA[i];
    }
    for(i = 20; i < 50; i++){
        matrizC[i] = matrizB[i - 20];
    }
    for(i = 0; i < 50; i++){
        for(c = 0; c < 50; c++){
            if(matrizC[i] > matrizC[c]){
                troca = matrizC[i];
                matrizC[i] = matrizC[c];
                matrizC[c] = troca;
            }
        }
    }
    for(i = 0; i < 50; i++){
        printf("Matriz C %dº valor : %d \n", i + 1, matrizC[i]);
    }
    system("Pause");
}



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    char matrizA[15];
    char matrizB[15];
    int c,num;

    for(c = 0; c < 15; c++){
        printf("Informe o %dº valor da Matriz A. \n", c + 1);
        scanf(" %c", &matrizA[c]);
    }
    num = 14;
    for(c = 0; c < 15; c++){
        matrizB[num] = matrizA[c];
        num--;
    }
    for(c = 0; c < 15; c++){
        printf("matriz B %dº valor : %c \n", c + 1, matrizB[c]);
    }
    system("Pause");
}



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    float matrizA[12];
    float matrizB[12];
    float matrizC[12];
    int c, i;
    float num;
    char resp = 's';
    bool encontrou = false;

    for(c = 0; c < 12; c++){
        printf("Informe o %dº valor da Matriz A. \n", c + 1);
        scanf("%f", &matrizA[c]);
    }
    for(c = 0; c < 12; c++){
        printf("Informe o %dº valor da Matriz B. \n", c + 1);
        scanf("%f", &matrizB[c]);
    }
    for(c = 0; c < 12; c++){
        matrizC[c] = matrizA[c] * matrizB[c];
    }

    while(resp == 's'){
        printf("Informe um valor à ser pesquisado na matriz C, \n");
        scanf("%f", &num);
        encontrou = false;
        for(c = 0; c < 12; c++){
            if(matrizC[c] == num){
                printf("O número %.1f está na posição %d da matriz C. \n", num, c + 1);
                encontrou = true;
            }
        }
        if(encontrou == false){
            printf("O número %.1f não foi encontrado na matriz C. \n", num);
        }
        printf("Deseja procurar outro número na matriz C? (s/n) \n");
        scanf(" %c", &resp);
    }
    system("Pause");
}


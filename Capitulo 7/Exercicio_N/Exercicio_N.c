
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
    int c,num;
    char resp = 's';
    bool encontrou = false;

    for(c = 0; c < 15; c++){
        printf("Informe o %d� valor da Matriz A. \n", c + 1);
        scanf("%d", &matrizA[c]);
    }
    for(c = 0; c < 15; c++){
        printf("Informe o %d� valor da Matriz B. \n", c + 1);
        scanf("%d", &matrizB[c]);
    }
    for(c = 0; c < 15; c++){
        printf("Informe o %d� valor da Matriz C. \n", c + 1);
        scanf("%d", &matrizC[c]);
    }
    for(c = 0; c < 15; c++){
        matrizD[c] = matrizA[c] + matrizB[c] + matrizC[c];
    }
    //for(c = 0; c < 15; c++){
    //   printf("Matriz A: %d Matriz B: %d  Matriz C: %d  Matriz D: %d \n",matrizA[c], matrizB[c], matrizC[c], matrizD[c]);
    //}
    while(resp == 's'){
        printf("Informe um valor � ser pesquisado na matriz D, \n");
        scanf("%d", &num);
        encontrou = false;
        for(c = 0; c < 15; c++){
            if(matrizD[c] == num){
                printf("O n�mero %d est� na posi��o %d da matriz D. \n", num, c + 1);
                encontrou = true;
            }
        }
        if(encontrou == false){
            printf("O n�mero %d n�o foi encontrado na matriz D. \n", num);
        }
        printf("Deseja procurar outro n�mero na matriz D? (s/n) \n");
        scanf(" %c", &resp);
    }
    system("Pause");
}



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
        printf("Informe o %d� valor da Matriz A. \n", c + 1);
        scanf("%f", &matrizA[c]);
    }
    for(c = 0; c < 12; c++){
        printf("Informe o %d� valor da Matriz B. \n", c + 1);
        scanf("%f", &matrizB[c]);
    }
    for(c = 0; c < 12; c++){
        matrizC[c] = matrizA[c] * matrizB[c];
    }

    while(resp == 's'){
        printf("Informe um valor � ser pesquisado na matriz C, \n");
        scanf("%f", &num);
        encontrou = false;
        for(c = 0; c < 12; c++){
            if(matrizC[c] == num){
                printf("O n�mero %.1f est� na posi��o %d da matriz C. \n", num, c + 1);
                encontrou = true;
            }
        }
        if(encontrou == false){
            printf("O n�mero %.1f n�o foi encontrado na matriz C. \n", num);
        }
        printf("Deseja procurar outro n�mero na matriz C? (s/n) \n");
        scanf(" %c", &resp);
    }
    system("Pause");
}


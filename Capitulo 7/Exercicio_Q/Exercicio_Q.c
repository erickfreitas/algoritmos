
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    char matrizA[10];
    int c;
    char valor;
    char resp = 's';
    bool encontrou = false;

    for(c = 0; c < 10; c++){
        printf("Informe o %dº caracter da Matriz A. \n", c + 1);
        scanf(" %c", &matrizA[c]);
    }
    while(resp == 's'){
        printf("Informe um caracter à ser pesquisado na matriz A, \n");
        scanf(" %c", &valor);
        encontrou = false;
        for(c = 0; c < 10; c++){
            if(matrizA[c] == valor){
                printf("O caracter %c está na posição %d da matriz A. \n", valor, c + 1);
                encontrou = true;
            }
        }
        if(encontrou == false){
            printf("O caracter %c não foi encontrado na matriz A. \n", valor);
        }
        printf("Deseja procurar outro caracter na matriz A? (s/n) \n");
        scanf(" %c", &resp);
    }
    system("Pause");
}


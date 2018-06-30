
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int vetorA[10][7];
    int l, c;
    int pares = 0;
    int impares = 0;
    float percent_par = 0;
    float percent_impar = 0;

    for(l = 0; l < 10; l++){
        for(c = 0; c < 7; c++){
            printf("Informe o valor linha %d coluna %d vetor A: ", l + 1, c + 1);
            scanf("%d", &vetorA[l][c]);
            if(vetorA[l][c] % 2 == 0){
                pares ++;
            }
            else{
                impares++;
            }
        }
    }

    percent_par = (pares * 100) / 70;
    percent_impar = (impares * 100) / 70;

    printf("\tMatriz A\t\n");
    for(l = 0; l < 10; l++){
        for(c = 0; c < 7; c++){
            printf("%d\t", vetorA[l][c]);
        }
        printf("\n");
    }
    printf("Quantidade de pares:%d\n", pares);
    printf("Quantidade de impares:%d\n", impares);
    printf("Porcentagem de pares:%.2f%%\n", percent_par);
    printf("Porcentagem de impares:%.2f%%\n", percent_impar);
    system("Pause");
}

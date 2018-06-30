
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int vetorA[10];
    int vetorC[10][3];
    int l,c;

    for(l = 0; l < 10; l++){
            printf("Informe o %dº valor vetor A: ", l + 1);
            scanf("%d", &vetorA[l]);
    }
    for(l = 0; l < 10; l++){
        for(c = 0; c < 3; c++){
            if(c == 0){
                vetorC[l][c] = vetorA[l] + 5;
            }
            else if(c == 1){
                vetorC[l][c] = fatorial(vetorA[l]);
            }
            else if(c == 2){
                vetorC[l][c] = elevaQuadrado(vetorA[l]);
            }
        }
    }
    printf("Coluna:\t1\t2\t3\n");
    for(l = 0; l < 10; l++){
        printf("Linha %d:%d\t%d\t%d\n",l + 1, vetorC[l][0], vetorC[l][1], vetorC[l][2]);
    }
    system("Pause");
}
    int fatorial(int numero){
        int fat = 1;
        for(numero; numero > 1; numero--){
            fat = fat * numero;
        }
        return fat;
    }

    int elevaQuadrado(int numero){
        int result;
        result = numero * numero;
        return result;
    }


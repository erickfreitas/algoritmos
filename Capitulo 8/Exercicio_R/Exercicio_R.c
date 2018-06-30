#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int vetorA[4];
    int vetorB[4];
    int vetorC[4];
    int vetorD[4];
    int vetorE[4][4];
    int l, c;

    for(c = 0; c < 4; c++){
        printf("Informe o %dº valor da matriz A:", c + 1);
        scanf("%d", &vetorA[c]);
    }
    for(c = 0; c < 4; c++){
        printf("Informe o %dº valor da matriz B:", c + 1);
        scanf("%d", &vetorB[c]);
    }
    for(c = 0; c < 4; c++){
        printf("Informe o %dº valor da matriz C:", c + 1);
        scanf("%d", &vetorC[c]);
    }
    for(c = 0; c < 4; c++){
        printf("Informe o %dº valor da matriz D:", c + 1);
        scanf("%d", &vetorD[c]);
    }

    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++){
            if(l == 0){
                vetorE[l][c] = vetorA[c] * 2;
            }
            else if(l == 1){
                vetorE[l][c] = vetorB[c] * 3;
            }
            else if(l == 2){
                vetorE[l][c] = vetorC[c] * 4;
            }
            else if(l == 3){
                vetorE[l][c] = Fatorial(vetorD[c]);
            }
        }
    }
    ImprimeVetorUmaDimensao("Matriz A", vetorA, 4);
    ImprimeVetorUmaDimensao("Matriz B", vetorB, 4);
    ImprimeVetorUmaDimensao("Matriz C", vetorC, 4);
    ImprimeVetorUmaDimensao("Matriz D", vetorD, 4);

    printf("\n\tMatriz E\t\n");
    for(l = 0; l < 4; l++){
        for(c = 0; c < 4; c++){
            printf("%d\t", vetorE[l][c]);
        }
        printf("\n");
    }
    system("Pause");
}
int Fatorial(int valor){
    int fat = 1;
    for(valor; valor > 1; valor--){
        fat = fat * valor;
    }
    return fat;
}

void ImprimeVetorUmaDimensao(char nome[], int vetor[], int tamanho){
    printf("\n\t%s\t\n", nome);
    int c;
    for(c = 0; c < tamanho; c++){
        printf("%d\t", vetor[c]);
    }
}


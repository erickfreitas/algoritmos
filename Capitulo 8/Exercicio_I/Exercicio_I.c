
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

main(){
    setlocale(LC_ALL, "Portuguese");

    int vetorA[7][7];
    int vetorB[7][7];
    int l,c;

    for(l = 0; l < 7; l++){
        for(c = 0; c < 7; c++){
            printf("Informe o valor linha %d coluna %d vetor A: ", l + 1, c + 1);
            scanf("%d", &vetorA[l][c]);
        }
    }
    for(l = 0; l < 7; l++){
        for(c = 0; c < 7; c++){
            if(l == c && c % 2 == 0){
                vetorB[l][c] = fatorial(vetorA[l][c]);
            }
            else{
                vetorB[l][c] = somaAteNumero(vetorA[l][c]);
            }
        }
    }
    printf("\tMatriz A\t\n");
    for(l = 0; l < 7; l++){
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t\n", vetorA[l][0], vetorA[l][1], vetorA[l][2], vetorA[l][3], vetorA[l][4], vetorA[l][5], vetorA[l][6]);
    }
    printf("\n\tMatriz B\t\n");
    for(l = 0; l < 7; l++){
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t\n", vetorB[l][0], vetorB[l][1], vetorB[l][2], vetorB[l][3], vetorB[l][4], vetorB[l][5], vetorB[l][6]);
    }
    system("Pause");
}
int somaAteNumero(int numero){
    int soma = 0, i = 1;
    int valor = numero;
    while(valor > 0){
        soma = soma + valor;
        valor--;
    }
    printf("%d \n", soma);
    return soma;
}
int fatorial(int numero){
    int fat = 1;
    int i;
    for(numero; numero > 1; numero--){
        fat = fat * numero;
    }
    return fat;
}

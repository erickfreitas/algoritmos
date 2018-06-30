#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int A, B, C, D, E, maior, menor;
    printf("Informe o valor de A. \n");
    scanf("%d", &A);
    printf("Informe o valor de B. \n");
    scanf("%d", &B);
    printf("Informe o valor de C. \n");
    scanf("%d", &C);
    printf("Informe o valor de D. \n");
    scanf("%d", &D);
    printf("Informe o valor de E. \n");
    scanf("%d", &E);
    maior = A;
    menor = A;
    if(maior < B){
        maior = B;
    }
    if(maior < C){
        maior = C;
    }
    if(maior < D){
        maior = D;
    }
    if(maior < E){
        maior = E;
    }
    if(menor > B){
        menor = B;
    }
    if(menor > C){
        menor = C;
    }
    if(menor > D){
        menor = D;
    }
    if(menor > E){
        menor = E;
    }
    printf("Maior: %d \nMenor: %d \n", maior, menor);
    system("Pause");
}


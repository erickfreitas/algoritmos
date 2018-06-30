#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int A, B, C, D;
    printf("Informe o valor de A. \n");
    scanf("%d", &A);
    printf("Informe o valor de B. \n");
    scanf("%d", &B);
    printf("Informe o valor de C. \n");
    scanf("%d", &C);
    printf("Informe o valor de D. \n");
    scanf("%d", &D);
    if(A % 2 == 0 || A % 3 == 0 ){
        printf("A: %d \n", A);
    }
    if(B % 2 == 0 || B % 3 == 0 ){
        printf("B: %d \n", B);
    }
    if(C % 2 == 0 || C % 3 == 0 ){
        printf("C: %d \n", C);
    }
    if(D % 2 == 0 || D % 3 == 0 ){
        printf("D: %d \n", D);
    }
    system("Pause");
}


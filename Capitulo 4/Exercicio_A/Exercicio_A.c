#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int A, B;
    printf("Informe o valor de A. \n");
    scanf("%d", &A);
    printf("Informe o valor de B. \n");
    scanf("%d", &B);
    if(A > B){
        printf("Diferen�ao entre A e B � %d. \n", A - B);
    }
    else{
        printf("Diferen�ao entre A e B � %d. \n", B - A);
    }
    system("Pause");
}

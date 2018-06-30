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
        printf("Diferençao entre A e B é %d. \n", A - B);
    }
    else{
        printf("Diferençao entre A e B é %d. \n", B - A);
    }
    system("Pause");
}

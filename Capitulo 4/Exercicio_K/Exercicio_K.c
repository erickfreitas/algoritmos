#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int A;
    printf("Informe um valor. \n");
    scanf("%d", &A);
    if(A > 1 && A <= 9){
        printf("O valor está na faixa permitida. \n");
    }
    else{
        printf("O valor não está na faixa permitida \n");
    }
    system("Pause");
}


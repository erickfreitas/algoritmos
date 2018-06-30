#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int N;
    printf("Informe o valor de N. \n");
    scanf("%d", &N);
    if(N < 0){
        N = N * (-1);
        printf("Valor: %d. \n", N);
    }
    else{
        printf("Valor: %d. \n", N);
    }
    system("Pause");
}


#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int A;
    printf("Informe um valor. \n");
    scanf("%d", &A);
    if(A < 3){
        printf("Valor %d\n", A);
    }
    system("Pause");
}



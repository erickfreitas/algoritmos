#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int A;
    printf("Informe um valor. \n");
    scanf("%d", &A);
    if(A % 2 == 0){
        printf("O valor digitado � par. \n");
    }
    else{
        printf("O valor digitado � �mpar. \n");
    }
    system("Pause");
}


#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
main(){
    setlocale(LC_ALL, "Portuguese");
    int i, num = 1, soma;
    for(i = 0; i < 63; i++){
        num = num * 2;
        soma = soma + num;
    }
    printf("Soma:%d \n", soma);
    system("Pause");
}
// 1 2 4 8 16
// 0 1 2 3  4

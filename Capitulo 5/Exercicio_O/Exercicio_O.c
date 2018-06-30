#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int fat, num, i;
    for(i = 1; i <= 10; i = i + 2){
        fat = 1;
        num = i;
        for(num; num > 1; num--){
            fat = fat * num;
        }
        printf("O fatorial do número %d é: %d \n", i, fat);
    }
    system("pause");
}

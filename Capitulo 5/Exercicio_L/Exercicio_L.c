#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int num, i, fat, soma = 0, cont;
    cont = 1;
    while(cont <= 15){
        printf("Informe o valor do %dº número. \n", cont);
        scanf("%d", &num);
        fat = 1;
        for(num ; num > 1; num--){
            fat = fat * num;
        }
        printf("fatorial do %dº: %d \n",cont, fat);
        soma = soma + fat;
        cont++;
    }
    printf("Soma total: %d", soma);
    system("pause");
}

// 5 * 4 * 3 * 2 * 1

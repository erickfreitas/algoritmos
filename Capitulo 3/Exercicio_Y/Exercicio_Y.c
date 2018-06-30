#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Informe um numero. \n");
    scanf("%d", &num);
    printf("Sucessor: %d \nAntecessor: %d \n", num + 1, num - 1);
    system("pause");
}

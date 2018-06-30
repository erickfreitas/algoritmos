#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int media, soma = 0, i;
    for(i = 50; i <= 70; i = i + 2){
        soma = soma + i;
    }
    media = soma / 11;
    printf("Soma dos número pares entre 50 e 70 é: %d \n", soma);
    printf("Média dos número pares entre 50 e 70 é: %d \n", media);
    system("pause");
}

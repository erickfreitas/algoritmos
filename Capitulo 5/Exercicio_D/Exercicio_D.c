#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int soma = 0, c;
    for(c = 1 ; c <= 500; c++){
        if(c % 2 == 0){
            soma = soma + c;
        }
    }
    printf("A soma dos numeros pares de 1 a 500 é %d. \n", soma);
    system("pause");
}

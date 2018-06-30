#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int soma, c;
    for(c = 1 ; c <= 100; c++){
        soma = soma + c;
    }
    printf("A soma dos numeros de 1 a 100 é %d. \n", soma);
    system("pause");
}

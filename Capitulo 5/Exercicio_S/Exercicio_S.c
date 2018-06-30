#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int divisor, dividendo, contador = 0, resto;
    printf("Informe o valor do dividendo \n");
    scanf("%d", &dividendo);
    printf("Informe o valor do divisor \n");
    scanf("%d", &divisor);
    if(dividendo < divisor || dividendo <= 0 || divisor <= 0){
        printf("Valores digitados são inválidos. \n");
        return;
    }
    while(dividendo >= divisor){
        dividendo = dividendo - divisor;
        contador++;
    }
    resto = dividendo;
    printf("Resultado:%d  Resto:%d", contador, resto);
}

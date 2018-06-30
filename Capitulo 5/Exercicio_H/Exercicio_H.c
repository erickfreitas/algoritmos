#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int base, expoente, x, resultado = 1;
    printf("Informa o valor da base. \n");
    scanf("%d", &base);
    printf("Informa o valor do expoente. \n");
    scanf("%d", &expoente);
    for(x = 0; x < expoente; x++){
        resultado = resultado * base;
    }
    printf("Resultado: %d \n", resultado);

}

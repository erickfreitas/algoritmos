#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int base, expoente, resultado, x;
    printf("Informe o valor do da base. \n");
    scanf("%D", &base);
    printf("Informe o valor do do expoente. \n");
    scanf("%D", &expoente);
    resultado = 1;
    for(x = 1; x <= expoente; x++){
        resultado = resultado * base;
    }
    printf("O resultado é %d.\n", resultado);
    system("pause");
}

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int  x, c, base, valor = 1;
    base = 3;
    for(c = 0; c <= 15; c++){
        for(x = 0; x < c; x++){
            valor = valor * base;
        }
        printf("%d elevado à %d :%d \n",base, x, valor);
        valor = 1;
    }
    system("pause");
}

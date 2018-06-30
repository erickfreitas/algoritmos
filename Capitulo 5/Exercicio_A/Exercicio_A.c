#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int num, c;
    for(c = 15 ; c <= 200; c++){
        num = c * c;
        printf("Numero %d ao quadrado: %d \n", c, num);
    }
    system("Pause");
}

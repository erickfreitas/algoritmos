#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int  c;
    for(c = 1 ; c <= 200; c++){
        if(c % 4 == 0){
            printf("%d \n", c);
        }
    }
    system("pause");
}

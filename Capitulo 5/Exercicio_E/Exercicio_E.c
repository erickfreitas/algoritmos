#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int  c;
    for(c = 0 ; c <= 20; c++){
        if(c % 2 == 1){
            printf("%d \n", c);
        }
    }
    system("pause");
}

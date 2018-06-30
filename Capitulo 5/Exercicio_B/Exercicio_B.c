#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int num, c;
    printf("Informe o número que deseja ser feito a tabuada. \n");
    scanf("%d", &num);
    for(c = 1 ; c <= 10; c++){
        printf("%d x %d = %d \n", num, c, c * num);
    }
    system("pause");
}

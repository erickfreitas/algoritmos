#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    double c, f;
    printf("Informa o valor da temperatura em Celsius. \n");
    scanf("%lf", &c);
    f = (9 * c + 160) / 5;
    printf("A temperatura � de %.1lf�F. \n", f);
    system("Pause");
}

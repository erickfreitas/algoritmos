#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    double c, f;
    printf("Informa o valor da temperatura em Fahrenheit. \n");
    scanf("%lf", &f);
    c = ((f - 32) * 5) / 9;
    printf("A temperatura é de %.1lfºC. \n", c);
    system("Pause");
}

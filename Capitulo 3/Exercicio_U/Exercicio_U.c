#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float raio, volume;
    printf("Informe o valor do raio da esfera (Cm). \n");
    scanf("%f", &raio);
    volume = (4/3) * 3.14159 * (raio * raio * raio);
    printf("o volume da esfera é de %.2fCm³. \n", volume);
    system("pause");
}

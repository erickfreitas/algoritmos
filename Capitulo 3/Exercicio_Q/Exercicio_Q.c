#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    float area, raio;
    printf("Informe o valor do raio da cincunferencia. \n");
    scanf("%f", &raio);
    area = 3.1415 * (raio * raio);
    printf("A �rea da circunferencia � de %.2f. \n", area);
    system("pause");
}

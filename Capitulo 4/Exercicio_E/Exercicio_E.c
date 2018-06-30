#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int A = 0, B = 0, C = 0;
    float delta, x1, x2;
    while(A == 0 || B == 0 || C ==0){
        printf("Os valores de A,B e C devem ser de zero. \n");
        printf("Informe o valor de A. \n");
        scanf("%d", &A);
        printf("Informe o valor de B. \n");
        scanf("%d", &B);
        printf("Informe o valor de C. \n");
        scanf("%d", &C);
    }
    delta = (B * B) - 4 * A * C;
    if(delta < 0){
        printf("Delta com valor negativo %.0f, não há raiz real. \n", delta);
    }
    if(delta == 0){
        x1 = (-B + sqrt(delta)) / (2 * A);
        printf("Delta é %.0f, há uma raiz real, X1 = %.1f \n",delta,  x1);
    }
    if(delta > 0){
        x1 = (-B + sqrt(delta)) / (2 * A);
        x2 = (-B - sqrt(delta)) / (2 * A);
        printf("Delta é %.0f, há duas raizes reais, X1 = %.1f X2 = %.1f \n",delta,  x1, x2);
    }
    system("Pause");
}


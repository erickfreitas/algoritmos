#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int N1, N2, N3, N4, NE;
    float M1, M2;
    printf("Informe o valor da nota 1. \n");
    scanf("%d", &N1);
    printf("Informe o valor da nota 2. \n");
    scanf("%d", &N2);
    printf("Informe o valor da nota 3. \n");
    scanf("%d", &N3);
    printf("Informe o valor da nota 4. \n");
    scanf("%d", &N4);
    M1 = (N1 + N2 + N3 + N4) /4;
    if(M1 >= 7){
        printf("Aprovado\nMedia: %.2f \n",M1);
    }
    else{
        printf("Informe a nota do exame\n");
        scanf("%d", &NE);
        M2 = (NE + M1) / 2;
        if(M2 >= 5){
            printf("Aprovado no exame \nMedia: %.2f\n", M2);
        }
        else{
            printf("Reprovado no exame \nMedia: %.2f\n", M2);
        }
    }
    system("Pause");
}


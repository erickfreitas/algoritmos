#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int N1, N2, N3, N4;
    float media;
    printf("Informe o valor da nota 1. \n");
    scanf("%d", &N1);
    printf("Informe o valor da nota 2. \n");
    scanf("%d", &N2);
    printf("Informe o valor da nota 3. \n");
    scanf("%d", &N3);
    printf("Informe o valor da nota 4. \n");
    scanf("%d", &N4);
    media = (N1 + N2 + N3 + N4) /4;
    if(media >= 5){
        printf("Aprovado no exame\n");
    }
    else{
        printf("Reprovado no exame\n ");
    }
    printf("Média: %.2f \n", media);
    system("Pause");
}


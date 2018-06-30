#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    double A = 0, B = 0, C = 0;
    printf("Informe o valor de A. \n");
    scanf("%lf", &A);
    printf("Informe o valor de B. \n");
    scanf("%lf", &B);
    printf("Informe o valor de C. \n");
    scanf("%lf", &C);
    if(A < B && A < C){
                if(B < C){
                    printf("%.0lf %.0lf %.0lf\n", A,B,C);
                }else{
                    printf("%.0lf %.0lf %.0lf\n", A,C,B);
                }
            }else
            if(B < A && B < C){
                if(A < C){
                   printf("%.0lf %.0lf %.0lf\n", B, A, C);
               }else{
                   printf("%.0lf %.0lf %.0lf\n", B, C, A);
               }
            }
            if(C < A && C < B){
                if(A < B){
                    printf("%.0lf %.0lf %.0lf\n", C, A, B);
                }
                else{
                    printf("%.0lf %.0lf %.0lf\n", C, B, A);
                }
            }
    system("Pause");
}


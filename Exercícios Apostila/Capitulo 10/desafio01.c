#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main(){
       setlocale(LC_ALL, "Portuguese");
       int i = 0;
       double A = 0; double B = 0; double C =0;double primeiro = 0;
       printf("Informe um valor para I. \n");
       scanf("%d", &i);
       printf("Informe um valor para A. \n");
       scanf("%lf", &A);
       printf("Informe um valor para B. \n");
       scanf("%lf", &B);
       printf("Informe um valor para C. \n");
       scanf("%lf", &C);
       if(i == 1){
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
       }
       if(i == 2){
            if(A > B && A > C){
                if(B > C){
                    printf("%.0lf %.0lf %.0lf\n", A,B,C);
                }else{
                    printf("%.0lf %.0lf %.0lf\n", A,C,B);
                }
            }else
            if(B > A && B > C){
                if(A > C){
                   printf("%.0lf %.0lf %.0lf\n", B, A, C);
               }else{
                   printf("%.0lf %.0lf %.0lf\n", B, C, A);
               }
            }
            if(C > A && C > B){
                if(A > B){
                    printf("%.0lf %.0lf %.0lf\n", C, A, B);
                }
                else{
                    printf("%.0lf %.0lf %.0lf\n", C, B, A);
                }
            }
       }
       if(i == 3){
            if(A > B && A > C){
                printf("%.0lf %.0lf %.0lf\n", C, A, B);
            }
            if(B > A && B > C){
                printf("%.0lf %.0lf %.0lf\n", C, B, A);
            }
            if(C > A && C > B){
                printf("%.0lf %.0lf %.0lf\n", A, C, B);
            }
       }
       if(i > 0 || i > 3){
            printf("o valor de I deve ser 1,2 ou 3 \n");
       }
       system("Pause");
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
main(){
       setlocale(LC_ALL, "Portuguese");
       int a = 0; int b = 0;
       int divisor_a =0; int divisor_b = 0;
       int mdc = 0; int mmc = 0;
       int mmc_a = 0; int mmc_b = 0;
       int x = 1; int i = 1;
       char resp = 's'; int teste = 1;
       //while(resp == 's'){
        printf("Informe um valor para a. \n");
        scanf("%d", &a);
        printf("Informe um valor para b.\n");
        scanf("%d", &b);
        if(a == 0 || b == 0){
            printf("Informe um valor diferente de zero. \n");
            return;
        }
        while(x <= a){
            if(a % x == 0){
                divisor_a = x;
                i = 1;
                while(i <= b){
                    if(b % i == 0){
                        divisor_b = i;
                        if(divisor_a == divisor_b){
                            mdc = divisor_a;
                        }
                    }
                    i = i + 1;
                }
             }
             x = x + 1;
        }
        printf("MDC(%d,%d) = %d \n", a, b, mdc);
        mmc = 1;
        mmc_a = a; mmc_b = b;
        for(i = 2;; i++){
            while(mmc_a % i == 0 || mmc_b % i == 0){
                mmc = mmc * i;
                if(mmc_a % i == 0){
                    mmc_a = mmc_a / i;
                }
                if(mmc_b % i == 0){
                    mmc_b = mmc_b / i;
                }
            }
            if(mmc_a == 1 && mmc_b ==1){
                printf("MMC(%d, %d) = %d\n",a ,b, mmc);
                return 0;
            }
        }
        system("Pause");
}

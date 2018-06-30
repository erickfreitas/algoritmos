#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    double triangulos[5][3];
    char classificacao[5][7];
    int l, c, x;
    double lado_A, lado_B, lado_C;
    double quad_A, quad_B, quad_C;
    for(l = 0; l <= 4; l++){
        for(c = 0; c <= 2; c++){
            printf("Informe o %dº valor do triângulo %d. \n", c + 1, l + 1);
            scanf("%lf", &triangulos[l][c]);
        }
    }
    //triangulo  equilatero isosceles escaleno retangulo obtusangulo acutangulo
     for(l = 0; l <= 4; l++){
        for(c = 0; c <= 2; c++){
            lado_A = triangulos[l][0];
            lado_B = triangulos[l][1];
            lado_C = triangulos[l][2];

            quad_A = lado_A * lado_A;
            quad_B = lado_B * lado_B;
            quad_C = lado_C * lado_C;

            //Verificando se é triangulo
            if(lado_A < lado_B + lado_C && lado_B < lado_A + lado_C && lado_C < lado_A + lado_B){
                classificacao[l][0] = 's';
                //Verificando se é equilatero
                if(lado_A == lado_B && lado_B == lado_C){
                    classificacao[l][1] = 's';
                    classificacao[l][2] = 'n';
                    classificacao[l][3] = 'n';
                }
                else{
                    classificacao[l][1] = 'n';
                    //Verificando se é isosceles
                    if(lado_A == lado_B || lado_B == lado_C || lado_A == lado_C){
                        classificacao[l][2] = 's';
                        classificacao[l][3] = 'n';
                    }
                    else{
                        classificacao[l][2] = 'n';
                        //senao e equilatero nem isosceles entao é escaleno
                        classificacao[l][3] = 's';
                    }
                }
                //Verificando se é retangulo
                if((quad_A == quad_B + quad_C) || (quad_B == quad_A + quad_C) || (quad_C == quad_B + quad_A)){
                    classificacao[l][4] = 's';
                    classificacao[l][5] = 'n';
                    classificacao[l][6] = 'n';
                }
                else{
                    classificacao[l][4] = 'n';
                    //Verificando se é obtusangulo
                    if((quad_A > quad_B + quad_C) || (quad_B > quad_A + quad_C) || (quad_C > quad_B + quad_A)){
                        classificacao[l][5] = 's';
                        classificacao[l][6] = 'n';
                    }
                    else{
                        classificacao[l][5] = 'n';
                        //senao e retangulo nem obtusangulo entao é acutangulo
                        classificacao[l][6] = 's';
                    }
                }
            }
            else{
                for(x = 0; x <= 6; x++){
                    classificacao[l][x] = 'n';
                }
            }
        }
    }
    printf("Número|Triangulo|Equilatero|Isosceles|Escaleno|Retangulo|Obtusangulo|Acutangulo \n");
    for(l = 0; l <= 4; l++){
            printf("%d          %c         %c          %c        %c         %c         %c         %c \n",l + 1,classificacao[l][0], classificacao[l][1], classificacao[l][2], classificacao[l][3] , classificacao[l][4] ,classificacao[l][5], classificacao[l][6]);
    }
    system("pause");
}

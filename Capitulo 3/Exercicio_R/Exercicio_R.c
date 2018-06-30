#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    int A, B, C, nulo, branco, total;
    float p_validos, p_A, p_B, p_C, p_nulo, p_branco;
    printf("Informe a quantidade de votos para o candidato A. \n");
    scanf("%d", &A);
    printf("Informe a quantidade de votos para o candidato B. \n");
    scanf("%d", &B);
    printf("Informe a quantidade de votos para o candidato C. \n");
    scanf("%d", &C);
    printf("Informe a quantidade de votos nulo. \n");
    scanf("%d", &nulo);
    printf("Informe a quantidade de votos branco. \n");
    scanf("%d", &branco);
    total = A + B + C + nulo + branco;
    p_validos = ((A + B + C) * 100) / total;
    p_A = (A * 100) / total;
    p_B = (B * 100) / total;
    p_C = (C * 100) / total;
    p_nulo = (nulo * 100) / total;
    p_branco = (branco * 100) / total;
    printf("Total de votos: %d. \n", total);
    printf("Porcentagem de votos validos: %.1f%%. \n", p_validos);
    printf("Porcentagem Candidato A: %.1f%%. \n", p_A);
    printf("Porcentagem Candidato B: %.1f%%. \n", p_B);
    printf("Porcentagem Candidato C: %.1f%%. \n", p_C);
    printf("Porcentagem de votos nulo: %.1f%%. \n", p_nulo);
    printf("Porcentagem de votos branco: %.1f%%. \n", p_branco);
    system("pause");
}

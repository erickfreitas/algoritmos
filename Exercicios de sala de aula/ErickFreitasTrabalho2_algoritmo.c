#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
    char nomes_alunos[50][20];
    char situacao_aluno[50][2];
    double info_alunos[50][7];
    char resp = 's';
    int i = 0; int lin = 0;int col = 0;
    //Coletando os nomes dos alunos
    while(resp == 's'){
        printf("Informe o nome do %d� aluno. \n", i + 1);
        scanf(" %s", &nomes_alunos[i]);
        printf("Deseja informar o nome de mais algum aluno? \n");
        scanf(" %c", &resp);
        i++;
    }
    //Coletando notas e faltas de cada aluno
    for(lin = 0; lin < i; lin++){
        for(col = 0; col <= 3; col++){
            printf("Informe a %d� nota do aluno(a) %s. \n", col + 1, nomes_alunos[lin]);
            scanf("%lf", &info_alunos[lin][col]);
        }
        printf("Informe a quantidade de faltas do aluno(a) %s \n", nomes_alunos[lin]);
        scanf("%lf", &info_alunos[lin][5]);
        //Calculando m�dia
        info_alunos[lin][4] = (info_alunos[lin][0] + info_alunos[lin][1] + info_alunos[lin][2] + info_alunos[lin][3]) / 4;
        //Calculando porcentagem de faltas
        info_alunos[lin][6] = (info_alunos[lin][5] * 100) / 22;
        //aprova��o por nota
        if(info_alunos[lin][4] > 6){
            situacao_aluno[lin][0] = 'A';
        }
        else{
            situacao_aluno[lin][0] = 'R';
        }
        //aprova��o por faltas
        if(info_alunos[lin][6] < 25){
            situacao_aluno[lin][1] = 'A';
        }
        else{
            situacao_aluno[lin][1] = 'R';
        }
    }
    for(lin = 0; lin < i; lin++){
                //printf("Nome:%s   Media:%.1lf Faltas:%.0lf  Porcentagem:%.0lf%%  Nota:%c  Falta:%c \n",nomes_alunos[lin], info_alunos[lin][4] , info_alunos[lin][5], info_alunos[lin][6], situacao_aluno[lin][0], situacao_aluno[lin][1]);
                printf("Nome do aluno:%s \n", nomes_alunos[lin]);
                printf("1� Nota :%1.lf  2� Nota:%1.lf  3� Nota:%1.lf  4� Nota:%1.lf \n", info_alunos[lin][0], info_alunos[lin][1], info_alunos[lin][2], info_alunos[lin][3] );
                printf("Media:%.1lf Procentagem de Faltas:%.1lf%%\n", info_alunos[lin][4], info_alunos[lin][5]);
                printf("Aprovado por nota: %c  Aprovado por faltas:%c\n\n", situacao_aluno[lin][0],situacao_aluno[lin][1]);
    }
}

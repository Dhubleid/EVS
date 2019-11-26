#include<stdio.h>

typedef struct aluno{
    char nome[30];
    int idade;
    char turma[3];
    int notas[4];
    int media;
}alunos[5];

int main()
{
    int i;
    alunos A;

    for(i=0; i<5; i++){
        printf("Digite o nome do aluno %d:\n" ,i+1);
        scanf("%[^\n]s", &A[i].nome);
        getchar();

        printf("Digite a idade do aluno %d:\n" ,i+1);
        scanf("%d", &A[i].idade);

        printf("Digite a turma do aluno %d:\n" ,i+1);
        scanf("%d", &A[i].idade);
        getchar();

        printf("Digite as 4 notas do aluno %d em sucessão:\n" ,i+1);

        scanf("%d %d %d %d", &A[i].notas[0], &A[i].notas[1], &A[i].notas[2], &A[i].notas[3]);
        getchar();

        A[i].media = (A[i].notas[0] + A[i].notas[1] + A[i].notas[2] + A[i].notas[3])/4;

    }
        printf("---APROVADOS----\n");

        for(i=0; i<5; i++){
            if(A[i].media >= 7){
                printf("Nome: %s\n", A[i].nome);
                printf("Idade: %d\n", A[i].idade);
                printf("Turma: %s\n", A[i].turma);
                printf("Notas: %d - %d - %d - %d \n", A[i].notas[0], A[i].notas[1], A[i].notas[2], A[i].notas[3]);
                printf("Media %d\n\n", A[i].media);
            }
        }

        printf("---EXAME----\n");

        for(i=0; i<5; i++){
            if(A[i].media >= 7){
                printf("Nome: %s\n", A[i].nome);
                printf("Idade: %d\n", A[i].idade);
                printf("Turma: %s\n", A[i].turma);
                printf("Notas: %d - %d - %d - %d \n", A[i].notas[0], A[i].notas[1], A[i].notas[2], A[i].notas[3]);
                printf("Media %d\n\n", A[i].media);
            }
        }

        printf("---REPROVADOS----\n");

        for(i=0; i<5; i++){
            if(A[i].media >= 7){
                printf("Nome: %s\n", A[i].nome);
                printf("Idade: %d\n", A[i].idade);
                printf("Turma: %s\n", A[i].turma);
                printf("Notas: %d - %d - %d - %d \n", A[i].notas[0], A[i].notas[1], A[i].notas[2], A[i].notas[3]);
                printf("Media %d\n\n", A[i].media);
            }


    }

}

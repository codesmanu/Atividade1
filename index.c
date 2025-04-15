#include <stdio.h>

int main() {
    char nome [50];
    float nota1, nota2, nota3, nota4;
    float media;

    printf("Nome completo do aluno: ");
    fgets(nome, 100, stdin);

    printf("Escreva a primeira nota: ");
    scanf("%f", &nota1);

    printf("Escreva a primeira nota: ");
    scanf("%f", &nota2);

    printf("Escreva a primeira nota: ");
    scanf("%f", &nota3);

    printf("Escreva a primeira nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) /4;

    printf("\nAluno: %s", nome);
    printf("Media Notas: %.2f\n", media);

    if (media > 6) {
        printf("Resultado: Aprovado!\n");
    } else {
        printf("Resultado: Reprovado!\n");
    }

    return 0;
    }
//  gcc index.c -o index.exe; .\index.exe - colocar no terminal para executar normalmente 
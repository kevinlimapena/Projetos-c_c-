#include <stdio.h>

int main()
{
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu Nome: ");
    scanf("%s", &nome);

    printf("Digite sua Matricula: ");
    scanf("%d", &matricula);

    printf("Nome do aluno:  %s , Matricula: %d \n", nome, matricula);

    printf("Idade do aluno:  %d , Altura: %f \n", idade, altura);

    return 0;
}
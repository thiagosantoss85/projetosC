#include <stdio.h>
int main()
{
    float nota1, nota2, nota3, media;

    printf("digite a primeira nota: \n");
    scanf(" %f", &nota1);

    printf("digite a segunda nota: \n");
    scanf(" %f", &nota2);

    printf("digite a terceira nota: \n");
    scanf(" %f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    printf("sua media e: %.2f\n", media);

    if (media >= 7)
    {
        printf("\nParabens sua media e de : %.2f voce esta aprovado\n", media);
    }
    else
    {
        if (media >= 5)
        {
            printf("\nPena sua media e %.2f voce esta de recuperacao\n", media);
        }
        else
        {
            printf("\nAluno Reprovado\n");
        }
    }
}
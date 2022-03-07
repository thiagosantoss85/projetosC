#include <stdio.h>
int main(void)
{
    float nota1, nota2, nota3, media;
    int cont = 0;

    while (cont < 5)
    {
        printf("Digite a primeira nota: \n");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: \n");
        scanf("%f", &nota2);

        printf("Digite a terceira nota: \n");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        if (media >= 7)
        {
            printf("\n******************\n");
            printf("\nVoce esta aprovado com media: %.2f\n", media);
            printf("\n");
        }
        else
        {
            printf("\n******************\n");
            printf("\nVoce esta reprovado com media: %.2f\n", media);
            printf("\n");
        }

        cont++;
    }
}
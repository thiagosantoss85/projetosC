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

        printf("\nSua media e de: %.2f\n", media);

        if (media >= 7)
        {
            printf("\n******************\n");
            printf("\nVoce esta aprovado\n");
            printf("\n");
        }
        else
        {
            printf("\n******************\n");
            printf("\nVoce esta reprovado\n");
            printf("\n");
        }

        cont++;
    }
}
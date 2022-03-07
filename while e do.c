#include <stdio.h>
int main()
{
    int num, maior, cont;
    maior = 0;
    cont = 0;

    while (cont<5)
    {
        printf("Digite um numero inteiro: \n");
        scanf(" %i", &num);
        if (num > maior)
            maior = num;
            cont++;
    }
    printf(" O maior numero digitado foi: %i\n", maior);

    return 0;
}
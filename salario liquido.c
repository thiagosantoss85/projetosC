#include <stdio.h>
int main()
{
    int cont;
    float salbruto, saliquido, imposto, totbruto = 0, totliquido = 0, totimposto = 0;

    for (cont = 1; cont <= 5; cont++)
    {
        printf("Digite o salario bruto:\n");
        scanf("%f", &salbruto);

        if (salbruto > 999)
            imposto = salbruto * 0.10;
        else if (salbruto > 1999)
            imposto = salbruto * 0.15;
        else if (salbruto > 9999)
            imposto = salbruto * 0.20;
        else if (salbruto > 99999)
            imposto = salbruto * 0.25;
        else
            imposto = salbruto * 0.30;
    }
    saliquido = salbruto - imposto;
    printf("Salario liquido %.2f\n", saliquido);
    
    totbruto = totbruto + salbruto;
    totliquido = totliquido + saliquido;
    totimposto = totimposto + imposto;

    printf("Total salario bruto =%.2f\n", totbruto);
    printf("Total salario liquido =%.2f\n", totliquido);
    printf("Total imposto bruto e = %.2f\n", totimposto);

    return 0;
}
#include <stdio.h>
 int main()
 {
     int cont, n, num, somapar, somaimpar;
     somapar = 0;
     somaimpar= 0;

     printf("Digite a quantidade de numeros da lista: \n");
     scanf(" %i", &n);

     for (cont = 1; cont<=n; cont++)
     {
     
        printf("Digite um numero \n");
        scanf(" %i", &num);        

        if (num%2==0)
        somapar=somapar+num;        
        else        
        somaimpar=somaimpar+num;

     }
       
        printf("A soma dos numeros pares = %i\n", somapar);
        printf("A soma dos numeros impares = %i\n",somaimpar);

        return 0;
 }        
        

     
     


 
#include <stdio.h>
int main ()
{
    int cadastrado, ativo, logado;
    char opcao;

    cadastrado=ativo=logado=0;

    printf("Deseja cadastrar sua conta? s/n\n");
    scanf(" %c",&opcao);

    if (opcao=='s') {
        cadastrado=1;
        printf("\nconta cadastrada\n");
    }
    
    printf("\nDeseja ativar sua conta? s/n\n");
    scanf(" %c",&opcao);

    if (opcao=='s') {
        ativo=1;
        printf("\nconta ativada\n");
    }

    printf("\nDeseja logar sua conta? s/n\n");
    scanf(" %c",&opcao);

    if (opcao=='s') {
        logado=1;
        printf("\nconta logada\n");
    }

    if ((cadastrado==1)&&(ativo==1)&&(logado==1))
    {
        printf("\n***Seja bem vindo!!!!!***\n");
    }
    else
    {
        printf("\n***Que pena, Algo deu errado***\n");
    }

    
        
 
}
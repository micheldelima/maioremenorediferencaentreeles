/*
Aluno: Michel de Lima
Implemente em C um programa que leia uma  quantidade não
conhecida de valores inteiros e ao final  da digitação informe
o maior e o menor valor digitado e a  diferença entre estes.
O valor zero deve encerrar o algoritmo e valores negativos
devem ser simplesmente  ignorados.*/
#include <stdio.h>
#include <locale.h>
int main()
{
    //variáveis
    int i,n,maior,menor,d;
    //idioma em portugues
    setlocale(LC_ALL, "Portuguese");
    //coloca cor no software
    system("color 5F");
    //limpeza de buffer
    fflush(stdin);

    printf("==========================================================\n");
    printf(" Exercício 1:\n");
    printf(" O maior e o menor valor digitado e a diferença entre eles\n");
    printf("==========================================================\n");
    //loop em for, para a variável n seja diferente de zero
    for(i=0; n!=0; i++)
    {
        printf("Digite n: ");
        scanf("%d", &n);
        if(i==0 && n>0)
        {
            //atribuição de maior e menor para os primeiros numeros
            maior=n;
            menor=n;
        }
        //condição se n for maior que maior e n maior que zero e ignorando numeros negativos
        else if(n>maior && n>0)
        {
            maior=n;
        }
        //condição de atribuição de numero menor e ignorando numeros negativos
        else if(n<menor && n>0)
        {
            menor=n;
        }
        //encerra o programa se n = zero
        else if(n==0)
        {
            //calcula a diferença
            d=maior-menor;
            printf("==========================================================\n");
            //mostra o resultado
            printf("Resultado\nMaior: %d\nMenor: %d\nDiferença: %d\n",maior,menor,d);
        }
    }
    return 0;
}

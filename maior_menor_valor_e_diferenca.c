/*
Aluno: Michel de Lima
Implemente em C um programa que leia uma  quantidade n�o
conhecida de valores inteiros e ao final  da digita��o informe
o maior e o menor valor digitado e a  diferen�a entre estes.
O valor zero deve encerrar o algoritmo e valores negativos
devem ser simplesmente  ignorados.*/
#include <stdio.h>
#include <locale.h>
int main()
{
    //vari�veis
    int i,n,maior,menor,d;
    //idioma em portugues
    setlocale(LC_ALL, "Portuguese");
    //coloca cor no software
    system("color 5F");
    //limpeza de buffer
    fflush(stdin);

    printf("==========================================================\n");
    printf(" Exerc�cio 1:\n");
    printf(" O maior e o menor valor digitado e a diferen�a entre eles\n");
    printf("==========================================================\n");
    //loop em for, para a vari�vel n seja diferente de zero
    for(i=0; n!=0; i++)
    {
        printf("Digite n: ");
        scanf("%d", &n);
        if(i==0 && n>0)
        {
            //atribui��o de maior e menor para os primeiros numeros
            maior=n;
            menor=n;
        }
        //condi��o se n for maior que maior e n maior que zero e ignorando numeros negativos
        else if(n>maior && n>0)
        {
            maior=n;
        }
        //condi��o de atribui��o de numero menor e ignorando numeros negativos
        else if(n<menor && n>0)
        {
            menor=n;
        }
        //encerra o programa se n = zero
        else if(n==0)
        {
            //calcula a diferen�a
            d=maior-menor;
            printf("==========================================================\n");
            //mostra o resultado
            printf("Resultado\nMaior: %d\nMenor: %d\nDiferen�a: %d\n",maior,menor,d);
        }
    }
    return 0;
}

/*Programa de soma*/
#include <stdio.h>

main() 
{
    int inteiro1, inteiro2, soma;

    printf("Entre com o primeiro inteiro\n");
    scanf("%d", &inteiro1);
    printf("Entre com o segundo número inteiro\n");
    scanf("%d", &inteiro2);
    soma = inteiro1 + inteiro2;
    printf("A soma é %d\n" , soma);
    return 0; /* indica que o programa foi bem sucedido*/
}

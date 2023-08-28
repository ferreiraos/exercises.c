/*identificando o mês correspondente e a qtd. dias*/
#include <stdio.h>

int main() {
    int numero;

    printf("Informe um número entre 1-12: \n");
    scanf("%d", &numero);

    if (numero >=1 && numero <= 12) {
        const char *nomeDosMeses = "Janeiro" , "Fevereiro" , "Março" , "Abril" , "Maio" , "Junho", "Julho" , "Agosto" , "Setembro" , "Novembro" , "Dezembro";
        const int diasDosMeses[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 , 31};   

        printf("Mês: %.*s\n", 9, nomeDosMeses + (numero - 1) * 9);
        printf("Possui %d dias.\n" , diasDosMeses[numero - 1]);
    } else { 

        printf("Número inválido.\n");
    };
    return 0;

}

 
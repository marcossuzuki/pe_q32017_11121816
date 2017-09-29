#include <stdio.h>

int main () {

    int opcao;
    double valor;

    printf("Entre com um valor de temperatura: ");
    scanf ("%lf", &valor);

    printf("Opcao 1 Celcius para Kelvin \nOpcao 2 Kelvin para Celcius\n");
    scanf("%d", &opcao);

    switch ( opcao ) {
        case 1:
            valor = valor + 273.15;
            printf("%lf K", valor);
            break;
        case 2:
            valor = valor - 273.15;
            printf("%lf C", valor);
            break;
        default:
            printf("Opcao invalida!");

    }

    return 0;

}

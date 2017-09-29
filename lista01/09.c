#include <stdio.h>

int main () {

    int opcao;
    double temperatura;

    printf("Entre com um valor de temperatura: ");
    scanf ("%lf", &temperatura);

    printf("Opcao 1 Celcius para Fahrenheit \nOpcao 2 Fahrenheit para Celcius\n");
    scanf("%d", &opcao);

    switch ( opcao ) {
        case 1:
            temperatura = (temperatura * 9.0/5.0) + 32.0;
            printf("%lf F", temperatura);
            break;
        case 2:
            temperatura = ( temperatura - 32 ) * 5/9;
            printf("%lf C", temperatura);
            break;
        default:
            printf("Opcao invalida!");

    }

    return 0;

}

#include <stdio.h>

int main () {

    int opt;
    double t;

    printf("Entre com um valor de temperatura: ");
    scanf ("%lf", &t);

    printf("Opcao 1 Celcius para Fahrenheit \nOpcao 2 Fahrenheit para Celcius\n");
    scanf("%d", &opt);

    switch ( opt ) {
        case 1:
            t = (t * 9.0/5.0) + 32.0;
            printf("%lf F", t);
            break;
        case 2:
            t = ( t - 32 ) * 5/9;
            printf("%lf C", t);
            break;
        default:
            printf("Opcao invalida!");

    }

    return 0;

}

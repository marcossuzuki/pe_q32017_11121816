#include <stdio.h>

main () {

    int base, exp;
    float resultado=1;

    printf ("Digite a base e o expoente: ");
    scanf ("%d %d", &base, &exp);

    if (exp==0) {

       resultado=1;

    } else if (exp>0) {

        for (int i=0;i<exp;i++) {

            resultado *= base;

       }

    } else {

        for (int i=0;i<(-exp);i++) {

            resultado /= base;

       }

    }
    printf("%f", resultado);

    return 0;

}

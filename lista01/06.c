#include<stdio.h>

main(){

    unsigned long int x, fat=1;

    printf ("Digite um numero inteiro positivo: ");
    scanf ("%d", &x);

    for (int i=1; i<=x; i++) {

        fat*=i;

    }

    printf ("%d", fat);

    return 0;

}

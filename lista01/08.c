#include <stdio.h>

int main () {

    int n, fib0=0, fib1=1;

    printf ("Fibonacci: ");
    scanf ("%d", &n);

    printf ("%d",fib0);

    if (n>0) {

       printf (",%d",fib1);

       for (int i=1; i<n; i++) {

            fib1 += fib0;
            fib0 = fib1 - fib0;
            printf (",%d",fib1);

       }

    }

    return 0;

}

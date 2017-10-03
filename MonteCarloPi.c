#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <time.h>


double monte_carlo_pi(int n)
{   
    double quarto_pi, x, y, pt_circ = 0.0;

    for (int i = 0; i < n; i++){
        x = rand() * 0.5 / (RAND_MAX + 1.0);
        y = rand() * 0.5 / (RAND_MAX + 1.0);
        if ( sqrt(pow(x,2)+pow(y,2)) < 0.5 ) {

            pt_circ++;

        }
    }

    quarto_pi = pt_circ/n;
    return quarto_pi*4;
}


int main ()
{
    srand(time(NULL));
    int n;
    double pi;

    scanf("%d", &n);
    pi = monte_carlo_pi(n);
    printf("Monte Carlo!\n");
    printf("pi = %.50lf\n", pi );

    return 0;
}



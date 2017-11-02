#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct complexo
{

    double r;
    double i;

}complexo;

complexo create_cpx(double r, double i)
{
    complexo z;
    z.r=r;
    z.i=i;
    return z;
}

complexo conjugado_cpx(complexo *z)
{
    complexo new_z = *z;
    new_z.i = z->i*(-1);
    return new_z;
}

complexo add_cpx(complexo *a, complexo *b)
{
    complexo z = *a;
    z.r += b->r;
    z.i += b->i;
    return z;
}

complexo subtract_cpx(complexo *a, complexo *b)
{
    complexo z = *a;
    z.i-=b->i;
    z.r-=b->r;
    return z;
}

complexo multiply_cpx(complexo *a, complexo *b)
{
    complexo z;

    z.i=a->r*b->i;
    z.i+=a->i*b->r;

    z.r=a->r*b->r;
    z.r-=a->i*b->i;

    return z;
}

complexo inverse_cpx(complexo *a)
{
    complexo z=*a;
    double aux;
    aux=a->r*a->r;
    aux+=a->i*a->i;
    z.r/=aux;
    z.i/=-aux;

    return z;
}

complexo division_cpx(complexo *a, complexo *b)
{
    complexo z;
    complexo aux = inverse_cpx(b);
    z = multiply_cpx(a, &aux);

    return z;
}

double magnitude_cpx(complexo *a)
{
    double aux;
    aux = a->r*a->r;
    aux += a->i*a->i;

    aux = sqrt(aux);

    return aux;
}

complexo sqrt_cpx(complexo *a)
{
    double r, modulo_aux;
    complexo aux = *a;

    //https://math.stackexchange.com/questions/44406/how-do-i-get-the-square-root-of-a-complex-number

    r = magnitude_cpx(a);

    aux.r += r;

    r = sqrt(r);

    modulo_aux = magnitude_cpx(&aux);

    aux.r /= modulo_aux;
    aux.i /= modulo_aux;

    aux.r *= r;
    aux.i *= r;

    return aux;
}

void print_cpx( complexo *z)
{
    if (z->r) {
        printf("%lf", z->r);
        if ((z->i)<0) printf("-%lfi", -(z->i));
        else if ((z->i)>0) printf("+%lfi", z->i);
    } else {
        if ((z->i)<0) printf("-%lfi", -(z->i));
        else if ((z->i)>0) printf("%lfi", z->i);
    }
    printf("\n");
}

int main ( ) 
{

    complexo x, result, z, conj;
    x=create_cpx(-3.1,-2.9);
    z=create_cpx(8,-6);
    result = sqrt_cpx(&z);
    conj=conjugado_cpx(&z);
    conj=conjugado_cpx(&z);

    printf("Size of itpo: %lu \n", sizeof(z));

    printf("Magnitude of z: %lf \n", magnitude_cpx(&z));

    print_cpx(&z);
    print_cpx(&conj);
    print_cpx(&result);

    return 0;
  
}

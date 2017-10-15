#include <stdio.h>

long int sumdigits (long int n) {
    if (n<10) return n;
    return sumdigits(n/10)+n%10;
}

long int sumdigitsTR (long int n, long int base) {
    if (n<10) return base+n;
    return sumdigitsTR(n/10, base+n%10);
}

int main(){

    long int n; 

    printf("=== Soma dos digitos ===\n");
    printf("Digite n: ");
    scanf("%ld", &n);


    printf("Soma dos digitos recusrisva caudal: %ld\n", sumdigitsTR(n,0));    

    printf("Soma dos digitos recusrisva: %ld\n", sumdigits(n));  


    return 0;
}

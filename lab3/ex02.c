#include <stdio.h>

long int digits (long int n) {
    if (n<10) return 1;
    return digits(n/10)+1;
}

long int digitsTR (long int n, long int base) {
    if (n<10) return base;
    return digitsTR(n/10, base+1);
}

int main(){

    long int n; 

    printf("=== Numero de digitos ===\n");
    printf("Digite n: ");
    scanf("%ld", &n);

    printf("Numero de digitos recusrisva caudal: %ld\n", digitsTR(n,1));    

    printf("Numero de digitos recusrisva: %ld\n", digits(n));  


    return 0;
}

#include <stdio.h>

unsigned int digits (unsigned int n) {
    if (n<10) return 1;
    return digits(n/10)+1;
}

unsigned int digitsTR (unsigned int n, unsigned int base) {
    if (n<10) return base;
    return digitsTR(n/10, base+1);
}

int main(){

    unsigned int n; 

    printf("=== Numero de digitos ===\n");
    printf("Digite n: ");
    scanf("%d", &n);


    printf("Numero de digitos recusrisva caudal: %d\n", digitsTR(n,1));    

    printf("Numero de digitos recusrisva: %d\n", digits(n));  


    return 0;
}

#include <stdio.h>

unsigned int sumdigits (unsigned int n) {
    if (n<10) return n;
    return sumdigits(n/10)+n%10;
}

unsigned int sumdigitsTR (unsigned int n, unsigned int base) {
    if (n<10) return base+n;
    return sumdigitsTR(n/10, base+n%10);
}

int main(){

    unsigned int n; 

    printf("=== Soma dos digitos ===\n");
    printf("Digite n: ");
    scanf("%d", &n);


    printf("Soma dos digitos recusrisva caudal: %d\n", sumdigitsTR(n,0));    

    printf("Soma dos digitos recusrisva: %d\n", sumdigits(n));  


    return 0;
}

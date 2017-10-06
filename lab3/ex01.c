#include <stdio.h>

unsigned int soma (unsigned int n) {
    if (n==1) return 1;
    return soma (n-1)+n;
}

unsigned int somaTR (unsigned int n, unsigned int base) {
    if (n==0) return base;
    return somaTR (n-1, base+n);
}

int main(){

    unsigned int n; 

    printf("=== Soma de n ate 1 ===\n");
    printf("Digite n: ");
    scanf("%d", &n);


    printf("Soma recusrisva caudal: %d\n", somaTR(n,0));    

    printf("Soma recusrisva: %d\n", soma(n));  


    return 0;
}

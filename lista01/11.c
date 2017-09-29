#include <stdio.h>

int main() {
    int n;
    int r;
    int i=1;

    printf("Digite o numero: ");
    scanf("%d", &n);


    while (n!=0) {

        if (n & 1) {
            printf("1");
        } else {
            printf("0");
        }

        n = n >> i;
        i++;
    }

    return 0;
}

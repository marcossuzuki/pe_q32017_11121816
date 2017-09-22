#include <stdio.h>

int main(){
    int valor;
    printf("Entre com um valor: ");
    scanf("%d",&valor);
    
    if ((valor%2)==0) {
        printf("O numero e par.\n");
    } else {
        printf("O numero e impar.\n");
    }

    return 0;

}

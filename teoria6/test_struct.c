#include <stdio.h>
#include <stdlib.h>

typedef struct tipo {
    double var10;
    char var1;
    char pad1[3];
    int var2;
    char var3;
    char pad2[3];
}tipo;

typedef struct tipo2 {
    double va10;
    int var2;
    char var1,var3;
}tipo2;

int main ( ) 
{

    tipo t;
    tipo2 t2;


    printf("Size of itpo: %d \n", sizeof(t));
    printf("Size of itpo2: %d \n", sizeof(t2));

    return 0;
  
}

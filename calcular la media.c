#include <stdio.h>

#define DIM 5

int main() 
{
    int datos1[DIM] = {8, 9 ,3, 1, 5};
    int datos2[DIM] = {5, 1 ,4, 7, 5};
    int datos3[DIM] = {7, 4 ,1, 9, 3};
    
    double media1;
    double media2;
    double media3;
    
    media1 = (datos1[0] + datos1[1] + datos1[2] + datos1[3] + datos1[4]) / 5;
    printf("Media de las últimas 5 partidas con Kassadin: %.2lf\n", media1);
    
    media2 = (datos2[0] + datos2[1] + datos2[2] + datos2[3] + datos2[4]) / 5;
    printf("Media de las últimas 5 partidas con Ahri: %.2lf\n", media2 );
    
    media3 = (datos3[0] + datos3[1] + datos3[2] + datos3[3] + datos3[4]) / 5;
    printf("Media de las últimas 5 partidas con Jax: %.2lf\n", media3);
    
    return 0;
    
}

#include <stdio.h> 
int main() { 
    int in_stock = 20; 
    if (in_stock){ 
        printf("Orden recibida.\n"); 
    }
    int score = 70;
    if (score >= 90){ 
        printf("Top 10%%.\n"); 
    }else{ 
        printf("Menos de 90.\n"); 
    } 
    int y = 4, x = 3; 
    y = (x >= 5) ?  5 : x; 
    /* Esto es equivalente a: 
    if (x >= 5) 
        y = 5; 
    else 
        y = x; 
    */
    printf("Valor de y: %d\n", y);
    return 0; 
} 
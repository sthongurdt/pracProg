#include <stdio.h> 
int main() { 
    //-----------conversión automática 
    float price = 6.50, new_price; 
    int increase = 2; 
    new_price = price + increase; 
    printf("El Nuevo precio es %4.2f \n", new_price); 
    //-----------conversión explicita 
    float average; 
    int total = 23, count = 4; 
    average = (float) total / count; 
    printf("El promedio es %4.2f", average); 
    //----------------------------------------- 
    return 0; 
}
#include <stdio.h> 
int main() { 
    int x, y, z; 
    //------------------------------------------------- 
    z = 3; 
    x = z--;  /* asigna 3 a x, y reduce z a 2 */ 
    printf("x = %d \n", x); 
    printf("z = %d \n", z);
    //-------------------------------------------------     
    y = 3; 
    x = ++y;  /* iincrementa y a 4, asigna 4 a x */ 
    printf("x = %d \n", x); 
    printf("y = %d \n", y); 
    //------------------------------------------------- 
    return 0; 
}
#include <stdio.h> 
/// Programa
int main() { 
    int length = 10, width = 5, area; 
    area = length * width; 
    printf("%d \n", area);  /* 50 */ 
    //---------------------------------- 
    int i1 = 10, i2 = 3, quotient, remainder; 
    float f1 = 4.2, f2 = 2.5, result; 
    quotient = i1 / i2;  // 3 
    remainder = i1 % i2;  // 1 
    result = f1 / f2;  // 1.68 
    printf("%d %d %f \n", quotient, remainder, result); 
    //---------------------------------- 
    return 0; 
}
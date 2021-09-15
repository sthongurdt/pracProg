#include <stdio.h> 
int main() { 
    int num = 5; 
    while (num > 0) { 
        if (num == 3) 
        break; 
        printf("%d\n", num); 
        num--; 
    }
    printf("//----------//\n");     
    int num2 = 5; 
    while (num2 > 0) { 
        num2--; 
        if (num2 == 3) 
            continue; 
        printf("%d\n", num2); 
    } 
    return 0; 
}
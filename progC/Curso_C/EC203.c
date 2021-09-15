#include <stdio.h> 
int main() { 
    int num = 3; 
    switch (num) { 
        case 1: 
            printf("Uno\n"); 
            break;  
        case 2: 
            printf("Dos\n"); 
            break;  
        case 3: 
            printf("Tres\n"); 
            break;  
        default: 
            printf("No es 1, 2, o 3.\n"); 
    } 
    return 0; 
}
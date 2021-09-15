#include <stdio.h> 
int main() { 
    int n = 42; 
    //--------------Operacion AND 
    if (n > 0 && n <= 100) 
        printf("Rango (1-100).\n"); 
    //--------------Operacion OR 
    char p = 'X';
    if (p == 'x' || p == 'X') 
        printf("Valor de número romano 10.\n"); 
    //--------------Operacion AND-OR 
    if (n == 999 || (n > 0 && n <= 100)) 
        printf("Entrada válida.\n"); 
    //--------------Operacion NOT 
    char c = 'V'; 
    if (!(c == 'x' || c == 'X')) 
        printf("El número romano no es 10.\n"); 
    //--------------
    int x = 3; 
    int y = 8; 
    if(!(x > 2 || y < 0))  
        printf("true"); 
    else  
        printf("false");    
    return 0;
}
#include <stdio.h> 
int main() { 
    printf("El árbol tiene %d manzanas.\n", 22); /* salida: el árbol tiene 22 manzanas. */ 
    printf("\"Hola mundo!\"\n"); /* salida: "Hola mundo!" */ 
    printf("Color: %s, Numero: %d, flotante: %5.2f \n", "red", 42, 3.14159); /* Color: red, Numero: 42, flotante:  3.14  */ 
    printf("Pi = %3.2f \n", 3.14159); /* Pi = 3.14 */ 
    printf("Pi = %8.5f \n", 3.14159); /* Pi = 3.14159 */ 
    printf("Pi = %-8.5f \n", 3.14159); /* Pi = 3.14159 */ 
    printf("Hay %d %s en el árbol. \n", 22, "manzanas"); /* Hay 22 manzanas en el árbol. */ 
    return 0;
}
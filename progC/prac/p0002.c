#include <stdio.h>
#include <stdlib.h>

//constantes
#define PI 3.141592

void main(){
	//principales variables
	int entero;
	double decimal;
	float flotante;
	char a;
	int entero2;
	int resultado = 0;
	float resultado2 = 0;

	printf("Introdusca el primer numero:\n");
	scanf("%d",&entero);
	printf("Introdusca el segundo numero:\n");
	scanf("%d",&entero2);
	resultado = entero+entero2;
	printf("El resultado de la suma es: %d \n",resultado);
	resultado = entero-entero2;
	printf("El resultado de la resta es: %d \n",resultado);
	resultado = entero*entero2;
	printf("El resultado de la multiplicacion es: %d \n",resultado);
	resultado2 = entero/entero2;
	printf("El resultado de la divicion es: %f \n",resultado2);
	resultado = entero%entero2;
	printf("El resultado del modulo es: %d \n",resultado);
	return 0;
}

#include <stdio.h>

int funcion(int *x){
	*x = 5;
	return *x;
}

int main(){
	int a;
	int b;
	int *apt;

	a = 3;
	apt = &a;
	*apt = 8;
	b = funcion(&a);

	printf("%i %i \n", a, b);
	return 0;
}

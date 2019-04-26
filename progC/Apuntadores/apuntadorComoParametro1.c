#include <stdio.h>
#include <malloc.h>

int funcion(int *x){
	*x = *x + 1;
	printf("%i\n", *x);
}

int main(){
	int *b;

	b = (int *) malloc (sizeof(int));
	*b = 3;
	funcion(b);

	return 0;
}

#include <stdio.h>
#include <malloc.h>

int funcion(int *x){
	printf("%i\n", *x);
}

int main(){
	int *b;
	b = (int *) malloc (sizeof(int));
	*b = 4;
	funcion(b); 
	return 0;
}

#include <stdio.h>
#include <malloc.h>

int main(){
	int *apt;

	apt = (int *) malloc(sizeof(int)*3);
	apt[0] = 5;
	apt[1] = 6;
	apt[2] = 7;
	printf("%i %i %i\n", apt[0], apt[1], apt[2]);
	return 0;
}

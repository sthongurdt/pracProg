#include <stdio.h>
#include <malloc.h>

int main(){
	int *apt;

	apt = (int *) malloc(sizeof(int));
	*apt = 5;
	printf("%i \n", *apt);
	return 0;
}

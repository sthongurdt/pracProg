#include <stdio.h>

int main(){
	int a;
	int *apt;

	a = 3;
	apt = &a;
	*apt = 8;

	printf("%i %i %x\n", a, *apt, apt);
	return 0;
}

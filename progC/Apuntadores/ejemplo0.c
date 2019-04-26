#include <stdio.h>

int main(){
	int a;
	int *apt;

	a = 3;
	apt = &a;

	printf("%i %i %x\n", a, *apt, apt);
	return 0;
}

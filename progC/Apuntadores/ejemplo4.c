#include <stdio.h>

int main(int argc, char *argv[]){
	char a = 'A';
	int *apt;

	apt = &a;
	*apt = 288;
	printf("%i\n", a);
	return 0;
}

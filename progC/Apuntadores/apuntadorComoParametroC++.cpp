#include <iostream>

using namespace std;

int funcion(int *x){
	cout << *x << endl;
	*x = *x + 1;
	return 0;
}

int main(){
	int *b;
	b = new int;
	*b = 4;
	funcion(b); 
	cout << *b << endl;
	return 0;
}

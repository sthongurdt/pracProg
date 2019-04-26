#include <iostream>
using namespace std;

int main(){
	int *v, i;

	v = new int [10];
	for(i=0; i<10; i++){
		v[i] = i;
		cout<<v[i]<<endl;
	}
	return 0;
}

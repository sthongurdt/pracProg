#include <iostream>
using namespace std;

int main(){
	int **v, i, j;

	v = new int* [10*4];
	for(i=0; i<4; i++){
		v[i] = new int [10];
		for(j=0; j<10; j++){
			v[i][j] = i;
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

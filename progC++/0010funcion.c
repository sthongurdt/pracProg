//resuelva la funcion para x e y

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float x, y, f=0;
	
	cout<<endl;
	cout<<"Valor de x: "; cin>>x;
	cout<<"Valor de y: "; cin>>y;
	
	f=(sqrt(x))/(pow(y,2)-1);

	cout<<endl;
	cout<<"El valor de la funcion es: "<<f<<endl;
	return 0;
}

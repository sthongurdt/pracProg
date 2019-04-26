#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a, b, c, x1=0, x2=0;
	cout<<endl;
	cout<<"Valor de a: "; cin>>a;
	cout<<"Valor de b: "; cin>>b;
	cout<<"valor de c: "; cin>>c;

	x1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
	x2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);

	cout<<endl;
	cout<<"La primera raiz es: "<<x1<<endl;
	cout<<"La segunda raiz es: "<<x2<<endl;

	return 0;
}

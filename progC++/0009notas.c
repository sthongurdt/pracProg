//Obtenga calificacion estudiante: nota teorica 60%, nota practica 30%, nota asistencia 10%

#include<iostream>

using namespace std;

int main(){
	float nt, np, na, sum=0;
	cout<<endl;
	cout<<"Nota Teorica : "; cin>>nt;
	cout<<"Nota Practica: "; cin>>np;
	cout<<"Nota Asistencia: "; cin>>na;

	sum =(nt*0.6)+(np*0.3)+(na*0.1);

	cout<<endl<<"Nota Final: "<<sum<<endl;
	cout<<endl;
	return 0;
}

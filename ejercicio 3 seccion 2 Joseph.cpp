/*3. Escriba la siguiente expresión como expresión C++:
	(a+(b/c))/(d+(e/f))) */
	
#include<iostream>
using namespace std;

int main(){
	double a,b,c,d,e,f,resultado=0;
	
	cout<<"Ingrese el valor de A: "; cin>>a;
	cout<<"Ingrese el valor de B: "; cin>>b;
	cout<<"Ingrese el valor de C: "; cin>>c;
	cout<<"Ingrese el valor de D: "; cin>>d;
	cout<<"Ingrese el valor de E: "; cin>>e;
	cout<<"Ingrese el valor de F: "; cin>>f;
	
	resultado = (a+(b/c))/(d+(e/f));

	cout.precision(3);
	cout<<"\nEl resultado de la operacion es: " <<resultado<<endl;
	
	return 0;
}


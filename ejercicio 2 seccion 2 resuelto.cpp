/*2. Escribe la siguiente expresión matematica como expresión en C++:
	(a+b)/(c+d) */

#include<iostream>

using namespace std;

int main(){
	double a,b,c,d,resultado=0;
	
	cout<<"Introduzca el valor de A: "; cin>>a;
	cout<<"Introduzca el valor de B: "; cin>>b;
	cout<<"Introduzca el valor de C: "; cin>>c;
	cout<<"Introduzca el valor de D: "; cin>>d;
	
	resultado = (a+b)/(c+d);
	
	cout.precision(2);
	cout<<"\nEl resultado de la operacion es: " <<resultado<<endl;
	
	return 0;
}


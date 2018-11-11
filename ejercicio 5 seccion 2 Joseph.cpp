/*5. Escriba un fragmento de programa que intercambie los valores de dos
variables.*/
#include<iostream>
using namespace std;

int main(){
	int j,a,b;
	
	cout<<"Ingrese el valor de J: "; cin>>j;
	cout<<"Ingrese el valor de A: "; cin>>a;
	
	b=j;
	j=a;
	a=b;
	
	cout<<"\nEl nuevo valor de J es: "<<j<<endl;
	cout<<"El nuevo valor de A es: "<<a<<endl;
	
	return 0;
}


/*8. Escriba un programa que lea de la entrada est�ndar los dos catetos de un
tri�ngulo rect�ngulo y escriba en la salida est�ndar su hipotenusa:
	(a)2+(b)2=c2 */
	
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float a,b,c=0;
	
	cout<<"Introduzca el valor de cateto a: "; cin>>a;
	cout<<"Introduzca el valor de cateto b: "; cin>>b;
	
	c= sqrt(pow(a,2)+pow(b,2));
	
	cout.precision(3);
	cout<<"\nEl valor de la hipotenusa es: "<<c<<endl;
	
	
	return 0;
}


/*10. Escriba un programa que calcule las soluciones de una ecuación de segundo
grado de la forma ax'2+bx+c=0, teniendo en cuenta que:
	x= (-b+-(raiz cuadrada)(b)2-4ac))/2a */
	
#include<iostream>
#include<math.h>

using namespace std;
int main(){
	float a,b,c,x1=0,x2=0;
	
	cout<<"Introduce el valor de A: "; cin>>a;
	cout<<"Introduce el valor de B: "; cin>>b;
	cout<<"Introduce el valor de C: "; cin>>c;
	
	x1 = (-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	x2 = (-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	
	cout.precision(3);
	cout<<"\nEl primer resultado posible es: "<<x1<<endl;
	cout.precision(3);
	cout<<"El segundo resultado posible es: "<<x2<<endl;
	return 0;
}

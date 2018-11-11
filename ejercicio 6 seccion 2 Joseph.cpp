/*6. Escribe un programa que lea las notas finales de 4 alumnos y calcule la
nota final media de los cuatro alumnos.*/

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,promedio=0;
	
	cout<<"Introduzca la nota final del primer alumno: "; cin>>a;
	cout<<"Introduzca la nota final del segundo alumno: "; cin>>b;
	cout<<"Introduzca la nota final del tercer alumno: "; cin>>c;
	cout<<"Introduzca la nota final del cuarto alumno: "; cin>>d;
	
	promedio = (a+b+c+d)/4;
	
	cout.precision(2);
	cout<<"\nLa nota promedio final de los cuatro alumnos es: "<<promedio<<endl;
	
	
	return 0;
}


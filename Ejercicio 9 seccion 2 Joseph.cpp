/*9. Realice un programa que calcule el valor que toma la siguiente función
para valores dados de x e y:
	f(x,y)=(raizx/((y2)-1)) */
	
#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float x,y,f=0;
	
	cout<<"Introduce el valor de x: "; cin>>x;
	cout<<"Introduce el valor de y: "; cin>>y;
	
	f= (sqrt(x)/(pow(y,2)-1));
	
	cout.precision(3);
	cout<<"\nEl valor de la funcion es: "<<f<<endl;
	
	
	return 0;
}

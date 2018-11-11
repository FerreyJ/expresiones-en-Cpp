/*7. La calificacion final de un estudiante es el promedio de tres notas:
	La nota de prácticas que cuenta un 30% del total.
	La nota teórica que cuenta un 60%.
	La nota de participación que cuenta el 10% restante.
Escriba un programa que lea las tres notas del alumno y escriba su nota final.*/

#include<iostream>

using namespace std;

int main(){
	float practica,teorica,participacion,nota_final=0;
	
	cout<<"Introduzca la nota de practicas del estudiante: "; cin>>practica;
	cout<<"Introduzca la nota teorica del estudiante: "; cin>>teorica;
	cout<<"Introduzca la nota de participacion del estudiante: "; cin>>participacion;
	
	nota_final = (practica*0.30)+(teorica*0.60)+(participacion*0.10);
	
	cout.precision(3);
	cout<<"\nLa nota final del estudiante es: "<<nota_final<<endl;
	
	
	return 0;
}


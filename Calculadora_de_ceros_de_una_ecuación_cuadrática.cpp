#include <iostream>
#include <locale>
#include <conio.h>
#include <cmath>

using namespace std;

void igualAUno(double a, double b, double c){
	
	double discriminante, x1, x2;
	discriminante = pow((b / 2), 2) - c;
	
	if (discriminante < 0){
		cout << "La ecuación no tiene soluciones reales" << endl;
		x1 = (-b / 2) + sqrt(-discriminante);
		x2 = (-b / 2) - sqrt(-discriminante);
		
		cout << "La primera raiz es " << x1 << "i" << endl;
		cout << "La segunda raiz es " << x2 << "i" << endl;
	}
	else{
		x1 = (-b / 2) + sqrt(discriminante);
		x2 = (-b / 2) - sqrt(discriminante);
		
		cout << "La primera raiz es " << x1 << endl;
		cout << "La segunda raiz es " << x2 << endl;
	}
	
}

void diferenteDeUno(double a, double b, double c){
	double discriminante, x1, x2;
	discriminante = pow(b, 2) - 4 * a * c;
	
	if (discriminante < 0){
		cout << "La ecuación no tiene soluciones reales" << endl;
		x1 = ((-b) + sqrt(-discriminante)) / (2 * a);
		x2 = ((-b) - sqrt(-discriminante)) / (2 * a);
		
		cout << "La primera raiz es " << x1 << "i" << endl;
		cout << "La segunda raiz es " << x2 << "i" << endl;
	}
	else{
		x1 = ((-b) + sqrt(discriminante)) / (2 * a);
		x2 = ((-b) - sqrt(discriminante)) / (2 * a);
		
		cout << "La primera raiz es " << x1 << endl;
		cout << "La segunda raiz es " << x2 << endl;
	}
}

int main(){
	setlocale(LC_ALL, "spanish");
	double a, b, c;
	char opc;
	
	cout << "----------------- Hola esta es una calculadora para calcular las raices de una ecuación de segundo grado -----------------" << endl;
	while(opc != 'N' && opc !='n'){
		cout << "Ingresa el valor de a: ";
		cin >> a;
		cout << "Ingresa el valor de b: ";
		cin >> b;
		cout << "Ingresa el valor de c: ";
		cin >> c;
		
		if(a == 1 or a == -1){
			igualAUno(a, b, c);
		}
		else{
			diferenteDeUno(a, b, c);
		}
		
		cout << "¿Quieres continuar? S/N: ";
		cin >> opc;
	}
	
	cout << "Presiona una tecla para continuar..." << endl;
    _getch();
    
	return 0;
}

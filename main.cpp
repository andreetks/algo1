#include <iostream>
#include <conio.h>
#include <sstream>


using namespace std;

bool validaN(string entrada){
	bool valida= true;
	int tam = entrada.size();
	for(int i=0;i<tam;i++){
		if( entrada[i] < 46 || entrada[i] > 57 ){
                valida = false;
                break;
		} // limita el rango de entrada desde . a 9
		if( entrada[i] == 47){
			        valida = false;
			        break;
                }//excluye al slash de la lista limitada
	}//itera para validar cada caracter ingresado
	return valida;
}; //funcion que retorna el valor de valida como verdadero o falso




int main() {

	string num1;
	cout<< "Ingrese un numero: \n";
	cin>> num1;

	while(!validaN(num1)){
		cout<< "Oe no seas gil te dije numero ctmr \n";
		cin.clear();
		cin.ignore();
		cout<< "Ingrese un numero: \n";
		cin>> num1;
	}
	string num2;
	cout<< "Ingrese un numero: \n";
	cin>> num2;

	while(!validaN(num2)){
		cout<< "Oe no seas gil te dije numero ctmr \n";
		cin.clear();
		cin.ignore();
		cout<< "Ingrese un numero: \n";
		cin>> num2;
	}

	float numv1= 0.0, numv2= 0.0;


	istringstream (num1)>> numv1;
	istringstream (num2)>> numv2;


	cout<< "La suma es:" << numv1 + numv2 << endl ;

	getch();
	return 0;
}

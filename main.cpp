#include <iostream>
#include <conio.h>

using namespace std;

bool validaN(string entrada){
	bool valida= true;
	int tam = entrada.size();
	for(int i=0;i<tam;i++){
		if( entrada[i] <= 43 || entrada[i] >= 57 ){
			valida = false;
			break;
		}
	}
	return valida;
};


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
	
	cout<< "congratulation no eres gil " ;
	
	getch();
	return 0;
}

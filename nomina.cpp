#include <iostream>
#include <string>

using namespace std;

int main(){
	int sueldo;
	int nomina = 0;
	int personal;
	
	cout<<"Ingresa el numero de personal: "<<endl;
	cin>>personal;
	
	for(int incremento = 1; incremento<=personal; incremento++){
		cout<<"Ingresa el sueldo del trabajador: "<<endl;
		cin>>sueldo;
		nomina = nomina + sueldo;
		
	}
	
	cout<<"La nomina es: "<<nomina<<endl;
	return 0;
}


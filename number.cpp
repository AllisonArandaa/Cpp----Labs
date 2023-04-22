/**
 * Reto: Construir una calculadora con operaciones básicas
 **/

#include <iostream>
#include <string>

using namespace std;

int main(){
	float numero_a;
	float numero_b;
	string operacion;
	
	
	cout<< "Ingresa el numero a: "<<endl;
	cin>>numero_a;
	cout<< "Ingresa el numero b: "<<endl;
	cin>>numero_b;
	cout<< "Ingresa la operacion a realizar +,-,*,/: "<<endl;
	cin>>operacion;
	
	if(numero_b == 0){
		cout<< "Ingresa otro numero distinto de cero: "<<endl;
		cin>>numero_b;
	}
	
	//Código óptimo
	if(operacion=="+"){
		cout<< "La suma es: "<<numero_a+numero_b<<endl;
	}else if(operacion=="-"){
		cout<< "La resta es: "<<numero_a-numero_b<<endl;
	}else if(operacion=="*"){
		cout<< "El producto es: "<<numero_a*numero_b<<endl;
	}else if(operacion=="/"){
		cout<< "La division es: "<<numero_a/numero_b<<endl;
	}else{
		cout<< "No se reconoce el simbolo ingresado."<<endl;
	}
	
	/**Código con posibles mejoras
	if(operacion=="+"){
		cout<< "La suma es: "<<numero_a+numero_b<<endl;
	}
	
	if(operacion=="-"){
		cout<< "La resta es: "<<numero_a-numero_b<<endl;
	}
	
	if(operacion=="*"){
		cout<< "El producto es: "<<numero_a*numero_b<<endl;
	}
	
	if(operacion=="/"){
		cout<< "La division es: "<<numero_a/numero_b<<endl;
	}
	*/
	return 0;
}


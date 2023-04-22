#include <iostream>
#include <string>

using namespace std;


void calculate(int N){
	int suma_impares=0; //Definición
	int contador_pares=0;
	int suma_pares=0;
	float promedio_pares=0;
	/*
	 * Increment ==> 1 => impar => 1 + 3 + 5 => 9
	 * Increment ==> 2 => par => 1
	 * Increment ==> 3 => impar
	 * Increment ==> 4 => par  => 2  => 1+2/2
	 * Increment ==> 5 => impar
	 * suma_impares => 1 + 3 + 5
	 * 
	 * */
	
	for(int increment=1; increment<=N; increment++){
		
		if(increment%2==0){//es par?
			contador_pares = contador_pares + 1;
			suma_pares = suma_pares + increment;
		}else{//es impar
			
			suma_impares = suma_impares + increment; // Re-definición
		}
	}
	promedio_pares = suma_pares / contador_pares;
	cout<<"El promedio de los numeros pares es: "<<promedio_pares<<endl;
	cout<<"La suma de los numeros impares es: "<<suma_impares<<endl;
	
  
}


int main(){
	
	int n;
	cout<<"Ingresa el valor de N: "<<endl;
	cin>>n;
	
	calculate(n);
	
	return 0;
}

//Obten el mayor y menor numero de los numeros de un array

#include <iostream>
#include <string>

using namespace std;

int main(){
int numeros[7];
int mayor;
int menor;


for(int i=1; i<7; i++){
	cout<<"Enter a number: "<<endl;
	cin>>numeros[i];
	if(i == 0){
		menor = numeros[i];
		mayor = numeros[i];
	}else if(numeros[i]>mayor){  
	    mayor = numeros[i];
	}else{
		menor = numeros[i];
	}
	
}
cout<<"The biggest number is: "<<mayor<<" "<<"the smallest number is:"<<menor<<endl;
return 0;
}

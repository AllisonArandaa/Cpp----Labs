

#include <iostream>
#include <string>

using namespace std;

int main(){
float notas[8];
float suma=0;

for(int i=0; i<8; i++){
	cout<<"Ingresa la nota de la asignatura numero: "<<i+1<<endl;
	cin>>notas[i];
	suma = suma+notas[i];
}
cout<<"El promedio de las notas es: "<<suma/8;

return 0;
}

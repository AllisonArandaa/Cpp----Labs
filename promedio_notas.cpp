//calcula el promedio de 8 notas de unn alumno usando array

#include <iostream>
#include <string>

using namespace std;

int main(){
int notas[8];
int suma = 0;

for(int i=1; i<8; i++){
	cout<<"Enter your note: "<< i+1<<endl;
	cin>>notas[i];
	suma = suma+notas[i];
}
cout<<"Your gpa is: "<<suma/8;
return 0;
}

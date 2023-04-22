/*
 * Clases y objetos
 * 
 * **/
 
#include <iostream>
#include <string>


using namespace std;

class Alumno {
	string apellido;
	float promedio;
	//agregar mas propiedades
	public:
	    void set_apellido( string lastname){
			apellido = lastname;
		}
		void set_promedio (float prom){
			promedio = prom;
		}
		string get_apellido(){
			return apellido;
		}
		float get_promedio (){
			return promedio;
		}
		void print_info(){
			cout<<"Welcome "<<apellido<<" your gpa is: "<<promedio<<endl;
		}
};



int main(){
	Alumno alumno_1;//agregar mas alumnos & leer cap 4
	string apellido;
	float promedio;
	
	
	cout<<"Ingresa apellido: "<<endl;
	cin>>apellido;
	cout<<"Ingresa promedio: "<<endl;
	cin>>promedio;
	
	alumno_1.set_apellido(apellido);
	alumno_1.set_promedio(promedio);
	alumno_1.print_info();
		
	return 0;
}

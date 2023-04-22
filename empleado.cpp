
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

/**
class Empleado {
	string name;
	string departamento;
	string posicion;
	float salario;
	public:
		void set_nombre( string nombre){
			name = nombre;
		}
		void info(){
			cout<<"Nombre: "<<name<<endl;
		}
		void set_departamento(string depa){
			departamento = depa;
	    }
	    string get_departamento(){
			return departamento;
		}
		void set_posicion(string pos){
      		posicion = pos;
      	}
      	string get_posicion(){
			return posicion;
		}
		void set_salario(float sal){
			salario = sal;
		}
		float get_salario(){
			return salario;
		}
		void print_info(){
			cout<<name<< endl;
			cout<<departamento<<endl;
			cout<<posicion<<endl;
			cout<<salario<<endl;
		}
};
**/

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
	
	/**Empleado empleado_1;
	string nombre;
	string departamento;
	string posicion;
	float salario;
	cout<<"Ingresa el nombre: "<<endl;
	cin>>nombre;
	cout<<"Ingresa el departamento: "<<endl;
	cin>>departamento;
	cout<<"Ingresa la posición: "<<endl;
	cin>>posicion;
	cout<<"salario: "<<endl;
	cin>>salario;
	
	empleado_1.set_nombre(nombre);
	empleado_1.set_departamento(departamento);
	empleado_1.set_posicion(posicion);
	empleado_1.set_salario(salario);
	empleado_1.print_info();
	//cout<<empleado_1.get_posicion()<<endl;
	**/
	
	return 0;
}


#include <iostream>
#include <string>

using namespace std;

class Empleado{
	string nombre;
	string apellido;
	float salario;
	
	public:
		void set_salario(float s){
			salario = s;
		}
		void update_salario(float *salario){
			*salario = *salario + (*salario * 0.10);
			cout<<"Su nuevo salario es: "<<*salario<<endl;
		}
		void set_apellido(string lastname){
			apellido = lastname;
		}
		void set_nombre(string name){
			nombre = name;
		}
		string get_apellido(){
			return apellido;
		}
		string get_nombre(){
			return nombre;
		}
		void print_info(){
          
            cout<<apellido<<" "<< nombre<<endl;
		}	
};
int main(){

	Empleado empleado_1;
	float s;
	
	cout<<"Ingrese el salario: "<<endl;
	cin>>s;
	
	empleado_1.set_salario(s);
	empleado_1.set_apellido("Aranda");
	empleado_1.set_nombre("Allison");
	empleado_1.update_salario(&s);
	empleado_1.print_info();
	
	 // 8 + 10 => 18
	//mi_funcion(&number,);// my_function(0xjjdejfi54);
	//cout<<"Salida de my_function "<<number<<endl;
	/**	alumno_1.set_apellido(apellido);
	alumno_1.set_promedio(promedio);
	alumno_1.print_info();
	**/
	return 0;
}


#include <iostream>
#include <string>

using namespace std;
//El operador & es de dirección en memoria ram

//El operador * es de contenido, acceder al contenido (no a su memoria ram)

//int hola_futuro(int *ptrNuevo){ //int my_function(0xjjdejfi54) => ptrValor => podemos acceder a la memoria ram de la variable raíz y a su valor
	//ptrValor => tiene la dirección de memoria ram, y gracias a esa dirección
	// se puede cambiar el contenido, qué contenido, el que tenga la dirección de memoria ram
	
	//0xjehsk3jd + 10 => no tiene sentido
//	*ptrNuevo = *ptrNuevo + 20; 
	//+20//	return *ptrNuevo;
//}
int apply_cost(int *descuento){
	
	if(*descuento <= 100){
		cout<<"No hay descuento"<<endl;
		
	}else if(*descuento >=101 && *descuento < 300){
		*descuento = *descuento - (*descuento*0.05);
		cout<<"Tienes un descuento del %5"<<endl;
		
	}else if(*descuento >300 && *descuento >=1000){
		*descuento = *descuento -(*descuento*0.15);
		cout<<"tienes un descuento del %15"<<endl;
	}else{
		*descuento = *descuento - (*descuento*0.25);
		cout<<"tienes un descuento del %25"<<endl;
	}
	
	
	return *descuento;
}

int main(){

	//int number = 6;
	int producto;
	
	
	cout<<"Ingresa el costo del producto: "<<endl;
	cin>>producto;
	
	apply_cost(&producto);
	cout<<"Tu nuevo costo es: "<<producto<<endl;
	//numero = numero + my_function(numero); //8 => 8
	 // numero = 8 + 18 => 26
	
	 // 8 + 10 => 18
	//mi_funcion(&number,);// my_function(0xjjdejfi54);
	//cout<<"Salida de my_function "<<number<<endl;
	
	return 0;
}

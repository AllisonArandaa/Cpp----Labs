#include <iostream>
#include <string>

using namespace std;



float apply_cost(int clave, float minutos){

	float total_price;
	
    if(clave==12){
		
		total_price = minutos*2;
		
    }else if(clave==15){
		
		total_price = minutos*2.2;
		
	}else if(clave==18){
		
		total_price = minutos*4.5;;
		
	}else if(clave==19){
		
		total_price = minutos*3.5;
		
	}else if(clave==23){
		
		total_price = minutos*6;
	}else if(clave==25){
		
		total_price = minutos*6;	
	
	}else if(clave==29){
		
		total_price = minutos*5;
    }
    else{
		total_price = 0;
	}
	
	return total_price;
}
//
float apply_cost(int clave, float minutos){

	float total_price;
	
	switch(clave){
		case 12:
			total_price = minutos*2;
		break;
		
		case 18:
			total_price = minutos*4.5;
		break;
		
		case 15:
			total_price = minutos*2.2;
		break;
		
		case 19:
			total_price = minutos*3.5;
		break;
		
		case 23:
			total_price = minutos*6;
		break;
		
		case 25:
			total_price = minutos*6;
		break;
		
		case 29:
			total_price = minutos*5;
		break;
		
		default:
			total_price = 0;
		break;
	}
	
	return total_price;
}

//



int main(){
	int clave;
	float minutos;
	cout<<"Entra la clave: "<<endl;
    cin>>clave;
    cout<<"Ingresa los minutos: "<<endl;
    cin>>minutos;
	float costo_total = apply_cost(clave,minutos);
	cout<<"Costo total es: "<<costo_total<<endl;
	return 0;
}

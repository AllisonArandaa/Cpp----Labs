#include <iostream>
#include <string>

using namespace std;



float apply_discount(float total_price){
	float price_with_discount;
	
    
    if(total_price<500){
		
		price_with_discount = total_price;
		
    }else if(total_price>500 && total_price<=1000){
		
		price_with_discount = total_price - (total_price * 0.05);
		
	}else if(total_price>1000 && total_price<=7000){
		
		price_with_discount = total_price - (total_price * 0.11);
		
	}else if(total_price>7000 && total_price<=15000){
		
		price_with_discount = total_price - (total_price * 0.18);
		
	}else{
		
		price_with_discount = total_price - (total_price * 0.25);
		
	}
	
	return price_with_discount;
}


float apply_taxes(float base_price){
	
	float total_price;
	if(base_price>500){
		total_price=20*0.30+(base_price-40)*0.50;
	
	}else if(base_price>40){
		total_price=20*0.30+(base_price-40)*0.40;
		
	}else if(base_price>20){
		total_price=(base_price-20)*0.30;
		
	}else{
		total_price = 0;
	}
	
	return total_price;
}


int main(){
	float base_price;
	cout<<"Entra el monto de la compra: "<<endl;
    cin>>base_price;
	float impuesto = apply_taxes(base_price);
	float precio_final = base_price + impuesto;
	cout<<"El precio final es: "<<precio_final<<endl;
	return 0;
}

#include <iostream>
#include <string>

using namespace std;
int main(){
    int matricula;
    float calificacion;
    float suma=0;
    float promedio;
    
    cout<<"Ingrese su numero de matricula: "<<endl;
    cin>> matricula;
    
    for(int increment = 1; increment <=12; increment++){
        cout<<"Ingrese su calificacion: "<<increment<<endl;
        cin>>calificacion;
    
        suma = suma+calificacion;
        promedio = suma/12;
    }
    
    if(promedio>=6){
        cout<<matricula<<" "<<"promedio: "<< promedio<<" "<< "APROBADO"<<endl;
    }
    else{
        cout<<matricula<<" "<<"promedio: "<< promedio<<" "<< "NO APROBADO"<<endl;
    }
    return 0;
    
}

#include <iostream>
#include <string>

using namespace std;
int main(){
    int n=8;
    float temperatura; 
     
    temperatura = (n/4)+40;
    
    if(n>0){
        cout<<"temperatura: " <<temperatura<<endl;
    }
    else{
        cout<<"escribe un numero mayor a 0"<<endl;
        
        cout<<"temperatura: " <<temperatura<<endl;
    }
    return 0;
    
}

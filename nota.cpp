#include <iostream>
#include <string>

using namespace std;
int main(){
    int note;
    
    cout<<"Entra tu nota: "<< endl;
    cin>>note;
    if(note>8){
        cout<<"APROBADO"<<endl;
    }
    else{
        cout<<"DESAPROBADO"<<endl;
    }
    return 0;
    
}

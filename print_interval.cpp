//using loop askin user data

#include <iostream>
#include <string>

using namespace std;


int main(){
	
	int L;
	int U;
	
	cout<<"Please enter L: "<<endl;
	cin>>L;
	
	cout<<"Please enter U: "<<endl;
	cin>>U;
	
	for (int i = L; i< U; i++){
		cout<<i<<" ";
	}
	
	return 0;
}

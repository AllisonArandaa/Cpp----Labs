//Author: Allison Aranda
//Course: CSCI 135
//Instructor: Maryash
//Assigment: lab 9.E


#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

class Coord3D {
public:
	double x;
	double y;
	double z;
	
};

double length(Coord3D*p){
	double len = sqrt(pow(p-> x,2)+ pow(p->y,2)+ pow(p->z,2));
	return len;
	}

Coord3D*fartherFromOrigin(Coord3D *p1, Coord3D *p2){
	if(length(p1)>length(p2)){
		return p1;
		}else{
			return p2;
			}
	
	}
	
void move(Coord3D *ppos, Coord3D *pvel, double dt){
	Coord3D &v = *ppos;
	Coord3D &X = *pvel;
	
	v.x = v.x + (X.x*dt);
	v.y = v.y + (X.y*dt);
	v.z = v.z + (X.z*dt);
	*ppos = v;
	
	}	
//allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z){
	cout << " dynamically allocated memory for structure "<< endl;
	Coord3D* ppos = new Coord3D;
	ppos -> x = x;
	ppos -> y = y;
	ppos -> z = z;
	return ppos;
	
	}

//Function to free memory
void deleteCoord3D(Coord3D *p){
	cout << " Deleting the structure " << endl;
	delete p;
	
	}


int main(){
	double x,y,z;
	cout << "Enter position: ";
	cin >> x >> y >> z;
	
	Coord3D *ppos = createCoord3D(x,y,z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
}
	
	
	//Coord3D pos = {0,0,100.0};
	//Coord3D vel = {1,-5,0.2};
	
	//move(&pos, &vel, 2.0);
	//cout << pos.x << " " << pos.y << " " << pos.z << endl;

	//return 0;

	//Coord3D pointP = {10,20,30};
	//Coord3D pointQ = {-20,21,-22};
	
	//cout << "Address of P: " << &pointP <<endl;
	//cout << "Address of Q: " << &pointQ <<endl << endl;
	
	//Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
	//cout << "ans = " << ans << endl;
	
	//cout << length(&pointP) << endl;



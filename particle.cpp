//Author: Allison Aranda
//Course: CSCI 135
//Instructor: Maryash
//Assigment: lab 9.F


#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>

using namespace std;


class Coord3D{
	public:
		double x,y,z;
	};

class Particle {
public:
	double x;
	double y;
	double z;
	double vx;
	double vy;
	double vz;

};

Particle* createParticle(double x1, double y1, double z1, double vx1, double vy1, double vz1){

Particle *p;

p=(Particle*)malloc(sizeof(Particle));
p->x=x1;
p->y=y1;
p->z=z1;
p->vx=vx1;
p->vy=vy1;
p->vz=vz1;
return p;
}

void setVelocity(Particle *p, double vx, double vy, double vz){
	p-> vx = vx;
	p-> vy = vy;
	p-> vz = vz;
	}

Coord3D getPosition(Particle *p){
	Coord3D cd;
	cd.x = p ->x;
	cd.y = p ->y;
	cd.z = p ->z;
	return cd;
	
	}


void move(Particle *p, double dt){
	static int i = 0;
	p -> x += i*dt;
	p -> y += 0.03;
	p -> z += 0.01;
	i++;
	
	}


//Function to free memory
void deleteParticle(Particle *p){
	delete(p);
	
	}


int main() {
    // make new particle
    Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
    double time = 0.0;
    double dt = 0.1;
    while(time < 3.0) {
        // update its velocity
        setVelocity(p, 10.0 * time, 0.3, 0.1);

        // move the particle
        move(p, dt);
        time += dt;

        // reporting its coordinates
        cout << "Time: " << time << " \t";
        cout << "Position: " << getPosition(p).x << ", " << getPosition(p).y << ", "
             << getPosition(p).z << endl;
    }
    // remove the particle, deallocating its memory
    deleteParticle(p);
    return 0;
}

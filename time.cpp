//Author: Allison Aranda
//Course: CSCI 135
//Instructor: Maryash
//Assigment: lab 10.A


#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

class Time { 
public:
    int h;
    int m;
};


	
enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie{
	public:
	string title;
	Genre genre;
	int duration;
	
	};

class TimeSlot{
	public:
	Movie movie;
	Time startTime;

};

int minutesSinceMidnight(Time time){
	return (time.h*60+time.m);
}
int minutesUntil(Time earlier, Time later){
	int h = later.h - earlier.h-1;
	int mm1 = 60-earlier.m;
	int mm2 = later.m;
	return (h*60+mm1+mm2);
	
}


Time addMinutes(Time time0, int min){
	Time ans;
	ans.m = time0.m + min;
	ans.h = time0.h;
	
	if(ans.m >= 60){
		ans.h += (ans.m - ans.m % 60)/60; // update hours
		ans.m = ans.m % 60;
		}
	return ans;	
	
	}


	
void printTime(Time time){
	cout<<time.h << " :" << time.m << endl;
	
	}	
	
void printMovie(Movie mv){
	string g;
	switch (mv.genre){
		case ACTION : g = "ACTION";
		break;
		
		case COMEDY : g = "COMEDY";
		break;
		
		case DRAMA : g = "DRAMA";
		break;
		
		case ROMANCE : g = "ROMANCE";
		break;
		
		case THRILLER : g = "THRILLER";
		break;
		
		}
	cout << mv.title << "" << g << "(" << mv.duration<< ")"	;
	}
	
void printTimeSlot(TimeSlot ts){
	printMovie(ts.movie);
	printTime(ts.startTime);
	cout<<"min"<<endl;
	
	}	
	

int main(){
	Movie movie1 = {"Back to the Future", COMEDY, 116};
	Movie movie2 = {"Black Panther", ACTION, 134};
	TimeSlot morning = {movie1, {9,15}};
	TimeSlot daytime = {movie2, {12,15}};
	TimeSlot evening = {movie2, {16,45}};
	printTimeSlot(morning);
	printTimeSlot(daytime);
	printTimeSlot(evening);
	return 0;
	
	
	//Time time0;
	//time0.m = 10;
	//time0.h = 8;
	//Time ans = addMinutes (time0 , 75);
	//cout << "New time: "<< ans.h << ": " << ans.m;
	
	/* Time t1,t2;
	cout << "Enter first time: ";
	cin>> t1.h>> t1.m;
	cout << "Enter second time: ";
	cin>> t2.h >> t2.m;
	cout<< "These moments are "<< minutesSinceMidnight(t1)<< "and " << minutesSinceMidnight(t2);
	cout<< "minutes after mid night"<<endl;
	cout<< "The interval between them is "<< minutesUntil(t1,t2)<< " minutes."; */
	
}

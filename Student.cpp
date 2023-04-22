
#include <iostream>
#include <string>
#include "student.hpp"

using namespace std;

Student:: Student(){
	firstName = "";
	lastName = "";
	gpa    = 4.0;
	major = "";
}
Student::Student(string firstName, string lastName, float gpa, string major){
	this -> firstName = firstName;
	this -> lastName = lastName;
	this -> gpa = gpa;
	this -> major =major;
}
string Student::getFirstname(){return firstName; }
string Student::getLastname(){return lasttName; }
float Student::getGpa(){return gpa; }
string Student::getMajor(){return Major; }

void Student::setFistname(string firstName){
	this -> firstName = firstName;
}
void Student::setLastname(string lastName){
	this -> last = lastName;
}
void Student::setGpa(float gpa){
	this -> gpa = gpa;
}
void Student::setMajor(string major){
	this -> major = major;
}

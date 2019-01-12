#include "Vehicle.h"

// WARNING: this file is only function definition of the class declared in Vehicle.h


Vehicle :: Vehicle() {
	company = " ";
	enginePower = "0";
	YearOfProduction = "0";
	maxSpeed = "0";	
}

Vehicle :: Vehicle(string c, string e, string y, string m) {
	company = c;
	enginePower = e;
	YearOfProduction = y;
	maxSpeed = m ;
}

void Vehicle :: setCompany(string a) {
	company = a;
}

string Vehicle :: getCompany() {
	return company;
}

void Vehicle :: setYearOfProduction(string a) {
	YearOfProduction = a;
}

string Vehicle :: getYearOfProduction() {
	return YearOfProduction;
} 


string Vehicle :: getEnginePower() {
	return enginePower;
}

void Vehicle :: setEnginePower(string a) {
	enginePower = a;
}

string Vehicle :: getMaxSpeed() {
	return maxSpeed;
}

void Vehicle :: setMaxSpeed(string a) {
	maxSpeed = a;
}

string Vehicle :: display() {
	cout << "Company Name: " << company << endl;
	cout << "Engine Power: " << enginePower << endl;
	cout << "Year of Production: " << YearOfProduction << endl;
	cout << "Maximum Speed: " << maxSpeed << endl;
}

#include "Car.h"

// WARNING: this file is only function definition of the class declared in Car.h

Car :: 	Car() {
	company = " ";
	enginePower = "0";
	YearOfProduction = "0";
	maxSpeed = "0";
	numberOfSeats = "0";
	chairType = "0";
}

Car :: Car(string c, string e, string y, string m,string n, string ct) {
	company = c;
	enginePower = e;
	YearOfProduction = y;
	maxSpeed = m ;	
	numberOfSeats = n;
	chairType = ct;
}

void Car :: setNumberOfSeats(string a) {
	numberOfSeats = a;
}

string Car :: getNumberOfSeats() {
	return numberOfSeats;
}

void Car :: setChairType(string a) {
	chairType = a;
}

string Car :: getChairType() {
	return chairType;
}

string Car :: display() {
	cout << "Company Name: " << company << endl;
	cout << "Engine Power: " << enginePower << endl;
	cout << "Year of Production: " << YearOfProduction << endl;
	cout << "Maximum Speed: " << maxSpeed << endl;
	cout << "Number of Seats: " << numberOfSeats << endl;
	cout << "Chair Type: " << chairType << endl;
}


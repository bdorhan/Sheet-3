#include "Bus.h"

// WARNING: this file is only function definition of the class declared in Bus.h

Bus :: Bus() {
	company = " ";
	enginePower = "0";
	YearOfProduction = "0";
	maxSpeed = "0";	
	numberOfSeats = "0";
	busHeight = "0";		
}

Bus :: Bus(string c, string e, string y, string m, string n, string b) {
	company = c;
	enginePower = e;
	YearOfProduction = y;
	maxSpeed = m ;
	numberOfSeats = n;
	busHeight = b;	
}

void Bus :: setNumberOfSeats(string a) {
	numberOfSeats = a;
}

string Bus :: getNumberOfSeats() {
	return numberOfSeats;
}

void Bus :: setBusHeight(string a) {
	busHeight = a;
}

string Bus :: getBusHeight() {
	return busHeight;
}

string Bus :: display() {
	cout << "Company Name: " << company << endl;
	cout << "Engine Power: " << enginePower << endl;
	cout << "Year of Production: " << YearOfProduction << endl;
	cout << "Maximum Speed: " << maxSpeed << endl;
	cout << "Number of Seats: " << numberOfSeats << endl;
	cout << "Heigt: " << busHeight << endl;
}

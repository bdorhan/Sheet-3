#include "Truck.h"

// WARNING: this file is only function definition of the class declared in Truck.h

Truck :: Truck() {
	company = " ";
	enginePower = "0";
	YearOfProduction = "0";
	maxSpeed = "0";	
	width = 0.0;
	height = 0.0;
	length = 0.0;		
}

Truck :: Truck(string c, string e, string y, string m,float w, float h, float l) {
	company = c;
	enginePower = e;
	YearOfProduction = y;
	maxSpeed = m;	
	width = w;
	height = h;
	length = l;		
}

void Truck :: setHeight(float a) {
	height = a;
}

float Truck :: getHeight() {
	return height;
}

void Truck :: setWidth(float a) {
	width = a;
}

float Truck :: getWidth() {
	return width;
}

void Truck :: setLength(float a) {
	length = a;
}

float Truck :: getLength() {
	return length;
}

float Truck :: volume() {
	float v = 0.0;
	v = height * width * length;
	return v;
}

string Truck :: display() {
	cout << "Company Name: " << company << endl;
	cout << "Engine Power: " << enginePower << endl;
	cout << "Year of Production: " << YearOfProduction << endl;
	cout << "Maximum Speed: " << maxSpeed << endl;
	cout << "Height: " << height << endl;
	cout << "Width: " << width << endl;
	cout << "Length: "  << length << endl;
	cout << "Volume: " << volume() << endl;
}



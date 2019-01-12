
#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Bus.h"

using namespace std; 

int main(int argc, char** argv) {

	Car* arr_Car = new Car[5];
	Bus* arr_Bus = new Bus[5];
	Truck* arr_Truck = new Truck[5];
	Vehicle* arr_Vehicle = new Vehicle[5];
	
	cout << "Please Create 5 Car objects!" << endl;
	for(int i = 0; i<5 ; i++) {
		string x1;
		string x2;
		string x3;
		string x4;
		string x5;
		string x6;
		cout << "Company Name: ";
		cin >> x1;
		cout << "Engine Power: ";
		cin >> x2;
		cout << "Year of Production: ";
		cin >> x3;
		cout << "Maximum Speed: ";
		cin >> x4;
		cout << "Number of Seats: ";
		cin >> x5;
		cout << "Chair Type: ";
		cin >> x6;
		cout << endl;
		
		Car c(x1,x2,x3,x4,x5,x6);
		arr_Car[i] = c;
	}
	
	cout << "Please Create 5 Bus objects!" << endl;
	for(int i = 0; i<5 ; i++) {
		string x1;
		string x2;
		string x3;
		string x4;
		string x5;
		string x6;
		cout << "Company Name: ";
		cin >> x1;
		cout << "Engine Power: ";
		cin >> x2;
		cout << "Year of Production: ";
		cin >> x3;
		cout << "Maximum Speed: ";
		cin >> x4;
		cout << "Number of Seats: ";
		cin >> x5;
		cout << "Bus Height: ";
		cin >> x6;
		cout << endl;
		
		Bus b(x1,x2,x3,x4,x5,x6);
		arr_Bus[i] = b;
	}
	
	cout << "Please Create 5 Truck objects!" << endl;
	for(int i = 0; i<5 ; i++) {
		string x1;
		string x2;
		string x3;
		string x4;
		float x5;
		float x6;
		float x7;
		cout << "Company Name: ";
		cin >> x1;
		cout << "Engine Power: ";
		cin >> x2;
		cout << "Year of Production: ";
		cin >> x3;
		cout << "Maximum Speed: ";
		cin >> x4;
		cout << "Width: ";
		cin >> x5;
		cout << "Height: ";
		cin >> x6;
		cout << "Length: ";
		cin >> x7;
		cout << endl;
		
		Truck t(x1,x2,x3,x4,x5,x6,x7);
		arr_Truck[i] = t;
	}
	
	cout << "Car list" << endl;
	for(int i = 0; i < 5 ;i++) {
		arr_Car[i].display();
	}
	
	cout << "Bus list" << endl;
	for(int i = 0; i < 5 ;i++) {
		arr_Bus[i].display();
	}
	
	cout << "Truck list" << endl;
	for(int i = 0; i < 5 ;i++) {
		arr_Truck[i].display();
	}
	
	if(arr_Car)
		delete arr_Car;
	if(arr_Bus)
		delete arr_Bus;
	if(arr_Truck)
		delete arr_Truck;
	if(arr_Vehicle)
		delete arr_Vehicle;
	return 0;
}

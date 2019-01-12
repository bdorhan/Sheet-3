
#include "Vehicle.h"
#include <iostream>

using namespace std;

class Car:public Vehicle{
	//Attributes
	string numberOfSeats;
	string chairType;
	
	public:
		//Constructors
		
		/*
		Description	:Constructor without any parameter
		*/
		Car();

		/*
		Description	:Constructor takes every attribute defined in this class ass paramater
		*/
		Car(string c, string e, string y, string m,string n, string ct);

		//Setters and Getters	
			
		/*
		Description	:Getter function for company attribute
		*/
		string getNumberOfSeats();		
	
		/*
		Description	:Setter function for company attribute
		*/
		void setNumberOfSeats(string s);

		/*
		Description	:Getter function for company attribute
		*/		
		string getChairType();

		
			/*
		Description	:Setter function for company attribute
		*/
		void setChairType(string a);
	
		
		//Functions	
		
		/*
		Description	: Displays the information to the user
		*/	
		string display();
		
};


#include "Vehicle.h"
#include <iostream>

using namespace std;

class Bus:public Vehicle{
	//Attributes
	string numberOfSeats;
	string busHeight;

	public:
		//Constructors
	
		/*
		Description	:Constructor without any parameter
		*/
		Bus();
		
		/*
		Description	:Constructor takes every attribute defined in this class ass paramater
		*/
		Bus(string c, string e, string y, string m, string n, string b);
		
		//Setters and Getters	
					
		/*
		Description	:Setter function for company attribute
		*/		
		void setNumberOfSeats(string a);
		
		/*
		Description	:Getter function for company attribute
		*/
		string getNumberOfSeats();		
		
		/*
		Description	:Setter function for company attribute
		*/	
		void setBusHeight(string a);	
		
		/*
		Description	:Getter function for company attribute
		*/		
		string getBusHeight();
		
		//Functions
		
		/* 
		Description	: Displays the information to the user
		*/
		string display();
};

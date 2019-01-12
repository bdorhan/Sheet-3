
#include <string>
#include <iostream>

using namespace std;
#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {	

	//Attributes
	protected:
		string company;
		string enginePower;
		string YearOfProduction;
		string maxSpeed ;
	
	public:
		//Constructors
		
		/*
		Description	: Constructor without any parameter
		*/
		Vehicle();
		
		/*
		Description	: Constructor takes every attribute defined in this class ass paramater
		*/
		Vehicle(string c, string e, string y, string m);
		
		
		//Setter and Getter Functions
		
		/*
		Description	: Setter function for company attribute
		*/	
		void setCompany(string a);
		
		/*
		Description	: Getter function for company attribute
		*/	
		string getCompany();
		
		/*
		Description	:Setter function for yearOfProduction attribute
		*/		
		void setYearOfProduction(string a);
		
		/*
		Description	:Getter function for yearOfProduction attribute
		*/	
		string getYearOfProduction();
			
		/*
		Description	:Setter function for enginePower attribute
		*/	
		void setEnginePower(string a);
		
		/*
		Description	:Getter function for enginePower attribute
		*/	
		string getEnginePower();
			
		/*
		Description	:Setter function for maxSpeed attribute
		*/
		void setMaxSpeed(string a);
		
		/*
		Description	:Getter function for maxSpeed attribute
		*/		
		string getMaxSpeed();
				
		
		//Functions
		
		/*
		Description	: Displays the information to the user
		*/	
		string display();
			
};

#endif


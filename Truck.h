
#include "Vehicle.h"
#include <iostream>

using namespace std;

class Truck : public Vehicle {
	//Attributes
	float width;
	float height;
	float length;	
	
	public:
		//Constructors
		
		/*
		Description	:Constructor without any parameter
		*/
		Truck();
		
		/*
		Description	:Constructor takes every attribute defined in this class ass paramater
		*/
		Truck(string c, string e, string y, string m,float w, float h, float l);
		
		//Setters and Getters				
		
		/*
		Description	:Setter function for company attribute
		*/	
		void setHeight(float h);	
		
		/*
		Description	:Getter function for company attribute
		*/
		float getHeight();
				
		/*
		Description	:Setter function for company attribute
		*/		
		void setWidth(float w);
		
		/*
		Description	:Getter function for company attribute
		*/
		float getWidth();		
		
		/*
		Description	:Setter function for company attribute
		*/
		void setLength(float d);		
		
		/*
		Description	:Getter function for company attribute
		*/		
		float getLength();
		
		//Functions
		
		/*
		Description	: Calculates the volume of truck
		*/	
		float volume();	
		
		/*
		Description	: Displays the information to the user
		*/
		string display();		
};

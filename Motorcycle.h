#include <string>
#include "Vehicle.h"

class motorcycle:public carSystem {
	string tireManufacturer;
	float length;
	
	void setTireManufacturer(string s);
	string getTireManufacturer;
	
	void setLength(float a);
	float getLength();
	
};

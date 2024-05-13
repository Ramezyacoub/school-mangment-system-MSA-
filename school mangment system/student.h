#pragma once
#include <iostream>
#include "date.h"
class Student: public date 
{
protected:

	string name;

	int Class ;


public:


	void Addrecord(string n , int c)
	{
		
			name = n;
	
			Class = c;

		
	}
};

//void student::setAddrecord(string n , int c)

#pragma once
#include <iostream>
#include "date.h"
class Student: public date 
{
protected:

	string name;

	int Class ;

	int RollNo ;

public:



	void Addrecord(string n , int c , int d)
	{
		
			name = n;
	
			Class = c;

			RollNo = d;
	}
	
	void setname(string N)
	{
		name = N;
	}

	string getName()
	{
		return name;
	}

	void setClass(int c)
	{

		 Class = c;
	}
	int getRollno()
	{
		return RollNo;
	}
	int getClass()
	{
		return Class;
	}

	void setmonth(string m)
	{
		month = m;
	}

	void setday(int d)
	{
		day = d;
	}

	string getmonth()
	{
		return month;
	}

	int getday()
	{
		return day;
	}
	
	
	
	
};

//void student::setAddrecord(string n , int c)

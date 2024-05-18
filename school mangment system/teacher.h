
#pragma once
#include <iostream>
#include "date.h"
# include "student.h"
# include <vector>
#include <string>
using namespace std;

class teacher : public Student
{
protected:

	double salary;
	string position;
	double hourlypayed;
	double workinghours;

public:

	void setsalary(int s)
	{
		salary = s;
	}

	void setposition(string po)
	{
		position = po;

	}

	string getposition()
	{
		return position;
	}


	void makesalary(vector<teacher>& myteachervector) 
	{
		bool foun = false;
		int ID;
		cout << "enter your ID: " ;
		cin >> ID;
		
		for (int i = 0 ; i < myteachervector.size(); i++)
			if (ID == myteachervector[i].RollNo)
			{
				cout << "Enter worked hours Of " << myteachervector[i].getName() << " ID :" << myteachervector[i].getRollno() << endl;

				cin >> myteachervector[i].workinghours;
				cout << "Enter your payrate : " << endl;
				cin >> myteachervector[i].hourlypayed;
				cout << "Your salary : " << endl;
				cout << myteachervector[i].hourlypayed * myteachervector[i].workinghours <<" LE" <<endl;
				
				foun = true;
				break;
			}
			if(!foun)
			{
				cout << "Student with ID " << ID << " not found.\n";
			}


	}
	
   };






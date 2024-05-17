#pragma once
#include <iostream>
#include "date.h"
# include <vector>
class Student: public date 
{

	

protected:

	string name;
	
	int Class ;

	int RollNo ;

	int fee_paid;

	
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
	

	void fee(vector<Student>& mysamevector) {
		
		int  ID;
		for (int i = 0; i < mysamevector.size(); i++) {

			cout << "Enter Student ID : ";
			cin >> ID;

			if (mysamevector[i].getRollno() == ID) {


				cout << "Enter fee paid for The student " << mysamevector[i].getName() << "ID : " << mysamevector[i].getRollno() << ": ";

				cin >> mysamevector[i].fee_paid;    //instade of  St[i]. or .mysamevector [i].setfee_paid(retur);  becouse its in the class no need for this
				//i dont need pushback here coz i update value for each pushedback studeent
				double total = 80000;
				double due = total - mysamevector[i].fee_paid;

				double fine = 0.0;


				double advance = 0.0;


				if (due < 0) {
					advance = -due;


					due = 0;

				}
				else if (due > 0) {
					fine = 0.14 * total;

				}

				cout << "Fee Payment Recorded for student with ID " << ID << "\n";

				cout << "Fine: " << fine << endl;


				cout << "Due: " << due << endl;

				cout << "Total: " << total << endl;


				cout << "Advance: " << advance << endl;


				return;

			}
			else
			{
				cout << "Student with ID " << ID << " not found.\n";
			}
		}

		
		
	}


};

//void student::setAddrecord(string n , int c)

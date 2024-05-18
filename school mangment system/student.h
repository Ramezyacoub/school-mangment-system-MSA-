#pragma once
#include <iostream>
#include "date.h"
#include <vector>

using namespace std;

class Student : public date {
protected:
    string name;
    int Class;
    int RollNo;
    double fee_paid;
    double Newtotal;

public:
    Student() : fee_paid(0), Newtotal(0) {}

    void setRolle(int d) {
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

    void fee(vector<Student>& mysamevector)
    {
        int ID;
        cout << "Enter Student ID: ";
        cin >> ID;

        for (int i = 0; i < mysamevector.size(); i++) {
            if (mysamevector[i].RollNo == ID) {
                double payment;
                cout << "Enter fee paid for the student " << mysamevector[i].getName() << " ID: " << mysamevector[i].getRollno() << ": ";
                cin >> payment;

                mysamevector[i].fee_paid += payment;

                double total = 80000;
                double due = total - mysamevector[i].fee_paid;

                double fine = 0.0;
                double advance = 0.0;

                if (due < 0) {
                    advance = -due;
                    due = 0;
                }
                else if (due > 0) {
                    fine = 0.14 * due;
                }

                mysamevector[i].Newtotal = due;

                cout << "Fee Payment Recorded for student with ID " << ID << "\n";
                cout << "Fine: " << fine << endl;
                cout << "Due: " << due << endl;
                cout << "Total: " << total << endl;
                cout << "Advance: " << advance << endl;

                return;
            }
        }
        cout << "Student with ID " << ID << " not found.\n";
    }
};

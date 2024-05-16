#include <iostream>
#include <iomanip>
#include "student.h"
#include "Fee.h"
#include "Salary.h"
#include <vector>
#include <cstdlib>
using namespace std;

void EndText()
{
    cout << "Exit succeeded";
} 
int D = 0;
vector<Student> St;
void Maddrecord()
{\
       
    Student S;
    string name, month;
    int c, day;

    D += 1;
    cout << "Day of registration: ";
    cin >> day;
    cout << "Month of registration: ";
    cin >> month;
    cin.ignore();

    cout << "Generated ID: " << 24000 + D << endl;

    cout << endl << "name: ";
    getline(cin, name);

    cout << "class: ";
    cin >> c;

    S.setday(day);
    S.setmonth(month);
    S.Addrecord(name, c, 24000 + D);
    St.push_back(S);
}

bool found = false;
void Msearchrecord()
{
     int checkID;
    cout << "Enter ID to search for: ";
    cin >> checkID;

   
    for (int i = 0; i < St.size(); i++)
    {
        if (checkID == St[i].getRollno())
        {
            cout << endl << "Record is found:" << endl;
            cout << "==================================" << endl;
            cout << "Student Name: " << St[i].getName() << " " << "Class: " << St[i].getClass() << endl << "Day/Month : " << St[i].getday() << "/" <<
                St[i].getmonth() << " " << endl;
            cout << "==================================" << endl << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << endl << "Record is NOT found.";
    }

}

void Mdeleterecord()
{


    int Delrecoed;
    cout << "Enter ID Of the record to delete: ";
    cin >> Delrecoed;

    for (int i = 0; i < St.size(); i++)
    {
        if (Delrecoed == St[i].getRollno())
        {
            St.erase(St.begin() + i);
            cout << "Record deleted successfully." << endl;
            return;
        }
    }

    cout << "Record not found." << endl;
}

void Mcalculatefee()
{
        Fee studentfee;
        float f, d, a;
        cout << "Enter Fees,dues and advance : \n";
        cout << "Fees: "; cin >> f;
        cout << endl << "Dues: "; cin >> d;
        cout << endl << "Advance: "; cin >> a;
        if ((f < 0) || (d < 0) || (a < 0))
        {
            cout << "Enter Valid Number \n";
        }
        else
        { 
            studentfee.calculatefee(f, d, a);
            studentfee.printfee();
        }   
}

void Mcalculatesalary()
{
    Salary Teachersalary;
    float da, co;
    if ( (da < 0) || (co < 0) )
    {
        cout << "Enter Valid Number \n";
    }
    else
    {
        cout << "Enter working Days and cost rate : \n";
        cout << "Days: "; cin >> da;
        cout << endl << "Cost Rate: "; cin >> co;
        Teachersalary.printsalary();
    }
}

void options()
{
    cout << "PLEASE ENTER ACCOUNT TYPE " << endl;
    cout << "1 :: student" << endl << "2 :: Teacher and Staffs " << endl;
    cout << "3 :: EXIT" << endl;
    cout << "Account type choices " << endl;
    int x;
   
    cin >> x;
    cin.ignore();

   

    if (x == 3)
    {
        atexit(EndText);
    }

    if (x == 1)
    {
        int expression;

        do
        {
            cout << "PLEASE ENTER THE CHOICE" << endl;
            cout << "1 :: Add record" << endl;
            cout << "2 :: Search record" << endl;
            cout << "3 :: Modify record" << endl;
            cout << "4 :: Delete record" << endl;
            cout << "5 :: Calculate fee" << endl;
            cout << "6 :: EXIT" << endl;
            cin >> expression;
            cin.ignore();

            switch (expression)
            {
            case 1:
                Maddrecord();
                break;
            case 2:
                Msearchrecord();
                break;
            case 4:
                Mdeleterecord();
                break;
            case 5:
                Mcalculatefee();
                break;
            default:
                cout << endl << endl << "Exit succeeded ";
                break;
            }
        } while (expression != 6);
    }
}

int main()
{
    options();

    return 0;
}

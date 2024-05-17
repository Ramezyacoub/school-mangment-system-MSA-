#include <iostream>
#include <iomanip>
#include "student.h"
#include "Salary.h"
#include <vector>
#include <cstdlib>
using namespace std;

void start();

void EndText()
{
    cout << "Exit succeeded";
} 

int D = 0;
vector<Student> St;
Student S;
int day;
int chkDate()
{
   
    do
    {
        cout << "Day of registration: ";


        cin >> day;
        if (day < 1 || day > 31)
            cout << "Enter valid day " << endl;

    } while (day < 1 || day > 31);
    return day;
}

void Maddrecord()
{

    chkDate();

    string name, month;
    int c ;

    D += 1;

    

        cout << "Month of registration: ";

        cin >> month;
        cin.ignore();

        cout << "Generated ID: " << 24000 + D << endl;

        cout << endl << "name: ";
        getline(cin, name);

        do
        {
            cout << "class: ";
            cin >> c;
            if (c < 1 || c > 12)
                cout << "school class should from 1 to 12" << endl;;
        } while (c < 1 || c > 12);

        S.setday(day);
        S.setmonth(month);
        S.Addrecord(name, c, 24000 + D);
        St.push_back(S);
        cout << endl << "==Record Saved==" << endl << endl;

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


void Editclass()
{
    int Edit;
    int checkclass;
    cout << "Enter ID to Edit record: ";
    cin >> Edit;

    do
    {
        cout << "Enter New class: ";
        cin >> checkclass;
    
        if (checkclass < 1 || checkclass > 12)
            cout << "school class should from 1 to 12" << endl;;
    } while (checkclass < 1 || checkclass > 12);
    

    for (int i = 0; i < St.size(); i++)
    {
        if (Edit == St[i].getRollno())
        {
            St[i].setClass(checkclass);

        }
    }

}


void EditDay()
{

    int x;
    cout << "Enter ID to Edit record:";
    cin >> x;

    for (int i = 0; i < St.size(); i++)
    {

        if (x == St[i].getRollno())
        {
           int retur = chkDate();

            St[i].setday(retur);
            cout << endl<<"Day changed succesfully" <<endl;
        }
     }
}



void Editname()
{
    string  editname;
    int Edit;
    cout << "Enter ID to Edit record: ";
    cin >> Edit;
    cout << "Enter new name: " << endl;
    cin.ignore();
    getline(cin, editname);
    for (int i = 0; i < St.size(); i++)
    {
        if (Edit == St[i].getRollno())
        {

            St[i].setname(editname);
            cout << "The Name was Changed" << endl;

        }

    }

}

void modifyRecord()
{

    int Select;
    do
    {
        cout << "PLEASE ENTER THE CHOICE TO EDIT" << endl;
        cout << "1 :: Edit Name" << endl;
        cout << "2 :: Edit Class" << endl;
        cout << "3 :: Edit Day" << endl;
        cout << "4 :: EXIT To Main menue" << endl;
        cin >> Select;
        // string editname;

        switch (Select)
        {
        case 1:
            Editname();
            break;

        case 2:
            Editclass();

            break;
        case 3:
            EditDay();

            break;

        case 4:
            start();

        }

    } while (Select != 3);
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



//void Mcalculatesalary()
//{
//    Salary Teachersalary;
//    float da, co;
//
//    cout << "Enter working Days and cost rate : \n";
//    cout << "Days: "; cin >> da;
//    cout << endl << "Cost Rate: "; cin >> co;
//
//    if ((da <= 0) || (co <= 0))
//    {
//        cout << "Enter InValid Number \n";
//    }
//    else
//    {
//        Teachersalary.teacherFee(da, co);
//        Teachersalary.printsalary();
//    }
//}






void start()
{
    cout << "PLEASE ENTER ACCOUNT TYPE " << endl;
    cout << "1 :: student" << endl << "2 :: Teacher and Staffs " << endl;
    cout << "3 :: EXIT" << endl;
    cout << "Account type choices " << endl;
    int x;

    cin >> x;
    cin.ignore();

    do
    {

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
                case 3:
                    modifyRecord();
                    break;
                case 4:
                    Mdeleterecord();
                    break;
                case 5:
                    for (auto& student : St)
                        student.fee(St);  // range-based for loop instead. 
                    break;

                default:
                    cout << endl << endl << "Exit succeeded ";
                    break;
                case 6:
                    void EndText();
                    break;

                }
            } while (expression != 6);
        }
    } while (1 > x > 3);
} 


int main()
{
    start();

    return 0;
}

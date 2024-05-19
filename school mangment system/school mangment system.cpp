#include <iostream>
#include <iomanip>
#include "student.h"
#include <vector>
#include <cstdlib>
#include "teacher.h"
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
        S.setRolle(24000 + D);
        S.setname(name);
        S.setClass(c);
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

    } while (Select != 4);
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




//{
//  TEACHER PART
//  TEACHER PART
//  TEACHER PART
//  TEACHER PART
//  TEACHER PART
//}



//++++++++++++++++++++++ Teacher +++++++++++++++++++++++++++


int IDD = 0;
vector<teacher> Ta;
teacher T;

int cchkDate()
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

void aaddrecord()
{

   cchkDate();

    string na, mo , cc;
   

    IDD += 1;


    cout << "Month of registration: ";

    cin >> mo;
    cin.ignore();

    cout << "Generated ID: " << 20000 + IDD << endl;

    cout << endl << "Teacher name: ";
    getline(cin, na);
 

     cout << "Postion: ";
       
    getline(cin, cc);


    T.setday(day);
    T.setmonth(mo);
    T.setRolle( 20000 + IDD);
    T.setname(na);
    T.setposition(cc);
    Ta.push_back(T);
    cout << endl << "==Record Saved==" << endl << endl;

}

bool ffound = false;
void searchrecord()
{
    int checkID;
    cout << "Enter ID to search for: ";
    cin >> checkID;


    for (int i = 0; i < Ta.size(); i++)
    {
        if (checkID == Ta[i].getRollno())
        {
            cout << endl << "Record is found:" << endl;
            cout << "==================================" << endl;
            cout << "Teacher Name: " << Ta[i].getName() << " " << "Position: " << Ta[i].getposition() << endl << "Day/Month : " << Ta[i].getday() << "/" <<
                Ta[i].getmonth() << " " << endl;
            cout << "==================================" << endl << endl;
            ffound = true;
            break;
        }
    }

    if (!ffound)
    {
        cout << endl << "Record is NOT found.";
    }

}


void deleterecord()
{
    int Delrecoed;
    cout << "Enter ID Of the record to delete: ";
    cin >> Delrecoed;

    for (int i = 0; i < Ta.size(); i++)
    {
        if (Delrecoed == Ta[i].getRollno())
        {
            Ta.erase(Ta.begin() + i);
            cout << "Record deleted successfully." << endl;
            return;
        }
    }

    cout << "Record not found." << endl;
}






void Editposition()
{
    int Edit;
    string checkposition;
    cout << "Enter ID to Edit record: ";
    cin >> Edit;

 
        cout << "Enter New Position: ";
        cin >> checkposition;



    for (int i = 0; i < Ta.size(); i++)
    {
        if (Edit == Ta[i].getRollno())
        {
            Ta[i].setposition(checkposition);

        }
    }

}


void EEditDay()
{

    int x;
    cout << "Enter ID to Edit record:";
    cin >> x;
    cchkDate();

    for (int i = 0; i < Ta.size(); i++)
    {

        if (x == Ta[i].getRollno())
        {
            int retur = chkDate();

            Ta[i].setday(retur);
            cout << endl << "Day changed succesfully" << endl;
        }
    }
}



void EEditname()
{
    string  editname;
    int Edit;
    cout << "Enter ID to Edit record: ";
    cin >> Edit;
    cout << "Enter new  name: " << endl;
    cin.ignore();
    getline(cin, editname);
    for (int i = 0; i < Ta.size(); i++)
    {
        if (Edit == Ta[i].getRollno())
        {

            Ta[i].setname(editname);
            cout << "The Name was Changed" << endl;

        }

    }

}

void mmodifyRecord()
{

    int Select;
    do
    {
        cout << "PLEASE ENTER THE CHOICE TO EDIT" << endl;
        cout << "1 :: Edit Name" << endl;
        cout << "2 :: Edit position" << endl;
        cout << "3 :: Edit Day" << endl;
        cout << "4 :: EXIT To Main menue" << endl;
        cin >> Select;
        // string editname;

        switch (Select)
        {
        case 1:
            EEditname();
            break;

        case 2:
            Editposition();

            break;
        case 3:
            EEditDay();

            break;

        case 4:
            start();

        }

    } while (Select != 4);
}






















void start()
{
    cout << "PLEASE ENTER ACCOUNT TYPE " << endl;
    cout << "1 :: student" << endl << "2 :: Teacher and Staffs " << endl;
    cout << "3 :: EXIT" << endl;
    cout << "Account type choices " << endl;
    int x;
   
    cin >> x;
    cin.ignore();
    int opption;
    do
    {

        if (x == 3 )
        {
            atexit(EndText);
            exit(0);
        }
        
        if (x == 2)
        {
            do
            {

           

            cout << "PLEASE ENTER THE CHOICE" << endl;
            cout << "1 :: Add record" << endl;
            cout << "2 :: Search record" << endl;
            cout << "3 :: Modify record" << endl;
            cout << "4 :: Delete record" << endl;
            cout << "5 :: Calculate salary" << endl;
            cout << "6 :: EXIT" << endl;
            cin >> opption;
            cin.ignore();

            switch (opption)
            {
            case 1:
                aaddrecord();
                break;
            case 2:
                searchrecord();
                break;
            case 3:
                mmodifyRecord();
                break;
            case 4:
                deleterecord();
                break;
            case 5:
                for (auto& Teacher : Ta)
                  Teacher.makesalary(Ta);  // range-based for loop instead.  
                break;

            case 6: break;
                  exit(0);
                  cout << endl << endl << "Exit succeeded ";
            default:
                cout << endl << endl << "Enter valid value ";
                break;
               
            }

             } while (opption !=6);

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
                            student.fee(St); 
                            break;
                            // range-based for loop instead. 
                        break;
                    case 6:
                        exit(0);
                        cout << endl << endl << "Exit succeeded ";
                        break;
                    default:
                        cout << endl << endl << "Enter valid value ";
                        break;
                   

                    }
              } while (expression != 6 );
           }


    } while (1 > x > 3);
    }


int main()
{
    start();
  
    return 0;
}

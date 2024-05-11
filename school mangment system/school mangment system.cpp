

#include <iostream>
#include <iomanip>
#include "student.h"

using namespace std;
void options()
{
   
    cout << " PLEASE ENTER ACCOUNT TYPE " << endl;
    cout << "1 :: student" << endl << "2 :: Teatcher and Staffs " << endl;
    cout << "3 :: EXIT" << endl;
    cout << "Account type choices " << endl;

    int x , Class , day;
    cin >> x;
    cin.ignore();
    string name ,month;
    if (x == 1)
    {
        cout << "Enter student name : "  ; 
        getline(cin, name);
    
        cout << "Enter student Class : ";
        cin >> Class;
        cout << "Enter student month {in letars} : ";
        cin >> month;
        cout << "Enter student day : ";
        cin >> day;
    }

   student first[999];
  
   

}

int main()
{
    options();
   
}


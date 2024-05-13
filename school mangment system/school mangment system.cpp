

#include <iostream>
#include <iomanip>
#include "student.h"


using namespace std;


 
/*
void Addrecord()
{
    const int  studentnum = 20;
    student S[studentnum];
    string n;
    int c;

    for (int i = 0; i < 10; i++)
    {

        cout << "Enter student Name :";
        cin >> n;
        S[i].setName(n);

        cout << "Enter student Class :";
        cin >> c;
        S[i].setClass(c);

    }
}
*/
 void options()
{
    cout << " PLEASE ENTER ACCOUNT TYPE " << endl;
    cout << "1 :: student" << endl << "2 :: Teatcher and Staffs " << endl;
    cout << "3 :: EXIT" << endl;
    cout << "Account type choices " << endl;
    int x;
   
    cin >> x;
    string name, month;
    if (x == 1)
    {
        cout << "PLEASE ENTER THE CHOICE" << endl;
        cout << "1 :: Add record" << endl;
        cout << "2 :: Search record" << endl;
        cout << "3 :: Modify record" << endl;
        cout << "4 :: Delete record" << endl;
        cout << "5 :: Calculate fee" << endl;
        cout << "6 :: EXIT" << endl;
        
        Student s[99];
        int expression;
        cin >> expression;
        do
        {

        
        switch (expression)
        {

        case 1:
            
            for (int i = 0; i < 29; i++)
            {
                string n;
                int c;
                cout << "name : " << endl;
                cin >> n >> c;
                cout << "class :" << endl;
                cin >> c;
                s[i].Addrecord(n, c);
                break;
                //maichel emad
            }
            

        default:
            cout << "Enter valid value";
            break;
        }
        } while (expression !=6 );
    }
    
}

   int main()
   {
       options();

     
       //last edit xsxs




   };
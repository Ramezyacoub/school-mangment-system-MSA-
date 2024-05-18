//#include <iostream>
//#include <iomanip>
//#include "teacher.h"
//#include "Salary.h"
//#include <vector>
//#include <cstdlib>
//using namespace std;
//
//void sstart();
//
//void EEndText()
//{
//    cout << "Exit succeeded";
//}
//
//int IDD = 0;
//vector<teacher> Ta;
//teacher T;
//int dday;
//int cchkDate()
//{
//
//    do
//    {
//        cout << "Day of Hiaring: ";
//
//
//        cin >> dday;
//        if (dday < 1 || dday > 31)
//            cout << "Enter valid dday " << endl;
//
//    } while (dday < 1 || dday > 31);
//    return dday;
//}
//
//void addrecord()
//{
//
//    cchkDate();
//
//    string name, month;
//    int c;
//
//    IDD += 1;
//
//
//    cout << "Month of registration: ";
//
//    cin >> month;
//    cin.ignore();
//
//    cout << "Generated ID: " << 20000 + IDD << endl;
//
//    cout << endl << "name: ";
//    getline(cin, name);
//
//    do
//    {
//        cout << "class: ";
//        cin >> c;
//        if (c < 1 || c > 12)
//            cout << "school class should from 1 to 12" << endl;;
//    } while (c < 1 || c > 12);
//
//    T.setday(dday);
//    T.setmonth(month);
//    T.Addrecord(name, c, 24000 + IDD);
//    Ta.push_back(T);
//    cout << endl << "==Record Saved==" << endl << endl;
//
//}
//
//bool ffound = false;
//void searchrecord()
//{
//    int checkID;
//    cout << "Enter ID to search for: ";
//    cin >> checkID;
//
//
//    for (int i = 0; i < Ta.size(); i++)
//    {
//        if (checkID == Ta[i].getRollno())
//        {
//            cout << endl << "Record is found:" << endl;
//            cout << "==================================" << endl;
//            cout << "Student Name: " << Ta[i].getName() << " " << "Class: " << Ta[i].getClass() << endl << "Day/Month : " << Ta[i].getday() << "/" <<
//                Ta[i].getmonth() << " " << endl;
//            cout << "==================================" << endl << endl;
//            ffound = true;
//            break;
//        }
//    }
//
//    if (!ffound)
//    {
//        cout << endl << "Record is NOT found.";
//    }
//
//}
//
//
//void EEditclass()
//{
//    int Edit;
//    int checkclass;
//    cout << "Enter ID to Edit record: ";
//    cin >> Edit;
//
//    do
//    {
//        cout << "Enter New class: ";
//        cin >> checkclass;
//
//        if (checkclass < 1 || checkclass > 12)
//            cout << "school class should from 1 to 12" << endl;;
//    } while (checkclass < 1 || checkclass > 12);
//
//
//    for (int i = 0; i < Ta.size(); i++)
//    {
//        if (Edit == Ta[i].getRollno())
//        {
//            Ta[i].setClass(checkclass);
//
//        }
//    }
//
//}
//
//
//void EEditDay()
//{
//
//    int x;
//    cout << "Enter ID to Edit record:";
//    cin >> x;
//
//    for (int i = 0; i < Ta.size(); i++)
//    {
//
//        if (x == Ta[i].getRollno())
//        {
//            int retur = cchkDate();
//
//            Ta[i].setday(retur);
//            cout << endl << "Day changed succesfully" << endl;
//        }
//    }
//}
//
//
//
//void EEditname()
//{
//    string  editname;
//    int Edit;
//    cout << "Enter ID to Edit record: ";
//    cin >> Edit;
//    cout << "Enter new name: " << endl;
//    cin.ignore();
//    getline(cin, editname);
//    for (int i = 0; i < Ta.size(); i++)
//    {
//        if (Edit == Ta[i].getRollno())
//        {
//
//            Ta[i].setname(editname);
//            cout << "The Name was Changed" << endl;
//
//        }
//
//    }
//
//}
//
//void mmodifyRecord()
//{
//
//    int Select;
//    do
//    {
//        cout << "PLEASE ENTER THE CHOICE TO EDIT" << endl;
//        cout << "1 :: Edit Name" << endl;
//        cout << "2 :: Edit Class" << endl;
//        cout << "3 :: Edit Day" << endl;
//        cout << "4 :: EXIT To Main menue" << endl;
//        cin >> Select;
//        // string editname;
//
//        switch (Select)
//        {
//        case 1:
//           EEditname();
//            break;
//
//        case 2:
//            EEditclass();
//
//            break;
//        case 3:
//            EEditDay();
//
//            break;
//
//        case 4:
//            sstart();
//
//        }
//
//    } while (Select != 3);
//}
//
//
//
//
//
//
//void deleterecord()
//{
//    int Delrecoed;
//    cout << "Enter ID Of the record to delete: ";
//    cin >> Delrecoed;
//
//    for (int i = 0; i < Ta.size(); i++)
//    {
//        if (Delrecoed == Ta[i].getRollno())
//        {
//            Ta.erase(Ta.begin() + i);
//            cout << "Record deleted successfully." << endl;
//            return;
//        }
//    }
//
//    cout << "Record not found." << endl;
//}
//
//
//
////void Mcalculatesalary()
////{
////    Salary Teachersalary;
////    float da, co;
////
////    cout << "Enter working Days and cost rate : \n";
////    cout << "Days: "; cin >> da;
////    cout << endl << "Cost Rate: "; cin >> co;
////
////    if ((da <= 0) || (co <= 0))
////    {
////        cout << "Enter InValid Number \n";
////    }
////    else
////    {
////        Teachersalary.teacherFee(da, co);
////        Teachersalary.printsalary();
////    }
////}
//
//
//
//
//
//
//
//
//    {
//
//     
//        if (x == 2)
//        {
//            int expression;
//
//           
//                cout << "PLEASE ENTER THE CHOICE" << endl;
//                cout << "1 :: Add record" << endl;
//                cout << "2 :: Search record" << endl;
//                cout << "3 :: Modify record" << endl;
//                cout << "4 :: Delete record" << endl;
//                cout << "5 :: Calculate salary" << endl;
//                cout << "6 :: EXIT" << endl;
//                cin >> expression;
//                cin.ignore();
//
//                switch (expression)
//                {
//                case 1:
//                    addrecord();
//                    break;
//                case 2:
//                    searchrecord();
//                    break;
//                case 3:
//                    mmodifyRecord();
//                    break;
//                case 4:
//                    deleterecord();
//                    break;
//                case 5:
//                   // for (auto& student : St)
//                     //   student.fee(St);  // range-based for loop instead. 
//                    break;
//
//                default:
//                    cout << endl << endl << "Exit succeeded ";
//                    break;
//                case 6:
//                    void EEndText();
//                    break;
//
//           
//       
//    } while (1 > x > 3);
//}
//
//

#pragma once
#include <iostream>
using namespace std;

class Salary {
private:
    float days;
    float daycost;
public:
    void teacherFee(float day, float cost)
    {
        days = day;
        daycost = cost;
    }
    void printsalary() {
       
        cout << endl << "Salary: " << days*daycost <<endl << endl;
    }
};
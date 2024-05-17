#pragma once
#include <iostream>
using namespace std;

class Fee {
private:
    float fees;
    float dues;
    float advance;
public:
    void calculatefee(float fee, float due, float adv)
    {

        fees = fee;

        dues = due;

        advance = adv;

    }
    void printfee()
    {
        cout << endl << "Fee: " << fees << endl << "Dues: " << dues << endl << "Advance: " << advance;
        cout << endl << "Total Fee: " << fees + dues << endl << "remainingFee: " << fees + dues - advance << endl<<endl;
    }
};


#ifndef date_h
#define date_h
# include <iostream>
# include <string>
using namespace std;


class date 
{
protected: 
	string month ;
	int day;

public:
	
	date() : day(0) 
	{
		month = "";
	}
	
};
#endif 
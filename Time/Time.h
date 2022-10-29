#pragma once
#include <iostream>
using namespace std;
class Time
{
	
	int hours, minutes, seconds;
	
public:
	Time();
	Time(int h_, int m_, int s_);
	void TimePrint();
	Time operator +(Time t1);
	Time operator - (Time t1);
	Time operator * (Time t1);
	friend istream& operator >> (istream& is, Time& d);
	friend ostream& operator << (ostream& os, Time& d);

};


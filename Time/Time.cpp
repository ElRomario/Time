
#include <iostream>
#include "Time.h"

using namespace std;
static int maxHour=24, maxMinSec=60;
Time::Time()
{

}

Time::Time(int h_, int m_, int s_)
{
	if (h_ > maxHour || m_ > maxMinSec || s_ > maxMinSec)
		cout << "Incorrect time!";
	else
	{
		hours = h_;
		minutes = m_;
		seconds = s_;
	}
}

void Time::TimePrint()
{
	cout << hours << " : " << minutes << " : " << seconds << endl;
}

Time Time::operator+(Time t1)
{
	Time tmp3;
	tmp3.hours = hours + t1.hours;
	tmp3.minutes = minutes + t1.minutes;
	tmp3.seconds = seconds + t1.seconds;
	if (tmp3.seconds > maxMinSec)
	{ 
		tmp3.seconds -=  maxMinSec;
		tm
	if (tmp3.minutes > maxMinSec)
		tmp3.hours++;
	if (tmp3.hours > maxHour)
		tmp3.hours = maxHour - tmp3.hours;
	return tmp3;
}
Time Time::operator-(Time t1)
{
	Time tmp3;
	tmp3.hours = hours - t1.hours;
	tmp3.minutes = minutes - t1.minutes;
	tmp3.seconds = seconds - t1.seconds;
	return tmp3;
}

istream& operator >>(istream& is, Time& d)
{
	cout << "Please enter hours:"<<endl;
	is >> d.hours;
	cout << "minutes:" << endl;
	is >> d.minutes;
	cout << "seconds:" << endl;
	is >> d.seconds;
	return is;
}

ostream& operator <<(ostream& os, Time& d)
{
	os << d.hours << " : " << d.minutes << " : " << d.seconds;
	return os;
}


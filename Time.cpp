#include <iostream>
#include <string>
#include "TimeClass.h"


//using namespace std;


Time::Time(int x, int y) : hour(x), min(y)
{

};
Time::~Time()
{

};

void Time::set(int x, int y)
{
	hour = x;
	min = y;
}

void Time::get( int&x, int &y) const
{
	x = hour;
	y = min;

}

ostream &operator<<(ostream&os, const Time&v)
{
	os << v.hour << ":" << v.min;
	return os;
}

Time& Time::operator++()
{

}

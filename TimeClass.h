#ifndef TIMECLASS_H
#define TIMECLASS_H
//#include <iomanip>
using namespace std;


class Time
{
	

public:
	Time(int, int);
	~Time();
	void set(int, int);
	void get(int&, int&) const;

	friend ostream &operator<<(ostream&, const Time&);
	Time& operator++();//Pre
	Time operator++(int);//Post+

private:
	int hour;
	int min;
};

ostream &operator<<(ostream&, const Time&);



#endif
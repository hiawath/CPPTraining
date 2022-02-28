#ifndef TIMETEST_H
#define TIMETEST_H


class Time
{
private:
	int hour, min, sec;

public:
	// 持失切1
	Time(int h, int m, int s);

	// 持失切 2
	Time(int abssec);

	void OutTime();
};

#endif
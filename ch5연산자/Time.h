#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;

class Time
{
	friend ostream& operator <<(ostream& c, const Time& T);
	friend ostream& operator <<(ostream& c, const Time* pT);
private:
	int hour, min, sec;

public:
	Time();
	Time(int h, int m, int s);
	void OutTime();
	const Time AddTime(const Time& other) const;
	const Time operator +(const Time& other) const;
	const Time operator +(int s) const;
	Time operator ++();
	const Time operator ++(int dummy);
};






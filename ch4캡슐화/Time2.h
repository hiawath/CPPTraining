#pragma once
class Date;
class Time2
{
	friend void OutToday(Date&, Time2&);
private:
	int hour, min, sec;
public:
	Time2(int h, int m, int s);
};


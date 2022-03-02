#pragma once

class Time2;
class Date
{
	friend void OutToday(Date&, Time2&);
private:
	int year, month, day;
public:
	Date(int y, int m, int d);
};

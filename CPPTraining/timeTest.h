#ifndef TIMETEST_H
#define TIMETEST_H


class Time
{
private:
	int hour, min, sec;

public:
	// ������1
	Time(int h, int m, int s);

	// ������ 2
	Time(int abssec);

	void OutTime();
};

#endif
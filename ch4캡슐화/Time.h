#pragma once
#include <stdio.h>

class Time
{
private:
	int hour, min, sec;

public:
	Time(int h, int m, int s);

	int GetHour();
	void SetHour(int h);

	int GetMinute();
	void SetMinute(int m);
	int GetSecond();

	void OutTime();
};

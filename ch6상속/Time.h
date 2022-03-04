#pragma once
#include <stdio.h>
class Time
{
protected:
	int hour, min, sec;
public:
	Time(int h, int m, int s);
	void OutTime();
};



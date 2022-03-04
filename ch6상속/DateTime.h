#pragma once
#include "Date.h"
#include "Time.h"
class DateTime : public Date, public Time
{
private:
	bool bEngMessage;
	int milisec;
public:
	DateTime(int y, int m, int d, int h, int min, int s, int ms, bool b = false);
	void OutNow();
};



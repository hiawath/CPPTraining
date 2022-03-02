#pragma once
#include "DateMember.h"
class TimeMember
{
	//friend void DateMember::OutToday(TimeMember& t);
private:
	int hour, min, sec;
public:
	TimeMember(int h, int m, int s);
};

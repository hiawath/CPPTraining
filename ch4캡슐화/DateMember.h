#pragma once
#include "TimeMember.h"
#include <stdio.h>
class DateMember
{
private:
	int year, month, day;
public:
	DateMember(int y, int m, int d);
	//void OutToday(TimeMember& t)
	//{
		//printf("오늘은 %d년 %d월 %d일이며 지금 시간은 %d:%d:%d입니다.\n",year, month, day, t.hour, t.min, t.sec);
	//}
};

//DateMember::DateMember(int y, int m, int d) { year = y; month = m; day = d; }


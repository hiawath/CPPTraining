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
		//printf("������ %d�� %d�� %d���̸� ���� �ð��� %d:%d:%d�Դϴ�.\n",year, month, day, t.hour, t.min, t.sec);
	//}
};

//DateMember::DateMember(int y, int m, int d) { year = y; month = m; day = d; }


#pragma once
#include "Time2.h"
#include "Date.h"
#include <stdio.h>


Time2::Time2(int h, int m, int s) { hour = h; min = m; sec = s; }

void OutToday(Date& d, Time2& t)
{
	printf("������ %d�� %d�� %d���̸� ���� �ð��� %d:%d:%d�Դϴ�.\n",
		d.year, d.month, d.day, t.hour, t.min, t.sec);
}
